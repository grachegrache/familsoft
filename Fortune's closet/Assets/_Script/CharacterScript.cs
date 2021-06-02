using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class CharacterScript : MonoBehaviour {
	public bool isIdle = true;
	public bool isFashionshow;
    public bool isInit;
	public float speed;

	SettingScript settingScript;
	charState state_x, state_y;
	RectTransform rectRoot, rectBody;
	Sprite[][] walk;
	Sprite[] idle;
	Image[] clothImages;

	public List<Vector2> path = new List<Vector2>();
	System.Action onStopAction;
	Text nickText;
	Text chatText;
	int[] cloth;
	int walk_state;
	float frameTime, moveTime;
	float target_x,target_y;
    float speedX, speedY;

	string nick;
	bool isGoTo;

	public int line_num, left_line;

	public enum charState{
		idle = 0,
		walk_minus = 1,
		walk_plus = 2,
	}

	public virtual void Awake(){
        if (isInit)
            return;
        
		cloth = new int[SettingScript.clothIndex.Length];
		walk = new Sprite[SettingScript.clothIndex.Length][];
		clothImages = new Image[SettingScript.clothIndex.Length];

		rectRoot = GetComponent<RectTransform> ();
		rectBody = transform.Find ("body").GetComponent<RectTransform> ();
        if (transform.Find("nickname") != null)
            nickText = transform.Find("nickname").GetComponentInChildren<Text>();
        if (transform.Find("chat") != null)
            chatText = transform.Find("chat").GetComponentInChildren<Text>();
		for (int i = 0; i < SettingScript.clothIndex.Length; i++) {
			walk[i] = new Sprite[4];
			clothImages [i] = rectBody.Find (SettingScript.clothIndex [i]).GetComponent<Image> ();
		}
		idle = new Sprite[SettingScript.clothIndex.Length];

		settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
		speed = 200f;
        isInit = true;
	}

	public virtual void Update () {
		if (state_x.Equals (charState.idle) && state_y.Equals (charState.idle)) {
			if (!isIdle) {
				isIdle = true;
				walk_state = 0;

				if (path.Count > 0) {
					setTargetPos (path [0].x, path [0].y);
					path.RemoveAt (0);
				} else {
					if(!(this is DollScript) || this is DollScript && !((DollScript)this).isRunning){
						rectBody.localRotation = Quaternion.Euler (0, 0, 0);
						for (int i = 0; i < SettingScript.clothIndex.Length; i++) {
							if (cloth [i] >= 0) {
								clothImages [i].sprite = idle [i];
							}
						}
					}
					

					if (onStopAction != null) {
						onStopAction ();
						onStopAction = null;
					}
				}
			}
		} else {
			frameTime += Time.deltaTime;
			if (frameTime > 0.2f) {
				frameTime -= 0.2f;
				walk_state = (walk_state+1) % 4;

				for(int i=0; i<SettingScript.clothIndex.Length; i++){
					if (cloth [i] >= 0) {
						clothImages[i].sprite = walk[i][walk_state];
					}
				}
			}

			float moveX = Time.deltaTime * speedX;
            float moveY = Time.deltaTime * speedY;
			Vector2 pos = rectRoot.localPosition;

			if (state_x.Equals (charState.walk_minus)) {
				if (pos.x - moveX > target_x) {
					pos.x -= moveX;
				} else {
					pos.x = target_x;
					state_x = charState.idle;
				}
			} else if (state_x.Equals (charState.walk_plus)) {
				if (pos.x + moveX < target_x) {
					pos.x += moveX;
				} else {
					pos.x = target_x;
					state_x = charState.idle;
				}
			}

			if (state_y.Equals (charState.walk_minus)) {
				if (pos.y - moveY > target_y) {
					pos.y -= moveY;
				} else {
					pos.y = target_y;
					state_y = charState.idle;
				}
			} else if (state_y.Equals (charState.walk_plus)) {
				if (pos.y + moveY < target_y) {
					pos.y += moveY;
				} else {
					pos.y = target_y;
					state_y = charState.idle;
				}
			}

			rectRoot.localPosition = pos;

		}

        if (SettingScript.nick == name) {
            if (isGoTo) {
                moveTime += Time.deltaTime;
                if (moveTime > 2) {
                    isGoTo = false;
                    moveTime = 0;
                    SettingScript.socketScript.goTo("square");

                }
            }
        }
	}

	public Vector2 getCurrentPos(){
		return rectRoot.position;
	}

	public void setPos(Vector2 pos){
		rectRoot.localPosition = pos;
	}

    public void setTargetPos(float x, float y) {
        //Debug.Log(getNickname()+" "+x+"/"+y);
        if (isIdle) {
            for (int i = 0; i < SettingScript.clothIndex.Length; i++) {
                if (cloth[i] >= 0) {
                    clothImages[i].sprite = walk[i][0];
                }
            }
        }

        isIdle = false;

        if (rectRoot.localPosition.x < x) {
            state_x = charState.walk_plus;
            rectBody.localRotation = Quaternion.Euler(0, 180f, 0);
        } else {
            state_x = charState.walk_minus;
            rectBody.localRotation = Quaternion.Euler(0, 0, 0);
        }
        if (rectRoot.localPosition.y < y) {
            state_y = charState.walk_plus;
        } else {
            state_y = charState.walk_minus;
        }

        target_x = x;
        target_y = y;

        float disX = Mathf.Abs (target_x - rectRoot.localPosition.x);
        float disY = Mathf.Abs(target_y - rectRoot.localPosition.y);
        
        if (disX <= 0.1f && disY <= 0.1f) {
            speedX = speed;
            speedY = speed;
        } else {
            if (disX > disY) {
                speedX = speed;
                if (disY <= 0.1f) {
                    speedY = speed;
                } else {
                    speedY = speed * disY / disX;
                }

            } else {
                if (disX <= 0.1f) {
                    speedX = speed;
                } else {
                    speedX = speed * disX / disY;
                }
                speedY = speed;
            }
        }

	}

	public void setClothIndex(int type, int num){
		cloth [type] = num;

		Image part = transform.Find ("body").Find (SettingScript.clothIndex [type]).GetComponent<Image> ();
		Color c = part.color;
		if (num >= 0) {
			if (SettingScript.clothIndex [type].Equals ("hair")
			    || SettingScript.clothIndex [type].Equals ("face")
			    || SettingScript.clothIndex [type].Equals ("hairac")) {
				idle [type] = settingScript.clothes [type] [num * 3];
				walk [type] [0] = settingScript.clothes [type] [num * 3 + 2];
				walk [type] [1] = settingScript.clothes [type] [num * 3 + 1];
				walk [type] [2] = settingScript.clothes [type] [num * 3 + 2];
				walk [type] [3] = settingScript.clothes [type] [num * 3 + 1];

			} else {
				idle [type] = settingScript.clothes [type] [num * 4];
				walk [type] [0] = settingScript.clothes [type] [num * 4 + 2];
				walk [type] [1] = settingScript.clothes [type] [num * 4 + 1];
				walk [type] [2] = settingScript.clothes [type] [num * 4 + 3];
				walk [type] [3] = settingScript.clothes [type] [num * 4 + 1];

			}

            clothImages[type].sprite = idle[type];
			c.a = 1f;
		} else {
			c.a = 0;
		}
		part.color = c;
	}

	public string getNickname(){
		return nick;
	}

	public void setNickname(string nickname){
		nick = nickname;
		nickText.text = nick;
	}

	public void setOnStopAction(System.Action action){
		onStopAction = action;
	}

	public void removeOnStopAction(){
		onStopAction = null;
	}

	public void chat(string text){
		chatText.text = text;
		chatText.transform.parent.gameObject.SetActive (true);
        settingScript.setPreferredText(chatText.transform.parent.GetComponent<RectTransform>(), 200f);

		CancelInvoke ("deactiveChat");
		Invoke ("deactiveChat", 3f);
	}

	void deactiveChat(){
		chatText.transform.parent.gameObject.SetActive (false);
	}

	public void addPath(Vector2 path){
		isIdle = false;
		this.path.Add (path);
	}
	
	public void addPath(List<Vector2> path){
		isIdle = false;
		this.path.AddRange (path);
	}
	
	public void setImageSide(){
		isIdle = true;
		state_x = charState.idle;
		state_y = charState.idle;
		for (int i = 0; i < SettingScript.clothIndex.Length; i++) {
            if (cloth[i] >= 0) {
                clothImages[i].sprite = walk[i][1];
            }
        }
        
        rectBody.localRotation = Quaternion.Euler(0, 180f, 0);
	}
	
	public void setCurrentSpeed(float speed){
		this.speed = speed;
		
		if(!isIdle){
	        float disX = Mathf.Abs (target_x - rectRoot.localPosition.x);
			float disY = Mathf.Abs (target_y - rectRoot.localPosition.y);
	        
	        if (disX <= 0.1f && disY <= 0.1f) {
	            speedX = speed;
	            speedY = speed;
	        } else {
	            if (disX > disY) {
	                speedX = speed;
	                if (disY <= 0.1f) {
	                    speedY = speed;
	                } else {
	                    speedY = speed * disY / disX;
	                }
	
	            } else {
	                if (disX <= 0.1f) {
	                    speedX = speed;
	                } else {
	                    speedX = speed * disX / disY;
	                }
	                speedY = speed;
	            }
	        }
		}
	}
	
	public void OnPointerClick(BaseEventData data){
		//Debug.Log ("pointer click");
		PointerEventData pData = (PointerEventData)data;

		if (pData.pointerPress == gameObject) {
			SettingScript.socketScript.profile (nick);
		}
	}

	void OnTriggerEnter2D(Collider2D c){
        if (SettingScript.socketScript.mainScript || SettingScript.socketScript.slotScript) {
			isGoTo = true;
			c.transform.GetChild (0).gameObject.SetActive (true);
		}
	}

	void OnTriggerExit2D(Collider2D c){
        if (SettingScript.socketScript.mainScript || SettingScript.socketScript.slotScript) {
			isGoTo = false;
			moveTime = 0;
			c.transform.GetChild (0).gameObject.SetActive (false);
		}
	}
}
