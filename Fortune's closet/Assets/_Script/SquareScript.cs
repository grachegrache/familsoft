using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;
using System.Linq;

public class SquareScript : MonoBehaviour {
	public GameObject userMemberPref;
	public GameObject rankMemberPref;

	public CameraScript cameraScript;

	public Transform movable;
    public Button cafeButton;
	public GameObject homeButton;
	public GameObject chButton;
    public Button minigameButton;
	public GameObject fashionshow;
	public GameObject nickScoreListPopup;
	public GameObject nickScorePopup;
	public GameObject fountainListPopup;
	public GameObject fountainPopup;
	public FlowerScript[] flowers;

	SettingScript settingScript;
	public List<CharacterScript> waitList = new List<CharacterScript> ();

	void Awake(){
		settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
		settingScript.movable = movable;
		SettingScript.socketScript.squareScript = this;
        settingScript.isSceneLoading = false;

        //connect functions
        cafeButton.onClick.AddListener(() =>
        {
            settingScript.blindDateClick();
        });


        minigameButton.onClick.AddListener(() =>
        {
            settingScript.minigameClick();
        });

        // localize

        nickScoreListPopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = LocalizationString.MAINGAME_NickScoreListMessage;
		fountainListPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Fountain + " " + LocalizationString.Rank;
		fountainListPopup.transform.GetChild (0).GetChild (3).GetComponentInChildren<Text> ().text = LocalizationString.CoinThrowing;
		fountainPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Fountain + " " + LocalizationString.CoinThrowing;
	}

	void OnDestroy(){
		settingScript.movable = null;
		if (SettingScript.socketScript != null) {
			SettingScript.socketScript.squareScript = null;
		}
	}

	void Start () {
        if (settingScript.data != null)
        {
            float x = settingScript.data["squareLoc"]["x"].f;
            float y = settingScript.data["squareLoc"]["y"].f;
            cameraScript.setCharacter(settingScript.createSelf(movable, new Vector2(x, y)));

            if (settingScript.data.HasField("userData"))
            {
                for (int i = 0; i < settingScript.data["userData"].Count; i++)
                {
                    settingScript.createCharacter(settingScript.data["userData"][i], movable);
                }
            }

            settingScript.data = null;
        }
		
		settingScript.setChatingActive (true);

		for (int i = 0; i < flowers.Length; i++) {
			string milli = PlayerPrefs.GetString ("flower" + i, "");
			if (milli != "") {
				double dateTime;
				double.TryParse (milli, out dateTime);
				//Debug.Log (dateTime);
				flowers [i].waitingTime = new DateTime (1970, 1, 1).AddMilliseconds (dateTime);
				flowers [i].setRemainTime (true);
			}
		}

		settingScript.playBGM (1);
	}

	public void homeClick(){
		settingScript.openMessagePopup (LocalizationString.MAINGAME_GoingHome, false,
			() => {
				SettingScript.socketScript.goTo ("home");
				settingScript.messagePopup.SetActive(false);
			});
		
	}
	public void squareClick(){
		settingScript.openMessagePopup (LocalizationString.MAINGAME_ChChangeMessage, false,
			() => {
				SettingScript.socketScript.goTo ("square");
				settingScript.setProgressBackActive (true);
				settingScript.messagePopup.SetActive(false);
				settingScript.playSound(0);
			});
		settingScript.playSound (1);
	}
    public void slotClick()
    {
        settingScript.openMessagePopup(LocalizationString.MAINGAME_GoSlotMessage, false,
            () => {
                SettingScript.socketScript.goTo("slot");
                settingScript.messagePopup.SetActive(false);
                settingScript.playSound(0);
            });
        settingScript.playSound(1);
    }
	public void onHome(JSONObject data){
		if (data.HasField ("result")) {
			if (data ["result"].str.Equals ("success")) {
				SettingScript.room = null;
                settingScript.data = null;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
			} else {
				
			}
		} else {
			Transform t = movable.Find(data["nickname"].str);
			if(t != null)
				Destroy(t.gameObject);
		}
	}
	//public void onSquare(JSONObject data){
	//	settingScript.setProgressBackActive(false);
	//	if (data["result"].str.Equals("success")) {
	//		if(data.HasField("room")){
	//			SettingScript.room = data["room"].str;
	//			if (data.HasField("userData")) {
	//				settingScript.data = data;
	//			}
 //               settingScript.isSceneLoading = true;
	//			UnityEngine.SceneManagement.SceneManager.LoadScene("SquareScene");
	//		}else{
 //               if(settingScript.isSceneLoading){
 //                   if(settingScript.data == null){
 //                       settingScript.data = new JSONObject();
 //                       settingScript.data.AddField("userData", new JSONObject());
 //                   }
 //                   settingScript.data["userData"].Add(data["userData"]);
 //               }else{
 //                   settingScript.createCharacter(data["userData"], movable);
 //               }
	//		}
	//	} else if (data["result"].str.Equals("fail")) {
	//		settingScript.log("fail");
	//	} else if (data ["result"].str.Equals ("leave")) {
	//		Transform t = movable.Find (data ["nickname"].str);
	//		if (t != null)
	//			Destroy (t.gameObject);
	//	} else {

	//	}

	//}

	public void onMove(JSONObject data){
		string nickname = data ["nickname"].str;
		if (nickname == SettingScript.nick) {
			return;
		}
		Transform ch = movable.Find (nickname);
		if (ch != null) {
			ch.GetComponent<CharacterScript>().setTargetPos (data ["pos_x"].f, data ["pos_y"].f);
		}

	}

	public void msgClick(){
		settingScript.msgClick ();
	}
	public void fashionshowClick(){
        Transform user = movable.Find(SettingScript.nick);
        if(user != null){
            CharacterScript ch = user.GetComponent<CharacterScript>();
            if(ch != null && ch.isFashionshow){
                return;
            }
        }

        if (PlayerPrefs.GetInt("fashionshow", 1) == 0)
        {
            settingScript.openMessagePopup(LocalizationString.MAINGAME_FashionshowDisabled);
        }
        else
        {
            settingScript.openMessagePopup(LocalizationString.MAINGAME_FashionshowEnterMessage, false, () =>
            {
                SettingScript.socketScript.fashionshow("enter");
                settingScript.messagePopup.SetActive(false);
            });
        }
	}

	public void onFashionshow(JSONObject data){
        if(PlayerPrefs.GetInt("fashionshow", 1) == 0){
            return;
        }

		if (data ["result"].str == "fail") {
		} else {
			if (data ["type"].str == "enter") {
				if (data ["result"].str == "success") {
					//settingScript.ShowRewardedAd();
				} else if (data ["result"].str == "wait") {
					TimeSpan passTime = new TimeSpan (0, 0, 0, 0, (int)data ["time"].n);
					passTime = new TimeSpan (0, 5, 0).Subtract (passTime);
                    settingScript.openMessagePopup (string.Format (LocalizationString.MAINGAME_FashionshowWaitMessage, passTime.Minutes, passTime.Seconds));
				}
			} else if (data ["type"].str == "start") {
				Transform user;
				if (data.HasField ("user")) {
					user = movable.Find (data ["user"].str);
					if (user != null) {
						user.gameObject.SetActive (true);
					}
				}

                bool isBlocked = false;
                foreach (JSONObject blockMem in settingScript.getChData()["blockList"].list) {
                    if (blockMem.str == data["userData"]["nickname"].str) {
                        isBlocked = true;
                        break;
                    }
                }

				user = movable.Find (data ["userData"] ["nickname"].str);
				if (user != null) {
					CharacterScript ch = user.GetComponent<CharacterScript> ();

                    if (!isBlocked) {
                        ch.isFashionshow = true;
                        ch.setTargetPos(120f, -610f);
                        ch.setOnStopAction(() => {
                            ch.gameObject.SetActive(false);

                            if (SettingScript.nick != data["userData"]["nickname"].str) {
                                InputField rate = fashionshow.transform.GetChild(1).GetComponentInChildren<InputField>();
                                rate.onEndEdit.RemoveAllListeners();
                                rate.onEndEdit.AddListener(((string arg0) => {
                                    int score;
                                    if (int.TryParse(arg0, out score)) {
                                        if (score >= 50 && score <= 100) {
                                            SettingScript.socketScript.fashionshowRate(data["userData"]["nickname"].str, score);
                                            rate.transform.parent.gameObject.SetActive(false);
                                            rate.text = "";
                                        } else {
                                            settingScript.log(LocalizationString.MAINGAME_FashionshowScoreLimitMessage);
                                        }
                                    }
                                }));
                                rate.transform.parent.gameObject.SetActive(true);
                            }else{
                                fashionshow.transform.GetChild(1).gameObject.SetActive(false);
                                settingScript.setButtonsActive(false);
								homeButton.SetActive(false);
								chButton.SetActive(false);
                            }
                            fashionshow.SetActive(true);

                            data["userData"].AddField("x", -250f);
                            data["userData"].AddField("y", -110f);
                            Transform participant = fashionshow.transform.GetChild(0).GetChild(0);
                            settingScript.destroyChilds(participant);
                            CharacterScript pCh = settingScript.createCharacter(data["userData"], participant);

                            LeanTween.delayedCall(0.5f, () => {
                                if (pCh == null){
                                    return;
                                }
                                    
                                pCh.setTargetPos(0, -110f);
                                pCh.setOnStopAction(() => {
                                    LeanTween.delayedCall(10f, () => {
                                        if (pCh == null){
                                            return;
                                        }
                                            
                                        pCh.setTargetPos(250f, -110f);
                                        pCh.setOnStopAction(() => {
                                            if (pCh == null){
                                                return;
                                            }
                                            Destroy(pCh.gameObject);
                                        });
                                    });
                                });
                            });
                        });
                    }

                    waitList.Remove(ch);
				}

				for (int i = 0; i < waitList.Count; i++) {
					if (i < 10) {
						waitList [i].setTargetPos (420f + i * 90f, -610f);
					} else {
						waitList [i].setTargetPos (1320f, -610f);
					}
				}


			} else if (data ["type"].str == "wait") {
				if (data ["nickname"].str == SettingScript.nick) {
                    settingScript.setButtonsActive(false);
					homeButton.SetActive (false);
					chButton.SetActive (false);
                    settingScript.log (string.Format(LocalizationString.MAINGAME_FashionshowRemainMessage, (int)data["remain"].n));
				}

				Transform user = movable.Find (data ["nickname"].str);
				if (user != null) {
					CharacterScript ch = user.GetComponent<CharacterScript> ();
					ch.isFashionshow = true;
					if (waitList.Count < 10) {
						ch.setTargetPos (waitList.Count * 90f + 420f, -610f);
					} else {
						ch.setTargetPos (1320f, -610f);
					}
					waitList.Add (ch);

				}

			} else if (data ["type"].str == "score") {
                string nickname = data["nickname"].str;
                foreach (JSONObject blockMem in settingScript.getChData()["blockList"].list) {
                    if (blockMem.str == nickname) {
                        return;
                    }
                }

                if (nickname == SettingScript.nick) {
                    settingScript.setButtonsActive(true);
					homeButton.SetActive (true);
					chButton.SetActive (true);
                    JSONObject chData = settingScript.getChData();
                    long cash;
                    long score = (long)data["score"].n;
                    if (long.TryParse(chData["userData"]["cash"].str, out cash)) {
                        cash += score;
                        chData["userData"]["cash"].str = cash + "";
                        settingScript.cash.GetComponentInChildren<Text>().text = cash + "";
                    }
                    settingScript.log(string.Format(LocalizationString.MINIGAME_scoreMessage, score));
                }

                Transform user = movable.Find(nickname);
                if (user != null) {
                    user.gameObject.SetActive(true);
                    CharacterScript ch = user.GetComponent<CharacterScript>();
                    ch.isFashionshow = false;
                    ch.removeOnStopAction();

					int scoreNum = (int)data ["scoreNum"].n;
					if (scoreNum == 0) {
						settingScript.openMessagePopup(
							string.Format(LocalizationString.MAINGAME_FashionshowScore0Message,nickname,(int)data["score"].n));
					} else {
						settingScript.openMessagePopup(
							string.Format(LocalizationString.MAINGAME_FashionshowScoreMessage,
								nickname, (int)data["scoreNum"].n, (int)data["score"].n));
					}

                }

				//rateList
				foreach (JSONObject nick in data["rateList"].list) {
					if (nick.str == SettingScript.nick) {
						JSONObject chData = settingScript.getChData ();
						long cash;
						if (long.TryParse(chData["userData"]["cash"].str, out cash)) {
							cash += (long)3;
							chData["userData"]["cash"].str = cash + "";
							settingScript.cash.GetComponentInChildren<Text>().text = cash + "";
						}
                        //settingScript.openMessagePopup (string.Format (LocalizationString.MINIGAME_scoreMessage, 3));
                        settingScript.log(string.Format(LocalizationString.MINIGAME_scoreMessage, 3));
						break;
					}
				}

			} else if (data ["type"].str == "end") {
				Transform user = movable.Find (data ["user"].str);
				if (user != null) {
					user.gameObject.SetActive (true);
				}

				fashionshow.SetActive(false);

			} else if (data ["type"].str == "cancel") {
				int index = -1;
				if (data.HasField ("pos_x") && data.HasField ("pos_y")) {
                    settingScript.setButtonsActive(true);
                    // touch somewhere
					Transform user = movable.Find (data ["nickname"].str);
					if(user != null){
						CharacterScript ch = user.GetComponent<CharacterScript> ();
						ch.gameObject.SetActive (true);
						ch.isFashionshow = false;
						ch.setTargetPos (data ["pos_x"].f, data ["pos_y"].f);
						ch.removeOnStopAction ();
						index = waitList.IndexOf (ch);

					}

				} else {
                    // leave room
					for (int i=0; i< waitList.Count; i++) {
						if (waitList[i].name == data ["nickname"].str) {
							index = i;
							break;
						}
					}
				}

				if (index >= 0) {
					waitList.RemoveAt (index);
					if (waitList.Count > 0) {
						for (int i = index; i < waitList.Count; i++) {
							if (i < 10) {
								waitList [i].setTargetPos (420f + i * 90f, -610f);
							} else {
								waitList [i].setTargetPos (1320f, -610f);
							}
						}
					}
				}
			} else {
			}
		}
	}

    public void nickScoreClick() {
        settingScript.openMessagePopup(LocalizationString.MAINGAME_NickScoreMessage, false, () => {
            SettingScript.socketScript.nickScoreList();
            settingScript.setProgressBackActive(false);
            settingScript.messagePopup.SetActive(false);
        });

    }

	public void onNickScoreList(JSONObject data){
		if (data ["result"].str.Equals ("success")) {
			Transform contents = nickScoreListPopup.transform.GetChild(0).GetChild (2).GetChild (0).GetChild (0);
			settingScript.destroyChilds (contents);

			for (int i = 0; i < data ["userList"].Count; i++) {
				string nickname = data ["userList"] [i] ["nickname"].str;
				if(nickname != null){
					Transform userMem = GameObject.Instantiate (userMemberPref, contents).transform;

					userMem.GetComponent<Button> ().onClick.AddListener (() => {
						//fortune popup
						int[] nick_score = {
							SettingScript.nick.Select(x => (int)x).Sum(),
							nickname.Select(x => (int)x).Sum()
						};
						int total_score = nick_score.Select(x=>x).Sum()%50+50; //50~100점 나옴

						nickScorePopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = SettingScript.nick;
						nickScorePopup.transform.GetChild(0).GetChild(1).GetComponent<Text>().text = nickname;
						nickScorePopup.transform.GetChild(0).GetChild(2).GetComponent<Text>().text = total_score + "%";
						nickScorePopup.SetActive(true);
						nickScoreListPopup.SetActive(false);
					});
					userMem.GetChild(0).GetComponent<Text> ().text = nickname;
					settingScript.setProfileCharacter(data["userList"][i], userMem.GetChild (1).GetChild(0));
					userMem.GetChild (2).GetComponent<Text> ().text = ((SystemLanguage)data ["userList"] [i] ["language"].n).ToString ();
				}
			}

			nickScoreListPopup.SetActive (true);
		} else if (data ["result"].str.Equals ("fail")) {
		} else {
		}

		settingScript.setProgressBackActive (false);
	}
	
	public void onFlower(JSONObject data){
		FlowerScript flower = flowers [(int)data ["num"].n];
		if (data ["result"].str == "success") {
			flower.success ();
			JSONObject chData = settingScript.getChData();
			chData ["userData"] ["cash"].str = data ["cash"].str;
			settingScript.cash.GetComponentInChildren<Text> ().text = data ["cash"].str;

		} else if (data ["result"].str == "notyet") {
			flower.notyet (data ["respawn_time"].str);
		} else if (data ["result"].str == "fail") {
		}
	}
	
	public void fountainClick(){
		SettingScript.socketScript.fountain();
		settingScript.playSound (1);
		settingScript.setProgressBackActive (true);
	}
	
	public void onFountain(JSONObject data){
		settingScript.setProgressBackActive (false);
		if(data["result"].str == "success"){
			if(data["type"].str == "rank"){
				Transform content = fountainListPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
				settingScript.destroyChilds (content);

				Transform rankMember;
				int rank = 0;
				long prevCoin = 0;
				for (int i = 0; i < data ["fountainData"].Count; i++){
					string nick = data ["fountainData"] [i] ["nickname"].str;
					if(prevCoin != (long)data ["fountainData"] [i] ["cash"].n){
						prevCoin = (long)data ["fountainData"] [i] ["cash"].n;
						rank += 1;
					}
					rankMember = Instantiate (rankMemberPref, content).transform;
					rankMember.GetChild (0).GetComponent<Text> ().text = rank+"";
					settingScript.setProfileCharacter (data["userDatas"][nick], rankMember.GetChild (1).GetChild (0));
					rankMember.GetChild (2).GetComponent<Text> ().text = (long)data ["fountainData"] [i] ["cash"].n+"";
					rankMember.GetChild (3).GetComponent<Text> ().text = nick;
				}
				fountainListPopup.SetActive (true);
			}else if(data["type"].str == "coin"){
				settingScript.log (string.Format(LocalizationString.MAINGAME_FountainCoinThrownMessage, (long)data["coin"].n));
				long cash;
				if(long.TryParse(settingScript.getChData () ["userData"] ["cash"].str, out cash)){
					cash -= (long)data ["coin"].n;
					settingScript.getChData () ["userData"] ["cash"].str = cash + "";
					settingScript.cash.GetComponentInChildren<Text> ().text = cash + "";
				}
				
				SettingScript.socketScript.fountain ();
				settingScript.setProgressBackActive (true);
			}
		}else if(data["result"].str == "less_cash"){
			settingScript.log (LocalizationString.MAINGAME_FountainLessCashMessage);
		}else if(data["result"].str == "fail"){
			
		}else{
		}
	}
	
	public void fountainListBackClick(){
		settingScript.destroyChilds (fountainListPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0));
		fountainListPopup.SetActive (false);
		settingScript.playSound (2);
	}
	
	public void fountainCoinThrowingClick(){
		fountainPopup.transform.GetChild (0).GetChild (1).GetComponent<InputField> ().text = "";
		fountainPopup.SetActive (true);
		settingScript.playSound (1);
	}
	
	public void fountainConfirmClick(){
		long coin = long.Parse(fountainPopup.transform.GetChild (0).GetChild (1).GetComponent<InputField> ().text);
		settingScript.openMessagePopup (string.Format(LocalizationString.MAINGAME_FountainCoinThrowingMessage, coin), false, () => {
			long cash;
			if(long.TryParse(settingScript.getChData () ["userData"] ["cash"].str, out cash)){
				if(coin > 0 && coin <= cash){
					SettingScript.socketScript.fountain (coin);
					settingScript.setProgressBackActive (true);
				}else{
					settingScript.log (LocalizationString.MAINGAME_FountainInvalidCoinMessage);
				}
			}
			
			settingScript.messagePopup.SetActive (false);
			fountainPopup.SetActive (false);
			settingScript.playSound (2);
		});
		fountainPopup.SetActive (false);
		settingScript.playSound (1);
	}
	
	public void fountainBackClick(){
		fountainPopup.SetActive (false);
		settingScript.playSound (2);
	}
	
	public void fountainOnValueChanged(string text){
		long coin, cash;
		
		if(long.TryParse(text, out coin) && long.TryParse(settingScript.getChData () ["userData"] ["cash"].str, out cash)){
			if(coin > cash){
				fountainPopup.transform.GetChild (0).GetChild (1).GetComponent<InputField> ().text = cash + "";
			}
		}
	}
}
