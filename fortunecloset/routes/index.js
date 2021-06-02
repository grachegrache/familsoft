// 'use strict';

// const request = require('request');
// const {google} = require('googleapis');
// const OAuth2 = google.auth.OAuth2;

// const client_id = process.env.clientid || 'http://762274049296-u7o2dh328es26ss4da45t594pc4m8lr7.apps.googleusercontent.com';
// const client_secret = process.env.clientsecret || 'P8I9k080NQ3JNgac8lLfgix_';
// const redirect_uri = process.env.redirecturi || 'http://ec2-54-175-143-84.compute-1.amazonaws.com:7001/redirect';

// //구글 API 중 접근해야할 곳을 다수로 요청할 수 있다.
// const scopes = ['https://www.googleapis.com/auth/androidpublisher'];

// var tokenStorage = {
//     access_token: null,
//     token_type: null,
//     expires_in: null,
//     refresh_token: null
// };

// let repeat_refresh = null; //setInterval 설정이 저장될 변수 
// const min30 = 30*60*1000; //30분

var express = require('express');
var router = express.Router();
var datasetup = require('../database/dataSetup');
var aes = require('../database/AESCrypt');
var multiparty = require('multiparty');
var fs = require('fs');
require('date-utils');
// var readline = require('readline');

// var r = readline.createInterface({
// 	input:process.stdin,
// 	output:process.stdout
// });

// r.setPrompt('$ ');
// r.prompt();
// r.on('line',function(line){
// 	if(line == 'exit'){
// 		r.close();
// 	}
// 	if(line.length > 0){
// 		var splits = line.split(' ');
// 		if(splits.length == 3){
// 			if(splits[0] == 'block'){
// 				let nickname = splits[1];
// 				try{
// 				var block_date = new Date(splits[2]);
// 				}catch(error){
// 					console.log('Invalid block_date: '+error);
// 					r.prompt();
// 					return;
// 				}

// 				datasetup.setBlockDate(nickname, block_date, function(err, data){
// 					if(!err){
// 						if(data.affectedRows > 0){
// 							console.log('Blocked '+nickname+' until '+block_date);
// 						}else{
// 							console.log(nickname+' is not exist user');
// 						}
// 						r.prompt();
// 					}
// 				});
// 				return;
// 			}
// 		}
// 	}
// 	r.prompt();
// });

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', {title: 'Express'});
});
router.get('/checkServer', function(req, res){
	datasetup.checkIsUpdate(function(err, data){
		if(err){
			res.send(err);
		}else{
			if(data[0].isUpdate == 0){
				res.send('Can not update server because database value is false!');
			}else{
				res.send('Update server');
				var msg = {};
				msg.from = '@server';
				msg.sendTime = new Date().toFormat('YYYY-MM-DD HH24:MI:SS');
				msg.msg = 'update';
				datasetup.io.sockets.emit('chat', aes.socketEncrypt(msg));
			}
		}
	});
});

router.post('/checkVersion', function(req, res) {
	let decAppVersion = aes.decrypt(String(req.body.appVersion));
	console.log('check version '+datasetup.version +"/" +decAppVersion);
	var json = {};
	if (datasetup.version == decAppVersion) {
		json['result'] = 'success';
	} else{
		// console.log('diff version');
		json['result'] = 'diff_version';
	}

	res.json(aes.socketEncrypt(json));
});

router.post('/screenshot', function(req, res){
	req.on('error', function(error){
		console.log('Error: '+error);
		const used = process.memoryUsage();
		for (let key in used) {
		 console.log(`${key} ${Math.round(used[key] / 1024 / 1024 * 100) / 100} MB`);
		}
	   });
	var form = new multiparty.Form({maxFieldSize: 50000, maxFields: 2, autoFields:false , autoFiles:false});
	
  // form.on('error',function(){
  //   res.json(aes.socketEncrypt(rec));
  // });
  // form.autoFiles = false;
  // form.parse(req);
	form.parse(req, function(err, fields, files) {
	  if(err){
			console.log(err);
			var rec = {'req': 'screenshot', 'reason': 'Invalid data'};
			datasetup.securityRecord(rec);
			rec['result'] = 'error';
			res.json(aes.socketEncrypt(rec));

	  } else {
			// console.log(files);
			var pathes = [];
			let fileKeys = Object.keys(files);
			for(var i=0; i<fileKeys.length; i++){
				for(var j=0; j<files[fileKeys[i]].length; j++)
					pathes.push(files[fileKeys[i]][j].path);
			}
			if(pathes.length != 1){
				console.log("wrong file number");
				var rec = {'req': 'screenshot', 'reason': 'no file'};
				datasetup.securityRecord(rec);
				rec['result'] = 'error';
				res.json(aes.socketEncrypt(rec));

				removeTmpFiles(pathes);
			}else if(fields.data == undefined){
				console.log("data undefined");
				var rec = {'req': 'screenshot', 'reason': 'no data'};
				datasetup.securityRecord(rec);
				rec['result'] = 'error';
				res.json(aes.socketEncrypt(rec));

				removeTmpFiles(pathes);
			} else {
				try {
					var decData = JSON.parse(aes.decrypt(String(fields.data[0])));
				} catch(error) {
					console.log('error:'+error);
					var rec = {'req': 'screenshot', 'reason': 'Invalid data'};
					datasetup.securityRecord(rec);
					rec['result'] = 'error';
					res.json(aes.socketEncrypt(rec));

					removeTmpFiles(pathes);
				}
				console.log('screenshot '+JSON.stringify(decData));

				datasetup.checkNickname(decData.nickname, function(err, data){
					if(err){
						decData["result"] = "fail";
						decData["erorr"] = err;
						res.json(aes.socketEncrypt(decData));

						removeTmpFiles(pathes);
					}else{
						if(data.length == 0){
							console.log('error:'+error);
							var rec = {'req': 'screenshot', 'reason': 'no user'};
							datasetup.securityRecord(rec);
							rec['result'] = 'error';
							res.json(aes.socketEncrypt(rec));

							removeTmpFiles(pathes);
						}else{
							datasetup.checkTodayReport(decData.nickname, function(err,data){
								if(err){
									decData["result"] = "fail";
									decData["erorr"] = err;
									res.json(aes.socketEncrypt(decData));

									removeTmpFiles(pathes);
								}else{
									if(data.length < 10){
										var tmpPath = pathes[0];
										var fileName = decData.nickname + '@' + new Date().toFormat('YYYY-MM-DD HH24-MI-SS') + '.png';
										var filePath = process.env.PWD+'/screenshot/'+fileName;
										move(tmpPath,filePath,function(err){
											if(err){
												decData["result"] = "fail";
												decData["erorr"] = err;
												res.json(aes.socketEncrypt(decData));
											} else {
												datasetup.addReport(decData, filePath, function(err, data){
													if(err){
														decData["result"] = "fail";
														decData["erorr"] = err;
													}else{
														decData["result"] = "success";
													}
													res.json(aes.socketEncrypt(decData));
												});
											}
										});
									}else{
										decData["result"] = "limit";
										res.json(aes.socketEncrypt(decData));

										removeTmpFiles(pathes);
									}
								}
							});
						}
					}
				});
			}
	  	}
	});
});

function move(oldPath, newPath, callback) {
	fs.rename(oldPath, newPath, function (err) {
		if (err) {
			if (err.code === 'EXDEV') {
				copy();
			} else {
				callback(err);
			}
			return;
		}
		callback();
	});

	function copy() {
		var readStream = fs.createReadStream(oldPath);
		var writeStream = fs.createWriteStream(newPath);
	
		readStream.on('error', callback);
		writeStream.on('error', callback);
	
		readStream.on('close', function () {
			fs.unlink(oldPath, callback);
		});
	
		readStream.pipe(writeStream);
	}
}

function removeTmpFiles(pathes){
	for(var i=0; i<pathes.length; i++){
		fs.unlink(pathes[i],function(err){
			if (err) {
				console.error(err);
			}
		 });
	}
}

router.post('/getUserDatas', function(req, res){
	req.on('error', function(error){
		console.log('Error: '+error);
		const used = process.memoryUsage();
		for (let key in used) {
		 console.log(`${key} ${Math.round(used[key] / 1024 / 1024 * 100) / 100} MB`);
		}
	   });
	try{
		var decData = JSON.parse(aes.decrypt(String(req.body.data)));
    }catch(error){
      console.log('error:'+error);
      var rec = {'req':'getUserDatas','reason':'Invalid data'};
      datasetup.securityRecord(rec);
      rec['result'] = 'error';
      res.json(aes.socketEncrypt(rec));

    }
    console.log('getUserDatas '+decData.nicknames);

    if(decData.nicknames == undefined){
      console.log('getUserDatas no nicknames error');
      var rec = {'req':'getUserDatas','reason':'Invalid getUserDatas nicknames data'};
      datasetup.securityRecord(rec);
      rec['result'] = 'error';
      res.json(aes.socketEncrypt(rec));
      return;
    }

	if(decData.nicknames.length == 0){
		resData['result'] = 'success';
		resData['userDatas'] = {};
	}else{
		for(var i=0; i<decData.nicknames.length; i++){
			let nick = decData.nicknames[i];
			if(nick.includes(' ') || nick.includes('@') || nick.length < 1 || nick.length > 12){
				console.log('getUserDatas nickname error');
				var rec = {'req':'getUserDatas','reason':'Invalid getUserDatas nickname data'};
				datasetup.securityRecord(rec);
				rec['result'] = 'error';
				res.json(aes.socketEncrypt(rec));
				return;
			}
		}

		datasetup.getUsersFromNick(decData.nicknames, function(err, data){
			var resData = {};
			if(err){
				resData['result'] = 'fail';
				resData['error'] = err;
			}else{
				resData['result'] = 'success';
				resData['type'] = decData.type;
				resData['userDatas'] = {};
				for(var i=0; i<data.length; i++){
					resData.userDatas[data[i].nickname] = data[i];
				}
			}
			res.json(aes.socketEncrypt(resData));
		});
	}
    
});

router.post('/getItemPrice', function(req, res) {
	req.on('error', function(error){
		console.log('Error: '+error);
		const used = process.memoryUsage();
		for (let key in used) {
		 console.log(`${key} ${Math.round(used[key] / 1024 / 1024 * 100) / 100} MB`);
		}
	   });
	try {
		var decData = JSON.parse(aes.decrypt(String(req.body.data)));
    } catch(error) {
      console.log('error:'+error);
      var rec = {'req': 'getItemPrice', 'reason': 'Invalid data'};
      datasetup.securityRecord(rec);
      rec['result'] = 'error';
	  res.json(aes.socketEncrypt(rec));
	  return;
    }
    // console.log('getItemPrice '+JSON.stringify(decData));

    if (decData.length == 0) {
    	res.json(aes.socketEncrypt({result: 'success', item_price: []}));
    }else {
    	datasetup.getItemPrices(decData, function(err, data) {
    		var resData = {};
    		if (err) {
    			resData['result'] = 'fail';
    			resData['error'] = err;
    		} else{
				resData['result'] = 'success';
    			resData['item_price'] = data;
    		}
    		res.json(aes.socketEncrypt(resData));
    	});
    }
});


// router.get('/google_request', function (req, res) {
//     let oauth2Client = new OAuth2(client_id, client_secret, redirect_uri);
//     let url = oauth2Client.generateAuthUrl({
//         access_type: 'offline', // 'online'이 기본인데 refresh_token을 얻으러면 'offline'으로 입력
//         scope: scopes, // string으로된 Array 형태의 scope
//         approval_prompt: 'force'
//     });
//     res.redirect(url);
// });

// function RefreshIABTokenInterval() {
//     let url = 'https://www.googleapis.com/oauth2/v4/token';
//     let payload = {
//         refresh_token: tokenStorage.refresh_token,
//         grant_type: 'refresh_token',
//         client_id: client_id,
//         client_secret: client_secret
//     };

//     request.post(url, { form: payload }, function (error, response, body) {
//         if(error) {
//             repeat_refresh = null;
//             clearInterval(repeat_refresh);
//             return;
//         }

//         let parseBody = JSON.parse(body);
//         tokenStorage.access_token = parseBody.access_token;
//         tokenStorage.token_type = parseBody.token_type;
//         tokenStorage.expires_in = parseBody.expires_in;
//     });
// }

// router.get('/redirect', function (req, res) {
//     //토큰을 요청하여 redirect되면 authorization code를 포함한다.
//     //code 유무를 확인.
//     if( (req.query.code === null || req.query.code === undefined)) {
//         res.send(tokenStorage);
//         return;    
//     }
    
//     //authorization code를 포함하면 access token과 교환할 수 있도록 한다.
//     let url = 'https://www.googleapis.com/oauth2/v4/token';
//     let payload = {
//         grant_type: 'authorization_code',//OAuth 2.0 스펙에 포함된 필드로 반드시 'authorization_code'로 입력한다. 
//         code: req.query.code, //토큰 요청을 통해서 얻은 코드
//         client_id: client_id,
//         client_secret: client_secret,
//         redirect_uri: redirect_uri
//     };

//     request.post(url, { form: payload }, function (error, response, body) {

//         let parseBody = JSON.parse(body);
//         tokenStorage.access_token = parseBody.access_token;
//         tokenStorage.token_type = parseBody.token_type;
//         tokenStorage.expires_in = parseBody.expires_in;
//         tokenStorage.refresh_token = parseBody.refresh_token;

//         //refresh_token으로 1시간이 되기 전에 access token으로 교환되도록 한다.
//         if(repeat_refresh === null) {
//             repeat_refresh = setInterval(RefreshIABTokenInterval, min30);
//         }
        
//         res.send(tokenStorage);
//     });
// });


// router.post('/google_validation', function(req, res) {
//     //req.body.RawReceipt //JSON format Receipt
//     if(req.body.RawReceipt === null || req.body.RawReceipt === undefined) {
//         res.send({result:false});
//         return;
//     }
    
//     var validateList = [];
//     let parseRawRecipt = JSON.parse(req.body.RawReceipt);
//     for(var i=0; i<parseRawRecipt.length; i++){
//         let receipt = parseRawRecipt[i];
//         let packageName = receipt.packageName;
//         let productId = receipt.productId;
//         let token = receipt.purchaseToken;
//         let getUrl = `https://www.googleapis.com/androidpublisher/v2/applications/${packageName}/purchases/products/${productId}/tokens/${token}?access_token=${tokenStorage.access_token}`;

//         validateList.push(
//             new Promise(function(resolve, reject){
//                 datasetup.getReceipt(receipt.orderId, function(err, data){
//                     if(err){
//                         resolve({result: 'fail', error: err});
//                     }else{
//                         if(data.length == 0){
//                             resolve({result: 'need_validation'});
//                         }else{
//                             resolve({result: 'duple', 'receipt': data});
//                         }
//                     }
//                 });
//             }).then(function(result){
//                 if(result.result == 'need_validation'){
//                     //validation
//                     return ValidationIAB(getUrl)
//                     .catch(function(){
//                         return new Promise(function(resolve, reject) {
//                             resolve(false);
//                         });
//                     })
//                     .then(function(code){
//                         var resData = {resultCode:code};
//                         if(code){
//                             return new Promise(function(resolve, reject){
//                                 //TODO
//                                 //give item
//                                 console.log(receipt);
//                                 datasetup.addReceipt(receipt, datasetup.protocol.login_method.android, function(err, data){
//                                     if(err){
//                                         resData['result'] = 'fail';
//                                         resData['error'] = err;
//                                     }else{
//                                         resData['result'] = 'success';
//                                         resData['receipt'] = receipt;
//                                     }
//                                     resolve(resData);
//                                 });
//                             });
//                         }else{
//                             return resData;
//                         }
//                     });
//                 }else{
//                     return result;
//                 }
//             })
            
//         );
//     }

//     Promise.all(validateList).then(function(resDatas){
//         res.send(resDatas);
//     });

//     function ValidationIAB(getUrl) {
//         return new Promise(function(resolve, reject) {
//             request.get(getUrl, function (error, response, body) {
        
//                 let parseBody = JSON.parse(body);
//                 if (!(parseBody.error === null || parseBody.error === undefined)) {
//                     reject(false);
//                 }
//                 else if(parseBody.purchaseState === 0) {
//                     resolve(true);
//                 }
//                 else {
//                     reject(false);
//                 }
//             });
//         });   
//     };
// });
module.exports = router;
