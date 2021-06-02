String.prototype.replaceAll = function(search, replacement) {
    var target = this;
    return target.split(search).join(replacement);
};

function AESCrypt(){
    var crypto = require('crypto');
    var cryptkey   = new Buffer('FamilSoftChatAndMeetKey123456789');
    var iv         = new Buffer('00000000000000000000000000000000','hex');

    this.decrypt = function(encryptdata) {
        encryptdata = new Buffer(encryptdata, 'base64').toString('binary');
        var decipher = crypto.createDecipheriv('aes-256-cbc', cryptkey, iv);
        var decoded = decipher.update(encryptdata, 'binary', 'utf8');
        decoded += decipher.final('utf8');
        return decoded;
    }

    this.encrypt = function(cleardata) {
        var encipher = crypto.createCipheriv('aes-256-cbc', cryptkey, iv);
        var encryptdata = encipher.update(cleardata, 'utf8', 'binary');
        encryptdata += encipher.final('binary');
        var encode_encryptdata = new Buffer(encryptdata, 'binary').toString('base64');
        return encode_encryptdata;
    }

    this.socketEncrypt = function(jsondata){
        return {"data":this.encrypt(JSON.stringify(jsondata))};
    }

    this.socketDecrypt = function(jsondata){
        var dec = this.decrypt(jsondata.data);
        dec = escapeSpecialChars(dec);
        return JSON.parse(dec);
    }

    function escapeSpecialChars(jsonString) {
        return jsonString.replace(/\n/g, "\\n")
            .replace(/\r/g, "\\r")
            .replace(/\t/g, "\\t")
            .replace(/\f/g, "\\f");
    }
}

module.exports = new AESCrypt;