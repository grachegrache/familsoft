using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BlindDateScript : MonoBehaviour {
	SettingScript settingScript;
	public Transform characters;
	CharacterScript ch1, ch2;
	public GameObject user1, user2;
	public GameObject waiting;

	void Start(){
		settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
		SettingScript.socketScript.blinddateScript = this;
		settingScript.movable = characters;
        settingScript.isSceneLoading = false;
		settingScript.setButtonsActive (false);
        settingScript.setChatingActive(true);
        settingScript.setCashActive(false);

		if (settingScript.data == null) {
			settingScript.openMessagePopup ("data null error", true, () => {
				SettingScript.isLoaded = false;
				Destroy (settingScript.gameObject);
				UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
			});
            return;
		}

		ch1 = characters.GetChild (0).GetComponent<CharacterScript> ();
		ch2 = characters.GetChild (1).GetComponent<CharacterScript> ();

		//set characters
		if (settingScript.data.HasField ("userData")) {
            if (settingScript.data.HasField("isFirst"))
            {
                //ch1 <- user
                settingScript.setProfileCharacter(settingScript.getChData()["userData"], user1.transform.GetChild(0).GetChild(0).GetChild(0));
                user1.transform.GetChild(1).GetComponent<Text>().text = SettingScript.nick;
                user1.transform.GetChild(2).GetComponent<Text>().text = ((SystemLanguage)settingScript.getChData()["userData"]["language"].n).ToString();
                setCharacter(ch1.transform, settingScript.getChData()["userData"]);

                //ch2 <- partner
                settingScript.setProfileCharacter(settingScript.data["userData"], user2.transform.GetChild(0).GetChild(0).GetChild(0));
                user2.transform.GetChild(1).GetComponent<Text>().text = settingScript.data["userData"]["nickname"].str;
                user2.transform.GetChild(2).GetComponent<Text>().text = ((SystemLanguage)settingScript.data["userData"]["language"].n).ToString();
                setCharacter(ch2.transform, settingScript.data["userData"]);

            }else{
                //ch1 <- partner
                settingScript.setProfileCharacter(settingScript.data["userData"], user1.transform.GetChild(0).GetChild(0).GetChild(0));
                user1.transform.GetChild(1).GetComponent<Text>().text = settingScript.data["userData"]["nickname"].str;
                user1.transform.GetChild(2).GetComponent<Text>().text = ((SystemLanguage)settingScript.data["userData"]["language"].n).ToString();
                setCharacter(ch1.transform, settingScript.data["userData"]);

                //ch2 <- user
                settingScript.setProfileCharacter(settingScript.getChData()["userData"], user2.transform.GetChild(0).GetChild(0).GetChild(0));
                user2.transform.GetChild(1).GetComponent<Text>().text = SettingScript.nick;
                user2.transform.GetChild(2).GetComponent<Text>().text = ((SystemLanguage)settingScript.getChData()["userData"]["language"].n).ToString();
                setCharacter(ch2.transform, settingScript.getChData()["userData"]);
            }
			
			user2.SetActive (true);
			ch2.gameObject.SetActive (true);
			waiting.SetActive (false);
		}else{
			//ch1 <- user
			settingScript.setProfileCharacter(settingScript.getChData()["userData"], user1.transform.GetChild(0).GetChild(0).GetChild(0));
			user1.transform.GetChild (1).GetComponent<Text> ().text = SettingScript.nick;
            user1.transform.GetChild(2).GetComponent<Text>().text = ((SystemLanguage)settingScript.getChData()["userData"]["language"].n).ToString();
			setCharacter (ch1.transform, settingScript.getChData () ["userData"]);
		}

		settingScript.data = null;

        //localize
        waiting.GetComponentInChildren<Text>().text = LocalizationString.Waiting;

		settingScript.playBGM (0);
	}

	void setCharacter(Transform ch, JSONObject data){
		ch.name = data ["nickname"].str;
		for(int i=0; i<SettingScript.clothIndex.Length; i++){
			int num = (int)data [SettingScript.clothIndex [i]].n;
			Image part = ch.Find ("body").Find (SettingScript.clothIndex [i]).GetComponent<Image> ();
			Color c = part.color;
			if (num >= 0) {
				int index = num;
				if (SettingScript.clothIndex [i].Equals ("hair")
					|| SettingScript.clothIndex [i].Equals ("face")
					|| SettingScript.clothIndex [i].Equals ("hairac")) {
					index *= 3;
				} else {
					index *= 4;
				}
				part.sprite = settingScript.clothes [i] [index+1];
				c.a = 1f;
			} else {
				part.sprite = null;
				c.a = 0;
			}
			part.color = c;
		}
	}

	void OnDestroy(){
		settingScript.movable = null;
		if (SettingScript.socketScript != null) {
			SettingScript.socketScript.blinddateScript = null;
		}
	}

	// Update is called once per frame
	void Update () {
		
	}

	public void onBlindDate(JSONObject data){
		//Debug.Log (data);
		if (data ["result"].str == "success") {
			settingScript.setProfileCharacter (data ["userData"], user2.transform.GetChild (0).GetChild (0).GetChild (0));
			user2.transform.GetChild (1).GetComponent<Text> ().text = data ["userData"] ["nickname"].str;
            user2.transform.GetChild(2).GetComponent<Text>().text = ((SystemLanguage)data["userData"]["language"].n).ToString();
			setCharacter (ch2.transform, data ["userData"]);

			user2.SetActive (true);
			ch2.gameObject.SetActive (true);
			waiting.SetActive (false);
		} else if (data ["result"].str == "leave") {
			settingScript.openMessagePopup (string.Format (LocalizationString.MINIGAME_PartnerLeave, data ["nickname"].str), true, () => {
				SettingScript.room = null;
                settingScript.data = null;
				UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene");
				settingScript.setButtonsActive (true);
                settingScript.setCashActive(true);
			});
		} else if (data ["result"].str == "fail") {
		} else {
		}
	}

	public void onHome(JSONObject data){
		if (data.HasField ("result")) {
			if (data ["result"].str.Equals ("success")) {
				SettingScript.room = null;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
				settingScript.setButtonsActive (true);
                settingScript.setCashActive(true);
			} else {

			}
		} else {
			settingScript.openMessagePopup (string.Format (LocalizationString.MINIGAME_PartnerLeave, data ["nickname"].str), true, () => {
				SettingScript.room = null;
				UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene");
				settingScript.setButtonsActive (true);
                settingScript.setCashActive(true);
			});
		}
	}

	public void exitClick(){
		settingScript.openMessagePopup(LocalizationString.MINIGAME_exitMessage, false, () => {
			SettingScript.socketScript.goTo("home");
			settingScript.messagePopup.SetActive(false);
			settingScript.playSound (0);
		});
		settingScript.playSound (1);
	}
}
