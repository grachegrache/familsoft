using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FishingScript : MonoBehaviour {
    public Transform seat_back;
    public Transform seat_front;
    public DelayedDeactivateScript fishingState;

    public GameObject fishing_statePref;

    SettingScript settingScript;

    Vector2 fishing_statePos = new Vector3(0, 130f, 0);
    float remainTime;

    public enum fishing_state{
        fishing = 0,
        gem = 1,
        fail = 2
    }

    void Awake() {
        settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
        SettingScript.socketScript.fishingScript = this;
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

        // make characters
        float x = settingScript.data["seatLoc"]["x"].f;
        float y = settingScript.data["seatLoc"]["y"].f;
        Transform seat;
        if(y > 0){
            seat = seat_back;
        }else{
            seat = seat_front;
        }

        CharacterScript ch = settingScript.createSelf(seat, new Vector2(x,y));

        if (settingScript.data.HasField("userDatas")) {
            foreach(JSONObject user in settingScript.data["userDatas"].list){
                if(user["y"].f > 0){
                    seat = seat_back;
                }else{
                    seat = seat_front;
                }

                ch = settingScript.createCharacter(user, seat);
                addFishingState(ch.transform);
                if(user.HasField("fishing_state")){
                    setFishingState(ch.transform, fishing_state.fishing);
                }
            }
        }

        settingScript.data = null;
        settingScript.playBGM(2);
    }

    void OnDestroy() {
        SettingScript.socketScript.fishingScript = null;
    }

    void Update () {
        if(remainTime > 0){
            remainTime -= Time.deltaTime;
            if(remainTime <= 0){
                SettingScript.socketScript.fishing("miss");
            }
        }
	}

    public void onFishing(JSONObject data){
        Transform user = null;
        if(data.HasField("nickname")){
            user = seat_back.Find(data["nickname"].str);
            if (user == null) {
                user = seat_front.Find(data["nickname"].str);
            }
        }

        if(data["result"].str == "enter"){
            Transform seat;
            if (data["userData"]["y"].f > 0) {
                seat = seat_back;
            } else {
                seat = seat_front;
            }

            CharacterScript ch = settingScript.createCharacter(data["userData"], seat);
            addFishingState(ch.transform);

        }else if(data["result"].str == "fishing"){
            if(data["nickname"].str == SettingScript.nick){
                remainTime = 5f;
                fishingState.transform.GetChild(0).gameObject.SetActive(true);
                fishingState.transform.GetChild(1).gameObject.SetActive(false);
                fishingState.transform.GetChild(2).gameObject.SetActive(false);
                fishingState.gameObject.SetActive(true);
            }else if (user) {
                setFishingState(user, fishing_state.fishing);
            }
        }else if(data["result"].str == "catch"){
            if(data["nickname"].str == SettingScript.nick){
                remainTime = 0;
                long score = (long)data["score"].n;
                long cashValue;
                if (long.TryParse(settingScript.getChData()["userData"]["cash"].str, out cashValue)) {
                    cashValue += score;
                    settingScript.getChData()["userData"]["cash"].str = cashValue + "";
                    settingScript.cash.transform.GetComponentInChildren<Text>().text = cashValue + "";
                }

                fishingState.transform.GetChild(1).GetChild(1).GetComponent<Text>().text = score + "";
                fishingState.transform.GetChild(0).gameObject.SetActive(false);
                fishingState.transform.GetChild(1).gameObject.SetActive(true);
                fishingState.transform.GetChild(2).gameObject.SetActive(false);
                fishingState.delayedDeactivate(fishingState.gameObject);

            }else if (user) {
                user.Find("fishing_state").GetChild(1).GetChild(1).GetComponent<Text>().text = (int)data["score"].n+"";
                setFishingState(user, fishing_state.gem);
            }
        }else if(data["result"].str == "miss"){
            if(data["nickname"].str == SettingScript.nick){
                remainTime = 0;
                fishingState.transform.GetChild(0).gameObject.SetActive(false);
                fishingState.transform.GetChild(1).gameObject.SetActive(false);
                fishingState.transform.GetChild(2).gameObject.SetActive(true);
                fishingState.delayedDeactivate(fishingState.gameObject);

            }else if (user) {
                setFishingState(user, fishing_state.fail);
            }
        }else if (data["result"].str == "leave") {
            Transform t = seat_back.Find(data["nickname"].str);
            if (t == null) {
                t = seat_front.Find(data["nickname"].str);
            }

            if (t != null) {
                Destroy(t.gameObject);
            }
        }else if(data["result"].str == "fail"){
            
        }
    }

    public void onHome(JSONObject data) {
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
            Transform t = seat_back.Find(data["nickname"].str);
            if(t == null){
                t = seat_front.Find(data["nickname"].str);
            }

            if (t != null){
                Destroy(t.gameObject);
            }
        }
    }

    public void exitClick() {
        settingScript.openMessagePopup(LocalizationString.MINIGAME_exitMessage, false, () => {
            SettingScript.socketScript.goTo("home");
            settingScript.messagePopup.SetActive(false);
            settingScript.playSound(0);
        });
        settingScript.playSound(1);
    }

    void addFishingState(Transform ch){
        RectTransform fishingRect = Instantiate(fishing_statePref, ch).GetComponent<RectTransform>();
        fishingRect.name = "fishing_state";
        fishingRect.anchoredPosition = fishing_statePos;
    }

    void setFishingState(Transform ch, fishing_state fs){
        Transform fishing = ch.Find("fishing_state");
        //turn on fs and turn off others
        fishing.GetChild((int)fs).gameObject.SetActive(true);
        for (int i = (int)fs+1; i < (int)fs+3; i++){
            fishing.GetChild(i % 3).gameObject.SetActive(false);
        }

        //turn off result images after some time
        if(fs > 0){
            fishing.GetComponent<DelayedDeactivateScript>().delayedDeactivate(fishing.GetChild((int)fs).gameObject);
        }
    }

    public void fishingClick(){
        SettingScript.socketScript.fishing("catch");
        fishingState.transform.GetChild(0).gameObject.SetActive(false);
    }
}
