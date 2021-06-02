using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FootholdScript : MonoBehaviour {
    SettingScript settingScript;

    public Transform movable;
    public Image[] footholdImages;
    public GameObject waiting;
    public Text leftTime;
    public GameObject exitButton;
    public GameObject rulePopup;
    public GameObject resultPopup;

    Text waitingText;
	int index = -1;

    Color32 disabledColor = new Color32 (171, 171, 171, 255);
    float remainTime;

    void Awake() {
        settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
        SettingScript.socketScript.footholdScript = this;
        settingScript.movable = movable;
        settingScript.isSceneLoading = false;
        settingScript.setButtonsActive(false);
        settingScript.setChatingActive(true);
        settingScript.setCashShopActive(false);

        if (settingScript.data == null) {
            settingScript.openMessagePopup("data null error", true, () => {
                SettingScript.isLoaded = false;
                Destroy(settingScript.gameObject);
                UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
            });
            return;
        }

        //create characters
        Vector2 pos = new Vector2();
        pos.x = settingScript.data["pos_x"].f;
        pos.y = settingScript.data["pos_y"].f;
        settingScript.createSelf(movable, pos);

        if(settingScript.data.HasField("userDatas")){
            for (int i = 0; i < settingScript.data["userDatas"].Count; i++){
                settingScript.createCharacter(settingScript.data["userDatas"][i], movable);
            }
        }

        remainTime = settingScript.data["leftTime"].n;
        if (settingScript.data["result"].str == "start") {
            leftTime.text = (int)remainTime + "";

            waiting.SetActive(false);
            leftTime.gameObject.SetActive(true);
            rulePopup.SetActive(true);
            exitButton.SetActive(false);
        }

        settingScript.data = null;
        waitingText = waiting.GetComponentInChildren<Text>();

        //localize
        rulePopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = LocalizationString.Rule;
        rulePopup.transform.GetChild(0).GetChild(1).GetComponent<Text>().text = LocalizationString.MAINGAME_FootholdGameRuleMessage;
        resultPopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = LocalizationString.Result;

		settingScript.playBGM (2);
    }

	void OnDestroy() {
        settingScript.movable = null;
        if (SettingScript.socketScript != null) {
            SettingScript.socketScript.footholdScript = null;
        }
	}

	void Update () {
        if(waiting.activeSelf){
            if (remainTime - Time.deltaTime >= 0)
            {
                remainTime -= Time.deltaTime;
                waitingText.text = LocalizationString.Waiting+".."+(int)remainTime;
            }
        }else if (leftTime.gameObject.activeSelf) {
            if (remainTime - Time.deltaTime >= 0) {
                remainTime -= Time.deltaTime;
                leftTime.text = (int)remainTime + "";
            }
        }
	}

    public void onFoothold(JSONObject data){
        if(data["result"].str == "enter"){  // other user enter
            if (data.HasField("userData")) {    
                settingScript.createCharacter(data["userData"], movable);
            }else{                          // enter into exist room
                SettingScript.room = data["room"].str;
				index = -1;
                setFootholdColor(-1);
                remainTime = data["leftTime"].n;

                waiting.SetActive(true);
                leftTime.gameObject.SetActive(false);
                exitButton.SetActive(true);

                //create characters
                settingScript.destroyChilds(movable);
                movable.GetComponent<Image>().raycastTarget = true;

                Vector2 pos = new Vector2();
                pos.x = data["pos_x"].f;
                pos.y = data["pos_y"].f;
                settingScript.createSelf(movable, pos);

                if (data.HasField("userDatas")) {
                    for (int i = 0; i < data["userDatas"].Count; i++) {
                        settingScript.createCharacter(data["userDatas"][i], movable);
                    }
                }
            }
        }else if(data["result"].str == "start"){
            remainTime = data["leftTime"].n;
            leftTime.text = (int)remainTime + "";
            waiting.SetActive(false);
            leftTime.gameObject.SetActive(true);

            exitButton.SetActive(false);
            rulePopup.SetActive(true);

        }else if(data["result"].str == "end"){
            SettingScript.room = null;
            int foothold = (int)data["foothold"].n;
            long score = (long)data["score"].n;

            movable.GetComponent<Image>().raycastTarget = false;
            leftTime.gameObject.SetActive(false);
//            setFootholdColor(foothold);
			footholdImages[foothold].color = new Color32(0,255,190,255);

//            Transform ch = movable.Find(SettingScript.nick);
//            int index = -1;
//            if (ch.localPosition.x > 0) {
//                if (ch.localPosition.y > 53) {
//                    index = 1;
//                }
//                if (ch.localPosition.y < -53) {
//                    index = 3;
//                }
//            } else { 
//                if (ch.localPosition.y > 53) {
//                    index = 0;
//                }
//                if (ch.localPosition.y < -53) {
//                    index = 2;
//                }
//            }

            string resultMessage = LocalizationString.MINIGAME_FailToScoreMessage;
            if (index == foothold) {
                long cashValue;
                if(long.TryParse(settingScript.getChData()["userData"]["cash"].str, out cashValue)){
                    cashValue += score;
                    settingScript.getChData()["userData"]["cash"].str = cashValue + "";
                    settingScript.cash.transform.GetComponentInChildren<Text>().text = cashValue + "";
                }

                resultMessage = string.Format(LocalizationString.MINIGAME_scoreMessage, score);
            }
            resultPopup.transform.GetChild(0).GetChild(1).GetComponent<Text>().text = resultMessage;

            LeanTween.delayedCall(1f, () => {
                resultPopup.SetActive(true);
            });

        }else if(data["result"].str == "leave"){
            Transform t = movable.Find(data["nickname"].str);
            if (t != null)
                Destroy(t.gameObject);
        }else if(data["result"].str == "fail"){
            
        }else{
            
        }
    }

    public void onHome(JSONObject data){
        if (data.HasField("result")) {
            if (data["result"].str.Equals("success")) {
                SettingScript.room = null;
                settingScript.data = null;
                UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene");
                settingScript.setButtonsActive(true);
                settingScript.setCashShopActive(true);
            } else {

            }
        } else {
            Transform t = movable.Find(data["nickname"].str);
            if (t != null)
                Destroy(t.gameObject);
        }
    }

    public void onMove(JSONObject data) {
        float x = data["pos_x"].f;
        float y = data["pos_y"].f;
		string nickname = data ["nickname"].str;
		if (SettingScript.nick == data ["nickname"].str) {
			index = -1;
			if (x > 0) {
				if (y > 53) {
					index = 1;
				}
				if (y < -53) {
					index = 3;
				}
			} else {
				if (y > 53) {
					index = 0;
				}
				if (y < -53) {
					index = 2;
				}
			}
			setFootholdColor (index);
		} else {
			Transform ch = movable.Find (nickname);
			if (ch != null) {
				ch.GetComponent<CharacterScript>().setTargetPos(x, y);
			}
		}
    }

    public void retryClick(){
        SettingScript.socketScript.goTo("foothold");
        resultPopup.SetActive(false);
		settingScript.playSound (0);
    }

    public void backClick(){
        UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene");
        settingScript.setButtonsActive(true);
        settingScript.setCashShopActive(true);
		settingScript.playSound (0);
    }

    public void exitClick(){
        settingScript.openMessagePopup(LocalizationString.MINIGAME_exitMessage, false, () => {
            SettingScript.socketScript.goTo("home");
            settingScript.messagePopup.SetActive(false);
			settingScript.playSound (0);
        });
		settingScript.playSound (1);
    }

    public void setFootholdColor(int index){
        if (index < 0) {
            foreach (Image foothold in footholdImages) {
                foothold.color = disabledColor;
            }
        } else {
            for (int i = 0; i < footholdImages.Length; i++) {
                if (i == index) {
                    footholdImages[i].color = Color.white;
                } else {
                    footholdImages[i].color = disabledColor;
                }
            }
        }
    }
}
