using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text.RegularExpressions;

public class HangmanScript : MonoBehaviour {
	SettingScript settingScript;

	public Transform floor;
    public GameObject waiting;
	public Text TextCurrent;
    public GameObject exitButton;
    public GameObject rulePopup;
    public GameObject resultPopup;
	public GameObject keyboardButton;
	public GameObject keyboard;

	public GameObject hangman_animPref;
	public GameObject rankMemberPref;
    Text waitingText;

    float remainTime;
	bool isCanAnswer = true;

    void Awake() {
        settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
        SettingScript.socketScript.hangmanScript = this;
        settingScript.isSceneLoading = false;
        settingScript.setButtonsActive(false);
        settingScript.setCashShopActive(false);
        settingScript.setChatingActive(false);

        if (settingScript.data == null) {
            settingScript.openMessagePopup("data null error", true, () => {
                SettingScript.isLoaded = false;
                Destroy(settingScript.gameObject);
                UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
            });
            return;
        }

		createCharacters (settingScript.data);

		if(settingScript.data.HasField("leftTime")){
			remainTime = settingScript.data["leftTime"].n;
		}
        
        if (settingScript.data["result"].str == "start") {
            waiting.SetActive(false);
            rulePopup.SetActive(true);
            exitButton.SetActive(false);
        }

        settingScript.data = null;
        waitingText = waiting.GetComponentInChildren<Text>();

		keyboard.GetComponent<KeyboardScript> ().onKeyTyped = (string key) => {
			if (isCanAnswer){
				SettingScript.socketScript.hangmanAnswer (key);
			}
			settingScript.playSound (0);
			keyboard.SetActive (false);
		};
		
        //localize
        rulePopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = LocalizationString.Rule;
        rulePopup.transform.GetChild(0).GetChild(1).GetComponent<Text>().text = LocalizationString.MAINGAME_HangmanGameRuleMessage;
        resultPopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = LocalizationString.Result;

		settingScript.playBGM (2);
    }

	void createCharacters(JSONObject data){
		//create characters
        Vector2 pos = new Vector2();
        pos.x = data["pos_x"].f;
        pos.y = data["pos_y"].f;
        Transform ch = settingScript.createSelf(floor, pos).transform;

		//add progress
		RectTransform hangmanAnim = Instantiate (hangman_animPref, ch).GetComponent<RectTransform>();
		hangmanAnim.name = "hangman_anim";
		pos = hangmanAnim.anchoredPosition;
		pos.y = 135f;
		hangmanAnim.anchoredPosition = pos;

        if(data.HasField("userDatas")){
            for (int i = 0; i < data["userDatas"].Count; i++){
                ch = settingScript.createCharacter(data["userDatas"][i], floor).transform;
                
                //add progress
                hangmanAnim = Instantiate (hangman_animPref, ch).GetComponent<RectTransform>();
                hangmanAnim.name = "hangman_anim";
				pos = hangmanAnim.anchoredPosition;
				pos.y = 135f;
				hangmanAnim.anchoredPosition = pos;
            }
        }
	}
	
	void OnDestroy() {
        if (SettingScript.socketScript != null) {
            SettingScript.socketScript.hangmanScript = null;
        }
	}

	void Update () {
        if(waiting.activeSelf){
            if (remainTime - Time.deltaTime >= 0)
            {
                remainTime -= Time.deltaTime;
                waitingText.text = LocalizationString.Waiting+".."+(int)remainTime;
            }
        }
	}

    public void onHangman(JSONObject data){
    	if(data["result"].str == "enter"){
    		if (data.HasField("userData")) {    // other user enter
                Transform ch = settingScript.createCharacter(data["userData"], floor).transform;
                
                //add progress
                RectTransform hangmanAnim = Instantiate (hangman_animPref, ch).GetComponent<RectTransform>();
				hangmanAnim.name = "hangman_anim";
				Vector2 pos = hangmanAnim.anchoredPosition;
				pos.y = 135f;
				hangmanAnim.anchoredPosition = pos;
            }else{                          	// enter into exist room
                SettingScript.room = data["room"].str;
                remainTime = data["leftTime"].n;
				TextCurrent.text = "";

				keyboardButton.SetActive (false);
                waiting.SetActive(true);
                exitButton.SetActive(true);
				keyboard.SetActive (false);
				
				foreach(Transform keyTrs in keyboard.transform){
					KeyboardButton key = keyTrs.GetComponent<KeyboardButton> ();
					key.interactable = true;
					key.enabled = true;
					key.image.color = key.colors.normalColor;
					key.transform.GetComponentInChildren<Text> ().color = key.colors.normalColor;
				}

                //create characters
                settingScript.destroyChilds(floor);
				createCharacters (data);
                
            }
    	}else if(data["result"].str == "start"){
			keyboardButton.SetActive (true);
            waiting.SetActive(false);
            exitButton.SetActive(false);
            rulePopup.SetActive(true);
            
			setBlackBoard (data ["current"].str);
    	}else if(data["result"].str == "correct"){
    		//letter, from, current, score, (userDatas)
    		setBlackBoard (data ["current"].str);
			setKeyDisabled (data ["letter"].str);
    		
			Transform chTrs = floor.Find (data ["from"].str);
			if(chTrs != null){
				CharacterScript ch = chTrs.GetComponent<CharacterScript> ();
				ch.chat (data ["letter"].str);

				Animator gemAmount = chTrs.Find ("hangman_anim").GetChild (1).GetComponent<Animator>();
				gemAmount.GetComponentInChildren<Text> ().text = "+ " + (int)data ["score"].n;
				gemAmount.transform.GetChild (0).gameObject.SetActive (true);
				gemAmount.transform.GetChild (1).gameObject.SetActive (true);
				gemAmount.Play ("GemAnim");
				
			}
			
			if(data["from"].str == SettingScript.nick){
				long cashValue;
                if(long.TryParse(settingScript.getChData()["userData"]["cash"].str, out cashValue)){
                    cashValue += (long)data["score"].n;
                    settingScript.getChData()["userData"]["cash"].str = cashValue + "";
                    settingScript.cash.transform.GetComponentInChildren<Text>().text = cashValue + "";
                }
			}
    		if(data.HasField("userDatas")){
				//show result
				Transform rankContent = resultPopup.transform.GetChild(0).GetChild (1).GetChild (0).GetChild (0);
				settingScript.destroyChilds (rankContent);

				data ["userDatas"].list.Sort (new RankComparer ());
				int rank = 0, answerCount = -1;
				for (int i = 0; i < data ["userDatas"].Count; i++) {
					if(answerCount != data["userDatas"][i]["answer"].Count){
						answerCount = data ["userDatas"] [i] ["answer"].Count;
						rank += 1;
					}
				
					Transform rankMem = Instantiate (rankMemberPref, rankContent).transform;
					rankMem.GetChild (0).GetComponent<Text> ().text = rank + "";
					settingScript.setProfileCharacter (data ["userDatas"] [i], rankMem.GetChild (1).GetChild (0));
					rankMem.GetChild (2).GetComponent<Text> ().text = data ["userDatas"] [i] ["answer"].Count + "";

					if (SettingScript.nick == data ["userDatas"] [i] ["nickname"].str){
						if(data["userDatas"][i].HasField("score")){
							long cashValue;
			                if(long.TryParse(settingScript.getChData()["userData"]["cash"].str, out cashValue)){
			                    cashValue += (long)data["userDatas"] [i] ["score"].n;
			                    settingScript.getChData()["userData"]["cash"].str = cashValue + "";
			                    settingScript.cash.transform.GetComponentInChildren<Text>().text = cashValue + "";
			                }
						}
					}
				}

				resultPopup.SetActive (true);
				SettingScript.room = null;
    		}
    	}else if(data["result"].str == "wrong"){
			//letter, from, leftTime
			setKeyDisabled (data ["letter"].str);
			
			Transform chTrs = floor.Find (data ["from"].str);
			if(chTrs != null){
				CharacterScript ch = chTrs.GetComponent<CharacterScript> ();
				ch.chat (data ["letter"].str);
				
				if(data["from"].str == SettingScript.nick){
					isCanAnswer = false;
				}
				
				StartCoroutine(waitCanAnswer(chTrs.Find ("hangman_anim").GetChild(0).GetComponent<Image> (), data["leftTime"].f));
			}
    	}else if(data["result"].str == "leave"){
            Transform t = floor.Find(data["nickname"].str);
            if (t != null)
                Destroy(t.gameObject);
        }else if(data["result"].str == "fail"){
    	}
    }
    
    void setBlackBoard(string current){
		string blackboard = "";
		foreach (char c in current){
			blackboard += c + " ";
		}
		TextCurrent.text = blackboard.Trim();
    }
    
    void setKeyDisabled(string letter){
    	Transform keyTrs = keyboard.transform.Find ("Button" + letter.ToUpper ());
		if(keyTrs != null){
			KeyboardButton key = keyTrs.GetComponent<KeyboardButton> ();
			key.interactable = false;
			key.enabled = false;
			key.image.color = key.colors.disabledColor;
			key.transform.GetComponentInChildren<Text> ().color = key.colors.disabledColor;
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
            Transform t = floor.Find(data["nickname"].str);
            if (t != null)
                Destroy(t.gameObject);
        }
    }

	public void hangmanTryClick ()
	{
		keyboard.SetActive (true);
		settingScript.playSound (1);
	}
	
    public void retryClick(){
        SettingScript.socketScript.hangmanEnter();
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

	IEnumerator waitCanAnswer (Image progress, float time)
	{
		progress.fillAmount = 0;
		progress.gameObject.SetActive (true);
		while (progress.fillAmount < 1f){
			progress.fillAmount += Time.deltaTime / time;
			yield return null;
		}
		
		if(progress.transform.parent.parent.name == SettingScript.nick){
			isCanAnswer = true;
		}
		progress.gameObject.SetActive (false);
    }
    
    class RankComparer : Comparer<JSONObject>
	{
		public override int Compare (JSONObject a, JSONObject b)
		{
			int aCorrect = a ["answer"].list.Count;
			int bCorrect = b ["answer"].list.Count;
			
			return bCorrect.CompareTo(aCorrect);
		}
	}
}
