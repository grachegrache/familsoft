using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PianoScript : MonoBehaviour {
	public Transform touch_floor;
	public Transform pianoG, pianoF;
	public AudioClip [] pianos;
	
    SettingScript settingScript;
	AudioSource audioSource;

	readonly float [] keyboard_y = { -226f, 127f };
	const float white_width = 49f;
	const float white_min_x = -313f;
	const int white_x_length = 14;
	const float white_min_y = -100f;
	const float white_max_y = 110f;
	const float black_width = 26f;
	readonly float [] black_x = { -288f, -240f, -144f, -96f, -48f, 48f, 96f, 192f, 240f, 288f };
	const float black_min_y = -8f;
	const float black_max_y = 110f;
	
    void Awake() {
        settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
        SettingScript.socketScript.pianoScript = this;
        settingScript.movable = touch_floor;
        settingScript.isSceneLoading = false;
        settingScript.setButtonsActive(false);
        settingScript.setChatingActive(true);
        settingScript.setCashShopActive(false);

        if(settingScript.data == null){
            settingScript.openMessagePopup("data null error", true, () => {
                SettingScript.isLoaded = false;
                Destroy(settingScript.gameObject);
                UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
            });
            return;
        }

        settingScript.createSelf(touch_floor).GetComponent<Image>().raycastTarget = false;

        if (settingScript.data.HasField("userDatas"))
        {
            for (int i = 0; i < settingScript.data["userDatas"].Count; i++)
            {
                settingScript.createCharacter(settingScript.data["userDatas"][i], touch_floor).GetComponent<Image>().raycastTarget = false;
            }
        }

        settingScript.data = null;
        settingScript.playBGM(0);

		audioSource = GetComponent<AudioSource> ();
    }
	
    void OnDestroy() {
        SettingScript.socketScript.pianoScript = null;
    }
	
	public void onPiano(JSONObject data){
		if (data["result"].str.Equals("enter"))
        {
            settingScript.createCharacter(data["userData"], touch_floor).GetComponent<Image>().raycastTarget = false;

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
                settingScript.data = null;
                UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene");
                settingScript.setButtonsActive(true);
                settingScript.setCashShopActive(true);
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
			playPiano (new Vector2 (data["pos_x"].f, data["pos_y"].f));
        	
            ch.GetComponent<CharacterScript>().setTargetPos(data["pos_x"].f, data["pos_y"].f);
        }
        
    }

    public void exitClick() {
        settingScript.openMessagePopup(LocalizationString.MINIGAME_exitMessage, false,
            () => {
                SettingScript.socketScript.goTo("home");
                settingScript.setProgressBackActive(true);
                settingScript.messagePopup.SetActive(false);
                settingScript.playSound(0);
            });
        settingScript.playSound(1);
    }
    
    public void playPiano(Vector2 loc){
		int pianoNum = getPianoNum (loc);
		if(pianoNum >= 0){
			playPiano (pianoNum);
		}
		
    }
    
    void playPiano(int pianoNum){
		if (pianoNum < 0 || pianoNum > pianos.Length)
			return;
		setXFromPianoNum (pianoNum);
		audioSource.PlayOneShot (pianos[pianoNum]);
		
    }
    
    void setXFromPianoNum(int pianoNum){
		if (pianoNum < 0 || pianoNum >= pianos.Length)
			return;

		float clipLength = pianos [pianoNum].length;
		DelayedDeactivateScript selected = null;
		bool isWhite = true;
		if(pianoNum < 14){
			//F white(+0)
			selected = pianoF.GetChild (0).GetComponent<DelayedDeactivateScript> ();
		}else if(pianoNum < 24){
			//F black(+14)
			isWhite = false;
			pianoNum -= 14;
			selected = pianoF.GetChild (2).GetComponent<DelayedDeactivateScript> ();
		}else if(pianoNum < 38){
			//G white(+24)
			pianoNum -= 24;
			selected = pianoG.GetChild (0).GetComponent<DelayedDeactivateScript> ();
		}else if(pianoNum < 48){
			//G black(+38)
			isWhite = false;
			pianoNum -= 38;
			selected = pianoG.GetChild (2).GetComponent<DelayedDeactivateScript> ();
		}

		float x;
		if(isWhite){
			x = white_min_x + (white_width-1f) * pianoNum;
		}else{
			x = black_x [pianoNum];
		}

		RectTransform rect = selected.GetComponent<RectTransform> ();
		Vector2 pos = rect.anchoredPosition;
		pos.x = x;
		rect.anchoredPosition = pos;
		selected.gameObject.SetActive (true);
		selected.delayedDeactivate (selected.gameObject, clipLength);
    }
    
    int getPianoNum(Vector2 loc){
	  	float min_y, max_y;
	  	int index;

		min_y = keyboard_y [0] + white_min_y;
		
		if(loc.y > min_y){
			min_y = keyboard_y [0] + black_min_y;
			if(loc.y > min_y){
				max_y = keyboard_y [0] + black_max_y;
				if(loc.y < max_y){
					//F black(+14)
					index = getPianoBlackNum (loc.x);
					if(index >= 0){
						return index + 14;
					}

					//F white(+0)
					index = getPianoWhiteNum (loc.x);
					if(index >= 0){
						return index;
					}
				}else{
					min_y = keyboard_y [1] + white_min_y;
					if(loc.y > min_y){
						min_y = keyboard_y [1] + black_min_y;
						if(loc.y > min_y){
							max_y = keyboard_y [1] + black_max_y;
							if(loc.y < max_y){
								//G black(+38)
								index = getPianoBlackNum (loc.x);
								if(index >= 0){
									return index + 38;
								}

								//G white(+24)
								index = getPianoWhiteNum (loc.x);
								if(index >= 0){
									return index + 24;
								}
							}
						}else{
							//G white(+24)
							index = getPianoWhiteNum (loc.x);
							if(index >= 0){
								return index + 24;
							}
						}
					}
				}
			}else{
				//F white(+0)
				index = getPianoWhiteNum (loc.x);
				if(index >= 0){
					return index;
				}
			}
		}

		return -1;
    }
    
    int getPianoBlackNum(float x){
		float min_x, max_x;

		for (int i = 0; i < black_x.Length; i++){
			min_x = black_x [i] - black_width / 2;
			max_x = black_x [i] + black_width / 2;
			if(x > min_x && x < max_x){
				return i;
			}
		}

		return -1;
    }
    
    int getPianoWhiteNum(float x){
		float min_x = white_min_x - white_width / 2;
		float max_x = (white_min_x + (white_width-1f) * (white_x_length - 1)) + white_width / 2;
		if(x > min_x && x < max_x){
			for (int i = 0; i < white_x_length; i++){
				max_x = (white_min_x + (white_width-1f) * i) + white_width / 2;
				if(x < max_x){
					return i;
				}
			}
		}

		return -1;
    }

}
