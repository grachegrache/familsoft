using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class MoveScript : MonoBehaviour{
	SettingScript settingScript;
	RectTransform rect;
	private float min_x, max_x, min_y, max_y;
	Vector2 touchDeltaPos;
	Camera cam;

	void Awake(){
		rect = GetComponent<RectTransform> ();
		min_x = 50f - rect.rect.width / 2;
		min_y = -rect.rect.height / 2;
		max_y = rect.rect.height / 2 - 30f;
		max_x = rect.rect.width / 2 - 50f;

	}

	void Start(){
		settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
	}

	void Update(){
		bool isMove = false;
		foreach(Transform child in transform){
			CharacterScript cs = child.GetComponent<CharacterScript> ();
			if (cs != null) {
				if (!cs.isIdle) {
					isMove = true;
					break;
				}
			}
		}

		if (isMove) {
			if (settingScript != null) {
				settingScript.setSiblings (transform);
			}
		}

//		if (Input.touchCount == 1) {
//			if (Input.touches [0].phase == TouchPhase.Began) {
//				touchDeltaPos = Vector2.zero;
//			} else if (Input.touches [0].phase == TouchPhase.Moved) {
//				touchDeltaPos += Input.touches [0].deltaPosition;
//			} else if (Input.touches [0].phase == TouchPhase.Ended) {
//				if (touchDeltaPos.magnitude > 100f) {
//					if (EventSystem.current.currentSelectedGameObject != null) {
//						Debug.Log (EventSystem.current.currentSelectedGameObject.name);
//						//							EventSystem.current.SetSelectedGameObject (null);
//						Vector2 localCursor;
//						if (RectTransformUtility.ScreenPointToLocalPointInRectangle (rect,
//							Input.touches [0].position, cam, out localCursor)) {
//							if (rect.rect.Contains (localCursor)) {
//								Debug.Log ("LocalCursor:" + localCursor);
//							}
//						}
//					}
//				}
//			}
//		}
	}

	public void OnPointerClick(BaseEventData data){
		PointerEventData pData = (PointerEventData)data;

		if (pData.pointerPress == gameObject) {
			Vector2 localCursor;
			if (!RectTransformUtility.ScreenPointToLocalPointInRectangle(rect,
				pData.position, pData.pressEventCamera, out localCursor))
				return;
			
			Debug.Log(localCursor);

			if (localCursor.x > max_x)
				localCursor.x = max_x;
			else if (localCursor.x < min_x)
				localCursor.x = min_x;
			if (localCursor.y > max_y)
				localCursor.y = max_y;
			else if (localCursor.y < min_y) {
				localCursor.y = min_y;
			}

			CharacterScript ch = transform.Find (SettingScript.nick).GetComponent<CharacterScript> ();
			if (SettingScript.room == null) {
				if (ch.gameObject.activeSelf) {
					ch.setTargetPos (localCursor.x, localCursor.y);
				}
			} else {
                if (SettingScript.socketScript.squareScript) {
                    if (localCursor.x < -677.505f && localCursor.y > 619.351f)
                    {
                        //if(localCursor.x < -677.505f){
                        //    localCursor.x = -677.505f;
                        //}
                        //if(localCursor.y > 619.351f){
                        //    localCursor.y = 619.351f;
                        //}
                        return;
                    }
                    else if (localCursor.x > 373.65f && localCursor.y > 690.6f)
                    {
                        //if(localCursor.x > 373.65f){
                        //    localCursor.x = 373.65f;
                        //}
                        //if(localCursor.y > 690.6f){
                        //    localCursor.y = 690.6f;
                        //}
                        return;
                        //if (!(localCursor.x < 700.1464f && localCursor.y < 1351.9114f - localCursor.x))
                        //{
                            
                        //}
                    
                    }
                    //else if (localCursor.x > -502f && localCursor.x < 392.2f && localCursor.y > 152.3f && localCursor.y < 579.1f) {
                    //    //TODO?
                    //    //enable loc
                    //    return;
                    //}
                }else if(SettingScript.socketScript.pianoScript){
					SettingScript.socketScript.pianoScript.playPiano (localCursor);
                }
                
				if (ch.isFashionshow) {
					if (ch.gameObject.activeSelf) {
						settingScript.openMessagePopup (LocalizationString.MAINGAME_FashionshowCancelMessage, false, () => {
							if(ch.gameObject.activeSelf){
								SettingScript.socketScript.fashionshowCancel (localCursor);
							}
							settingScript.messagePopup.SetActive (false);
						});
					}
				} else {
					ch.setTargetPos (localCursor.x, localCursor.y);
					SettingScript.socketScript.move (localCursor);
				}
			}
		}

	}

}
