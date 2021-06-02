using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlotScript : MonoBehaviour {
    public Transform touch_floor;

    SettingScript settingScript;

    void Awake() {
        settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
        SettingScript.socketScript.slotScript = this;
        settingScript.movable = touch_floor;
        settingScript.isSceneLoading = false;

        if(settingScript.data == null){
            settingScript.openMessagePopup("data null error", true, () => {
                SettingScript.isLoaded = false;
                Destroy(settingScript.gameObject);
                UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
            });
            return;
        }

        settingScript.createSelf(touch_floor);

        if (settingScript.data.HasField("userDatas"))
        {
            for (int i = 0; i < settingScript.data["userDatas"].Count; i++)
            {
                settingScript.createCharacter(settingScript.data["userDatas"][i], touch_floor);
            }
        }

        RectTransform movable = touch_floor.GetComponent<RectTransform>();
        float maxX = movable.rect.width / 2 - 50f;
        float maxY = movable.rect.height / 2 - 30f;
        float minX = -movable.rect.width / 2 + 50f;
        float minY = -movable.rect.height / 2;

        foreach(JSONObject slotRow in settingScript.data["slotData"].list){
            int slotNum = (int)slotRow["slotNum"].n;
            slotRow["nickname"].str = "slot_character_" + slotNum;

            JSONObject slotData = slotRow;
            slotData.AddField("x", Random.Range(minX, maxX));
            slotData.AddField("y", Random.Range(minY, maxY));
            settingScript.createDoll(slotRow, touch_floor).setOnClickAction(() => {
                settingScript.slotButtonClick(slotData);
            });
        }
        settingScript.data = null;
        settingScript.setChatingActive(true);
        settingScript.playBGM(0);
    }
	
    void OnDestroy() {
        SettingScript.socketScript.slotScript = null;
    }

    public void onSlot(JSONObject data)
    {
        if (data["result"].str.Equals("enter"))
        {
            settingScript.createCharacter(data["userData"], touch_floor);

        }
        else if (data["result"].str == "leave")
        {
            Transform t = touch_floor.Find(data["nickname"].str);
            if (t != null)
                Destroy(t.gameObject);
        }
        else if (data["result"].str.Equals("fail"))
        {

        }
    }

    public void onHome(JSONObject data) {
        if (data.HasField("result"))
        {
            if (data["result"].str.Equals("success"))
            {
                SettingScript.room = null;
                UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene");
            }
            else
            {

            }
        }
        else
        {
            Transform t = touch_floor.Find(data["nickname"].str);
            if (t != null)
                Destroy(t.gameObject);
        }
    }

    public void onMove(JSONObject data)
    {
        string nickname = data["nickname"].str;
        if (nickname == SettingScript.nick)
        {
            return;
        }
        Transform ch = touch_floor.Find(nickname);
        if (ch != null)
        {
            ch.GetComponent<CharacterScript>().setTargetPos(data["pos_x"].f, data["pos_y"].f);
        }
    }

    public void homeClick() {
        settingScript.openMessagePopup(LocalizationString.MAINGAME_GoingHome, false,
            () => {
                SettingScript.socketScript.goTo("home");
                settingScript.setProgressBackActive(true);
                settingScript.messagePopup.SetActive(false);
                settingScript.playSound(0);
            });
        settingScript.playSound(1);
    }

    public void squareClick() {
        settingScript.openMessagePopup(LocalizationString.MAINGAME_GoingSquare, false,
            () => {
                SettingScript.socketScript.goTo("square");
                settingScript.setProgressBackActive(true);
                settingScript.messagePopup.SetActive(false);
                settingScript.playSound(0);
            });
        settingScript.playSound(1);
    }
}
