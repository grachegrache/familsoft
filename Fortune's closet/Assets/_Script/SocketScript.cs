using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SocketIO;
using UnityEngine.Networking;
using System.Text.RegularExpressions;
using System;

public class SocketScript : MonoBehaviour {
	private SocketIOComponent socket;
	private SettingScript settingScript;

	public MainScript mainScript;
	public SquareScript squareScript;
	public DiceScript diceScript;
	public BlindDateScript blinddateScript;
	public FootholdScript footholdScript;
	public SlotScript slotScript;
	public FishingScript fishingScript;
	public PianoScript pianoScript;
	public HangmanScript hangmanScript;
	public RunningScript runningScript;
	bool isOpened;

	void Start ()
	{
		socket = GetComponent<SocketIOComponent> ();
		settingScript = GetComponentInParent<SettingScript> ();

		//		string[] managers = new string[]{"MainManager", "SquareManager"};
		//		GameObject manager = null;
		//		for (int i = 0; i < managers.Length; i++) {
		//			manager = GameObject.Find ("MainManager");
		//			if (manager != null) {
		//				if (managers [i].Equals ("MainManager"))
		//					mainScript = manager.GetComponent<MainScript> ();
		//				else if (managers [i].Equals ("SquareManager"))
		//					squareScript = manager.GetComponent<SquareScript> ();
		//				break;
		//			}
		//		}
		//		//Debug.Log (manager);

		settingScript.setProgressBackActive (true);

		socket.On ("open", (SocketIOEvent e) => {
			Debug.Log ("[SocketIO] Open received: " + e.name + " " + e.data);
			if (isOpened)
				return;
			isOpened = true;

			login ();
		});
		socket.On ("error", (SocketIOEvent e) => {
			Debug.Log ("[SocketIO] Error received: " + e.name + " " + e.data);
		});
		socket.On ("close", (SocketIOEvent e) => {
			Debug.Log ("[SocketIO] Close received: " + e.name + " " + e.data);
			isOpened = false;
			SettingScript.room = null;
		});
		socket.On ("wrong", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] Wrong received: " + e.name + " " + res);

			settingScript.onWrong (res);

		});
		socket.On ("login", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] Login received: " + e.name + " " + res);

			settingScript.onLogin (res);

		});

		socket.On ("userList", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] UserList received: " + e.name + " " + res);

			settingScript.onUserList (res);

		});

		socket.On ("friendList", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] FriendList received: " + e.name + " " + res);

			settingScript.onFriendList (res);

		});

		socket.On ("block", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] Block received: " + e.name + " " + res);

			settingScript.onBlock (res);

		});

		socket.On ("unblock", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] Unblock received: " + e.name + " " + res);

			settingScript.onUnblock (res);

		});

		socket.On ("profile", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] Profile received: " + e.name + " " + res);
			if (res ["userData"] ["profile"].str != null) {
				res ["userData"] ["profile"].str = res ["userData"] ["profile"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
			}
			settingScript.onProfile (res);

		});

		socket.On ("chat", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] Chat received: " + e.name + " " + res);
			res ["msg"].str = res ["msg"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
			settingScript.onChat (res);

		});

		socket.On ("move", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] Move received: " + e.name + " " + res);

			if (mainScript != null) {
				mainScript.onMove (res);
			} else if (squareScript != null) {
				squareScript.onMove (res);
			} else if (footholdScript != null) {
				footholdScript.onMove (res);
			} else if (slotScript != null) {
				slotScript.onMove (res);
			} else if (pianoScript != null) {
				pianoScript.onMove (res);
			}
		});

		socket.On ("square", (SocketIOEvent e) => {
			JSONObject res = null;
			if (e.data != null)
				res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] Square received: " + e.name + " " + res);

			settingScript.onSquare (res);
		});

		socket.On ("visit", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] Visit received: " + e.name + " " + res);

			settingScript.onVisit (res);

		});

		socket.On ("home", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] Home received: " + e.name + " " + res);

			if (settingScript.isSceneLoading && settingScript.data) {
				if (res.HasField ("nickname")) {
					if (settingScript.data.HasField ("isFirst")) {
						//blinddate
						settingScript.openMessagePopup (string.Format (LocalizationString.MINIGAME_PartnerLeave, res ["nickname"].str), true, () => {
							SettingScript.room = null;
							UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
							settingScript.setButtonsActive (true);
							settingScript.setCashActive (true);
						});
						return;
					}

					string userDatas = "userData";
					if (!settingScript.data.HasField (userDatas)) {
						userDatas = "userDatas";
						if (!settingScript.data.HasField (userDatas)) {
							userDatas = null;
						}
					}

					if (userDatas != null) {
						foreach (JSONObject member in settingScript.data [userDatas].list) {
							if (member ["nickname"].str == res ["nickname"].str) {
								settingScript.data [userDatas].list.Remove (member);
								break;
							}
						}

						if (settingScript.data [userDatas].list.Count == 0) {
							settingScript.data.RemoveField (userDatas);
						}
					}
				}
			} else {
				if (mainScript != null) {
					mainScript.onHome (res);
				} else if (squareScript != null) {
					squareScript.onHome (res);
				} else if (diceScript != null) {
					diceScript.onHome (res);
				} else if (blinddateScript != null) {
					blinddateScript.onHome (res);
				} else if (footholdScript != null) {
					footholdScript.onHome (res);
				} else if (slotScript != null) {
					slotScript.onHome (res);
				} else if (fishingScript != null) {
					fishingScript.onHome (res);
				} else if (pianoScript != null) {
					pianoScript.onHome (res);
				} else if (hangmanScript != null) {
					hangmanScript.onHome (res);
				} else if (runningScript != null) {
					runningScript.onHome (res);
				}
			}
		});

		socket.On ("getFurnitures", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] getFurnitures received: " + e.name + " " + res);

			if (mainScript != null) {
				mainScript.onGetFurnitures (res);
			}
		});

		socket.On ("addFurniture", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] addFurniture received: " + e.name + " " + res);

			if (mainScript != null) {
				mainScript.onAddFurniture (res);
			}
		});

		socket.On ("setFurnitures", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] setFurnitures received: " + e.name + " " + res);

			if (mainScript != null) {
				mainScript.onSetFurnitures (res);
			}
		});

		socket.On ("getClothes", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] getClothes received: " + e.name + " " + res);

			settingScript.onGetClothes (res);

		});

		socket.On ("addClothes", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] addClothes received: " + e.name + " " + res);

			settingScript.onAddClothes (res);

		});

		socket.On ("setClothes", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] setClothes received: " + e.name + " " + res);

			settingScript.onSetClothes (res);

		});

		//		socket.On ("addCash", (SocketIOEvent e) => {
		//			JSONObject res = SimpleAES.AES_socketDecrypt(e.data);
		//			//Debug.Log("[SocketIO] addCash received: " + e.name + " " + res);
		//
		//            settingScript.onAddCash(res);
		//			
		//		});

		socket.On ("randomCloth", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] randomCloth received: " + e.name + " " + res);

			settingScript.onRandomCloth (res);

		});

		socket.On ("randomFurniture", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] randomFurniture received: " + e.name + " " + res);

			settingScript.onRandomFurniture (res);

		});

		socket.On ("setProfile", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] setProfile received: " + e.name + " " + res);
			if (res ["profile"].str != null)
				res ["profile"].str = res ["profile"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
			settingScript.onSetProfile (res);

		});

		socket.On ("fashionshow", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] fashionshow received: " + e.name + " " + res);

			if (squareScript != null) {
				squareScript.onFashionshow (res);
			}
		});

		socket.On ("nickScoreList", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] nickScoreList received: " + e.name + " " + res);

			if (squareScript != null) {
				squareScript.onNickScoreList (res);
			}
		});

		socket.On ("dice", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] dice received: " + e.name + " " + res);

			if (res ["result"].str == "start") {
				SettingScript.room = res ["room"].str;
				settingScript.data = res;
				settingScript.isSceneLoading = true;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("DiceScene");
			} else if (settingScript.isSceneLoading) {
				if (res ["result"].str == "enter") {
					if (!settingScript.data.HasField ("userDatas")) {
						settingScript.data.AddField ("userDatas", new JSONObject ());
					}
					settingScript.data ["userDatas"].Add (res ["userData"]);
				} else if (res ["result"].str == "leave") {
					if (settingScript.data.HasField ("userDatas")) {
						foreach (JSONObject member in settingScript.data ["userDatas"].list) {
							if (member ["nickname"].str == res ["nickname"].str) {
								settingScript.data ["userDatas"].list.Remove (member);
								break;
							}
						}

						if (settingScript.data ["userDatas"].list.Count == 0)
							settingScript.data.RemoveField ("userDatas");
					}

				}
			} else if (diceScript != null) {
				diceScript.onDice (res);
			}

		});

		socket.On ("blinddate", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] blinddate received: " + e.name + " " + res);

			if (blinddateScript != null) {
				blinddateScript.onBlindDate (res);

			} else if (settingScript.isSceneLoading) {
				if (res ["result"].str == "success") {
					settingScript.data.AddField ("userData", res ["userData"]);
					settingScript.data.AddField ("isFirst", true);

				} else if (res ["result"].str == "leave") {
					settingScript.openMessagePopup (string.Format (LocalizationString.MINIGAME_PartnerLeave, res ["nickname"].str), true, () => {
						SettingScript.room = null;
						UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
						settingScript.setButtonsActive (true);
						settingScript.setCashActive (true);
					});
				}
			} else {
				SettingScript.room = res ["room"].str;
				settingScript.data = res;
				settingScript.isSceneLoading = true;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("BlindDateScene");
			}


		});

		socket.On ("foothold", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log("[SocketIO] foothold received: " + e.name + " " + res);

			if (footholdScript != null) {
				footholdScript.onFoothold (res);

			} else if (settingScript.isSceneLoading) {
				if (res ["result"].str == "start") {
					settingScript.data ["result"].str = res ["result"].str;
					settingScript.data.SetField ("leftTime", res ["leftTime"].n);

				} else if (res ["result"].str == "enter") {
					if (!settingScript.data.HasField ("userDatas"))
						settingScript.data.AddField ("userDatas", new JSONObject ());
					settingScript.data ["userDatas"].Add (res ["userData"]);

				} else if (res ["result"].str == "leave") {
					if (settingScript.data.HasField ("userDatas")) {
						foreach (JSONObject member in settingScript.data ["userDatas"].list) {
							if (member ["nickname"].str == res ["nickname"].str) {
								settingScript.data ["userDatas"].list.Remove (member);
								break;
							}
						}

						if (settingScript.data ["userDatas"].list.Count == 0) {
							settingScript.data.RemoveField ("userDatas");
						}
					}
				}
			} else {
				SettingScript.room = res ["room"].str;
				settingScript.data = res;
				settingScript.isSceneLoading = true;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("FootholdScene");
			}

		});

		//socket.On ("androidInapp", (SocketIOEvent e) => {
		//	JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
		//	//Debug.Log ("[SocketIO] androidInapp received: " + e.name + " " + res);

		//	settingScript.onAddCash (res);
		//});
		//socket.On ("iosInapp", (SocketIOEvent e) => {
		//	JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
		//	//Debug.Log ("[SocketIO] iosInapp received: " + e.name + " " + res);

		//	settingScript.onAddCash (res);
		//});

		socket.On ("flower", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			//Debug.Log ("[SocketIO] flower received: " + e.name + " " + res);

			if (squareScript != null) {
				squareScript.onFlower (res);
			}
		});

		socket.On ("slot", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] slot received: " + e.name + " " + res);

			if (slotScript != null) {
				slotScript.onSlot (res);

			} else if (settingScript.isSceneLoading) {
				if (res ["result"].str == "enter") {
					if (!settingScript.data.HasField ("userDatas"))
						settingScript.data.AddField ("userDatas", new JSONObject ());
					settingScript.data ["userDatas"].Add (res ["userData"]);

				} else if (res ["result"].str == "leave") {
					if (settingScript.data.HasField ("userDatas")) {
						foreach (JSONObject member in settingScript.data ["userDatas"].list) {
							if (member ["nickname"].str == res ["nickname"].str) {
								settingScript.data ["userDatas"].list.Remove (member);
								break;
							}
						}

						if (settingScript.data ["userDatas"].list.Count == 0) {
							settingScript.data.RemoveField ("userDatas");
						}
					}
				}
			} else {
				SettingScript.room = res ["room"].str;
				settingScript.data = res;
				settingScript.isSceneLoading = true;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("SlotScene");
			}
		});
		socket.On ("addSlot", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] addSlot received: " + e.name + " " + res);

			settingScript.onAddSlot (res);
		});

		socket.On ("getSlot", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] getSlot received: " + e.name + " " + res);

			settingScript.onGetSlot (res);
		});

		socket.On ("setSlot", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] setSlot received: " + e.name + " " + res);

			settingScript.onSetSlot (res);
		});

		socket.On ("fishing", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] fishing received: " + e.name + " " + res);

			if (fishingScript != null) {
				fishingScript.onFishing (res);

			} else if (settingScript.isSceneLoading) {
				if (res ["result"].str == "enter") {
					if (!settingScript.data.HasField ("userDatas")) {
						settingScript.data.AddField ("userDatas", new JSONObject ());
					}
					settingScript.data ["userDatas"].Add (res ["userData"]);

				} else if (res ["result"].str == "fishing") {
					if (settingScript.data.HasField ("userDatas")) {
						foreach (JSONObject user in settingScript.data ["userDatas"].list) {
							if (user ["nickname"].str == res ["nickname"].str) {
								if (user.HasField ("fishing_state")) {
									user.SetField ("fishing_state", (int)FishingScript.fishing_state.fishing);
								} else {
									user.AddField ("fishing_state", (int)FishingScript.fishing_state.fishing);
								}
								break;
							}
						}
					}
				} else if (res ["result"].str == "catch" || res ["result"].str == "miss") {
					if (settingScript.data.HasField ("userDatas")) {
						foreach (JSONObject user in settingScript.data ["userDatas"].list) {
							if (user ["nickname"].str == res ["nickname"].str) {
								user.RemoveField ("fishing_state");
								break;
							}
						}
					}
				} else if (res ["result"].str == "leave") {
					if (settingScript.data.HasField ("userDatas")) {
						foreach (JSONObject member in settingScript.data ["userDatas"].list) {
							if (member ["nickname"].str == res ["nickname"].str) {
								settingScript.data ["userDatas"].list.Remove (member);
								break;
							}
						}

						if (settingScript.data ["userDatas"].list.Count == 0) {
							settingScript.data.RemoveField ("userDatas");
						}
					}
				}
			} else {
				SettingScript.room = res ["room"].str;
				settingScript.data = res;
				settingScript.isSceneLoading = true;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("FishingScene");
			}

		});

		socket.On ("getDiary", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] getDiary received: " + e.name + " " + res);

			try {
				foreach (JSONObject post in res ["postDatas"].list) {
					if (!post ["title"].IsNull) {
						post ["title"].str = post ["title"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
					}
					post ["content"].str = replaceEnter (post ["content"].str);
					post ["content"].str = post ["content"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
					if (!post ["reply"].IsNull) {
						post ["reply"] ["content"].str = replaceEnter (post ["reply"] ["content"].str);
						post ["reply"] ["content"].str = post ["reply"] ["content"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
					}
				}
			} catch (Exception exception) {
				Debug.Log (exception.ToString ());
			}
			settingScript.onGetDiary (res);
		});

		socket.On ("addDiary", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] addDiary received: " + e.name + " " + res);

			if (!res ["postData"] ["title"].IsNull) {
				res ["postData"] ["title"].str = res ["postData"] ["title"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
			}

			res ["postData"] ["content"].str = replaceEnter (res ["postData"] ["content"].str);
			res ["postData"] ["content"].str = res ["postData"] ["content"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
			settingScript.onAddDiary (res);
		});

		socket.On ("setDiary", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] setDiary received: " + e.name + " " + res);

			if (!res ["postData"] ["title"].IsNull) {
				res ["postData"] ["title"].str = res ["postData"] ["title"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
			}

			res ["postData"] ["content"].str = replaceEnter (res ["postData"] ["content"].str);
			res ["postData"] ["content"].str = res ["postData"] ["content"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");

			if (!res ["postData"] ["reply"].IsNull) {
				res ["postData"] ["reply"] ["content"].str = replaceEnter (res ["postData"] ["reply"] ["content"].str);
				res ["postData"] ["reply"] ["content"].str = res ["postData"] ["reply"] ["content"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
			}
			settingScript.onSetDiary (res);
		});

		socket.On ("deleteDiary", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] deleteDiary received: " + e.name + " " + res);

			settingScript.onDeleteDiary (res);
		});

		socket.On ("setReply", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] setReply received: " + e.name + " " + res);

			res ["replyData"] ["content"].str = replaceEnter (res ["replyData"] ["content"].str);
			res ["replyData"] ["content"].str = res ["replyData"] ["content"].str.Replace ("\\\"", "\"").Replace ("\\\\", "\\");
			settingScript.onSetReply (res);
		});

		socket.On ("deleteReply", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] deleteReply received: " + e.name + " " + res);

			settingScript.onDeleteReply (res);
		});

		socket.On ("piano", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] piano received: " + e.name + " " + res);

			if (pianoScript != null) {
				pianoScript.onPiano (res);

			} else if (settingScript.isSceneLoading) {
				if (res ["result"].str == "enter") {
					if (!settingScript.data.HasField ("userDatas"))
						settingScript.data.AddField ("userDatas", new JSONObject ());
					settingScript.data ["userDatas"].Add (res ["userData"]);

				} else if (res ["result"].str == "leave") {
					if (settingScript.data.HasField ("userDatas")) {
						foreach (JSONObject member in settingScript.data ["userDatas"].list) {
							if (member ["nickname"].str == res ["nickname"].str) {
								settingScript.data ["userDatas"].list.Remove (member);
								break;
							}
						}

						if (settingScript.data ["userDatas"].list.Count == 0) {
							settingScript.data.RemoveField ("userDatas");
						}
					}
				}
			} else {
				SettingScript.room = res ["room"].str;
				settingScript.data = res;
				settingScript.isSceneLoading = true;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("PianoScene");
			}
		});

		socket.On ("hangman", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] hangman received: " + e.name + " " + res);

			if (hangmanScript != null) {
				hangmanScript.onHangman (res);

			} else if (settingScript.isSceneLoading) {
				if (res ["result"].str == "start") {
					settingScript.data ["result"].str = res ["result"].str;
					settingScript.data.RemoveField ("leftTime");

				} else if (res ["result"].str == "enter") {
					if (!settingScript.data.HasField ("userDatas"))
						settingScript.data.AddField ("userDatas", new JSONObject ());
					settingScript.data ["userDatas"].Add (res ["userData"]);

				} else if (res ["result"].str == "leave") {
					if (settingScript.data.HasField ("userDatas")) {
						foreach (JSONObject member in settingScript.data ["userDatas"].list) {
							if (member ["nickname"].str == res ["nickname"].str) {
								settingScript.data ["userDatas"].list.Remove (member);
								break;
							}
						}

						if (settingScript.data ["userDatas"].list.Count == 0) {
							settingScript.data.RemoveField ("userDatas");
						}
					}
				}
			} else {
				SettingScript.room = res ["room"].str;
				settingScript.data = res;
				settingScript.isSceneLoading = true;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("HangmanScene");
			}

		});

		socket.On ("fountain", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] fountain received: " + e.name + " " + res);

			if (squareScript) {
				squareScript.onFountain (res);
			}
		});

		socket.On ("adopt", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] adopt received: " + e.name + " " + res);

			settingScript.onAdopt (res);
		});

		socket.On ("running", (SocketIOEvent e) => {
			JSONObject res = SimpleAES.AES_socketDecrypt (e.data);
			Debug.Log ("[SocketIO] running received: " + e.name + " " + res);

			if (runningScript) {
				runningScript.onRunning (res);
				
			} else if (settingScript.isSceneLoading) {
				if (res ["result"].str == "enter") {
					if (!settingScript.data.HasField ("userDatas")) {
						settingScript.data.AddField ("userDatas", new JSONObject ());
					}
					settingScript.data ["userDatas"].Add (res ["userData"]);
				} else if (res ["result"].str == "leave") {
					if (settingScript.data.HasField ("userDatas")) {
						foreach (JSONObject member in settingScript.data ["userDatas"].list) {
							if (member ["nickname"].str == res ["nickname"].str) {
								settingScript.data ["userDatas"].list.Remove (member);
								break;
							}
						}

						if (settingScript.data ["userDatas"].list.Count == 0)
							settingScript.data.RemoveField ("userDatas");
					}

				} else if (res ["result"].str == "start") {
					settingScript.data ["result"].str = res ["result"].str;
					settingScript.data.RemoveField ("leftTime");

				} else if (res ["result"].str == "end") {
					settingScript.data ["result"].str = res ["result"].str;
					settingScript.data.SetField ("adoptData", res ["adoptData"]);
					settingScript.data.AddField ("leftTime", 30);
				} else if (res ["result"].str == "speedList") {
					int speedIndex = 0;
					for (int i = 0; i < settingScript.data ["adoptData"].Count; i++) {
						if (!settingScript.data ["adoptData"] [i].IsNull) {
							settingScript.data ["adoptData"] [i] ["speedList"].list.AddRange (res ["speedData"] [speedIndex++].list);
						}
					}
				}else if(res["result"].str == "success" && res["type"].str == "cheer"){
					int adoptNum = (int)res ["adoptNum"].n;
					int speedIndex = (int)res ["second"].n;

					for (int i = speedIndex; i < speedIndex + 3; i++){
						settingScript.data ["adoptData"] [adoptNum] ["speedList"] [i].n *= 1.5f;
					}
					
				}
			} else {
				SettingScript.room = res ["room"].str;
				settingScript.data = res;
				settingScript.isSceneLoading = true;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("RunningScene");
			}
		});
	}

	void Update ()
	{

	}

	//    void OnApplicationPause(bool pause) {
	//        if (pause) {
	//            //TODO
	//            //idle packet
	//
	//            //          setSocketActive (false);
	//        } else {
	//            if (socket == null) {
	//                //Debug.Log("socket io component null");
	//            }else{
	//                socket.Reconnect();
	//                if (socket.socket == null) {
	//                    //Debug.Log("web socket null");
	//                    //socket.Reconnect();
	//                }
	//            }
	//            //return packet
	//
	//            //          setSocketActive (true);
	//        }
	//    }

	public void login ()
	{
		JSONObject json = new JSONObject ();
		json.AddField ("login_method", SettingScript.login_method);

		if (SettingScript.login_method == (int)PROTOCOL.login_method.guest) {
			json.AddField ("ID", SettingScript.guest_info [0]);
			json.AddField ("PW", SettingScript.guest_info [1]);
		} else {
			if (Application.platform == RuntimePlatform.Android) {
				json.AddField ("login_info", SettingScript.login_info);
			} else if (Application.platform == RuntimePlatform.IPhonePlayer) {
				JSONObject loginInfo = new JSONObject (SettingScript.login_info);
				json.AddField ("login_info", loginInfo);
			}
		}

		json.AddField ("language", (int)SettingScript.language);
		socket.Emit ("login", SimpleAES.AES_socketEncrypt (json));
	}

	public void register (string nick)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("nickname", nick);
		json.AddField ("gender", (int)SettingScript.gender);
		socket.Emit ("register", SimpleAES.AES_socketEncrypt (json));
	}

	public void getUserList ()
	{
		socket.Emit ("userList");
	}

	public void getFriendList ()
	{
		socket.Emit ("friendList");
	}

	public void searchUser (string query)
	{
		query = query.Trim ();
		//if (query == "")
		//{
		//    return;
		//}
		query = query.Replace ("\\", "\\\\").Replace ("\"", "\\\"");
		JSONObject json = new JSONObject ();
		json.AddField ("query", query);
		socket.Emit ("searchUser", SimpleAES.AES_socketEncrypt (json));
	}

	public void sendIdle (bool idle)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("idle", idle);
		socket.Emit ("idle", SimpleAES.AES_socketEncrypt (json));
	}
	public void sendQuit ()
	{
		socket.Close ();
	}
	public void block (string nickname)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("nickname", nickname);
		socket.Emit ("block", SimpleAES.AES_socketEncrypt (json));
	}

	public void unblock (string nickname)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("nickname", nickname);
		socket.Emit ("unblock", SimpleAES.AES_socketEncrypt (json));
	}

	public void getProfile (string nickname)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("nickname", nickname);
		socket.Emit ("profile", SimpleAES.AES_socketEncrypt (json));
	}

	public void chat (string msg)
	{
		msg = msg.Trim ();
		if (msg.Length > 150) {
			msg = msg.Substring (0, 150);
		} else if (msg == "") {
			return;
		}
		JSONObject json = new JSONObject ();
		json.AddField ("message_type", (int)PROTOCOL.message_type.chat);
		msg = msg.Replace ("\\", "\\\\").Replace ("\"", "\\\"");
		json.AddField ("msg", msg);
		socket.Emit ("chat", SimpleAES.AES_socketEncrypt (json));
	}

	public void chat (string to, string msg)
	{
		msg = msg.Replace ("\\", "\\\\").Replace ("\"", "\\\"");
		if (msg.Trim () == "") {
			return;
		}

		JSONObject json = new JSONObject ();
		json.AddField ("message_type", (int)PROTOCOL.message_type.chat);
		json.AddField ("to", to);
		json.AddField ("msg", msg);
		socket.Emit ("chat", SimpleAES.AES_socketEncrypt (json));
	}

	public void friend (string nickname, string msg)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("message_type", (int)PROTOCOL.message_type.friend);
		json.AddField ("to", nickname);
		json.AddField ("msg", msg);
		socket.Emit ("chat", SimpleAES.AES_socketEncrypt (json));
	}

	public void move (Vector2 pos)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("pos_x", pos.x);
		json.AddField ("pos_y", pos.y);
		socket.Emit ("move", SimpleAES.AES_socketEncrypt (json));
	}

	public void goTo (string wh)
	{
		socket.Emit (wh);
	}

	public void visit (string nickname, string msg)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("to", nickname);
		json.AddField ("msg", msg);
		socket.Emit ("visit", SimpleAES.AES_socketEncrypt (json));
	}

	public void visitAccept (string nickname, Vector2 pos)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("to", nickname);
		json.AddField ("msg", "accept");
		json.AddField ("pos_x", pos.x);
		json.AddField ("pos_y", pos.y);
		socket.Emit ("visit", SimpleAES.AES_socketEncrypt (json));
	}

	public void getFurnitures ()
	{
		socket.Emit ("getFurnitures");
	}

	public void addFurniture (int type, int num)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("furniture_type", type);
		json.AddField ("furniture_num", num);
		socket.Emit ("addFurniture", SimpleAES.AES_socketEncrypt (json));
	}

	public void setFurnitures (JSONObject currentChData)
	{
		JSONObject json = new JSONObject ();
		JSONObject changed = new JSONObject ();
		JSONObject oldChData = settingScript.getChData ();
		JSONObject row;
		int num = (int)currentChData ["userData"] ["floor"].n;
		if ((int)oldChData ["userData"] ["floor"].n != num) {
			row = new JSONObject ();
			row.AddField ("furniture_type", -1);
			row.AddField ("furniture_num", num);
			changed.Add (row);
		}
		num = (int)currentChData ["userData"] ["wall"].n;
		if ((int)oldChData ["userData"] ["wall"].n != num) {
			row = new JSONObject ();
			row.AddField ("furniture_type", -2);
			row.AddField ("furniture_num", num);
			changed.Add (row);
		}
		int i;
		for (i = 0; i < oldChData ["furnitureData"].Count; i++) {
			if (!oldChData ["furnitureData"] [i] ["furniture_loc"].str.Equals (currentChData ["furnitureData"] [i] ["furniture_loc"].str)) {
				changed.Add (currentChData ["furnitureData"] [i]);
			}
		}
		for (; i < currentChData ["furnitureData"].Count; i++) {
			changed.Add (currentChData ["furnitureData"] [i]);
		}

		json.AddField ("changed", changed);
		socket.Emit ("setFurnitures", SimpleAES.AES_socketEncrypt (json));
	}

	public void getClothes ()
	{
		socket.Emit ("getClothes");
	}
	public bool checkConnect ()
	{
		return socket.IsConnected;
	}

	public void addClothes (JSONObject toBuy)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("clothData", toBuy);
		socket.Emit ("addClothes", SimpleAES.AES_socketEncrypt (json));
	}

	public void setClothes (JSONObject currentUserData)
	{
		socket.Emit ("setClothes", SimpleAES.AES_socketEncrypt (currentUserData));
	}

	//	public void addCash(long cash){
	//		JSONObject json = new JSONObject ();
	//		json.AddField ("cash", cash+"");
	//		socket.Emit("addCash", SimpleAES.AES_socketEncrypt (json));
	//	}
	public void androidInapp (string receipt)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("receipt", SimpleAES.AES_encrypt (receipt, SimpleAES.myKey));
		socket.Emit ("androidInapp", json);
	}
	public void iosInapp (string receipt)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("receipt", new JSONObject (receipt));
		socket.Emit ("iosInapp", SimpleAES.AES_socketEncrypt (json));
	}

	public void randomCloth (int num)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("itemNum", num);
		socket.Emit ("randomCloth", SimpleAES.AES_socketEncrypt (json));
	}

	public void randomFurniture (int num)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("itemNum", num);
		socket.Emit ("randomFurniture", SimpleAES.AES_socketEncrypt (json));
	}

	public void setProfile (string profileMessage)
	{
		JSONObject json = new JSONObject ();
		profileMessage = profileMessage.Replace ("\\", "\\\\").Replace ("\"", "\\\"");
		json.AddField ("profile", profileMessage);
		socket.Emit ("setProfile", SimpleAES.AES_socketEncrypt (json));
	}

	public void fashionshow (string type)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", type);
		socket.Emit ("fashionshow", SimpleAES.AES_socketEncrypt (json));
	}

	public void fashionshowCancel (Vector2 pos)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "cancel");
		json.AddField ("pos_x", pos.x);
		json.AddField ("pos_y", pos.y);
		socket.Emit ("fashionshow", SimpleAES.AES_socketEncrypt (json));
	}

	public void fashionshowRate (string user, int score)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "score");
		json.AddField ("nickname", user);
		json.AddField ("score", score);
		socket.Emit ("fashionshow", SimpleAES.AES_socketEncrypt (json));
	}

	public void nickScoreList ()
	{
		socket.Emit ("nickScoreList");
	}

	public void getUserDatas (List<string> nicknames, string type)
	{
		JSONObject json = new JSONObject ();
		JSONObject _nicknames = new JSONObject ();
		foreach (string nickname in nicknames) {
			_nicknames.Add (nickname);
		}
		json.AddField ("nicknames", _nicknames);
		json.AddField ("type", type);

		StartCoroutine (post ("getUserDatas", json, (JSONObject data) => {
			settingScript.onGetUserDatas (data);
		}));
	}

	public void flower (int num)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("num", num);
		socket.Emit ("flower", SimpleAES.AES_socketEncrypt (json));
	}

	public void addSlot ()
	{
		socket.Emit ("addSlot");
	}

	public void getSlot ()
	{
		socket.Emit ("getSlot");
	}

	public void getSlot (string nickname)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("nickname", nickname);
		socket.Emit ("getSlot", SimpleAES.AES_socketEncrypt (json));
	}

	public void setSlot (int slotNum)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("slotNum", slotNum);
		socket.Emit ("setSlot", SimpleAES.AES_socketEncrypt (json));
	}

	public void fishing (string type)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("result", type);
		socket.Emit ("fishing", SimpleAES.AES_socketEncrypt (json));
	}

	public void getDiary (bool isDiary, string owner)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("isDiary", isDiary);
		json.AddField ("owner", owner);
		socket.Emit ("getDiary", SimpleAES.AES_socketEncrypt (json));
	}

	public void addDiary (string owner, string content, PROTOCOL.access_level accessLevel)
	{
		content = content.Replace ("\\", "\\\\").Replace ("\"", "\\\"");

		JSONObject json = new JSONObject ();
		JSONObject postData = new JSONObject ();
		postData.AddField ("owner", owner);
		postData.AddField ("content", content);
		postData.AddField ("access_level", (int)accessLevel);
		json.AddField ("postData", postData);
		socket.Emit ("addDiary", SimpleAES.AES_socketEncrypt (json));
	}

	public void addDiary (string owner, string title, string content, PROTOCOL.access_level accessLevel)
	{
		title = title.Replace ("\\", "\\\\").Replace ("\"", "\\\"");
		content = content.Replace ("\\", "\\\\").Replace ("\"", "\\\"");

		JSONObject json = new JSONObject ();
		JSONObject postData = new JSONObject ();
		postData.AddField ("owner", owner);
		postData.AddField ("title", title);
		postData.AddField ("content", content);
		postData.AddField ("access_level", (int)accessLevel);
		json.AddField ("postData", postData);

		socket.Emit ("addDiary", SimpleAES.AES_socketEncrypt (json));
	}

	public void setDiary (JSONObject postData)
	{
		JSONObject json = new JSONObject ();
		postData ["content"].str = postData ["content"].str.Replace ("\\", "\\\\").Replace ("\"", "\\\"");
		json.AddField ("postData", postData);
		socket.Emit ("setDiary", SimpleAES.AES_socketEncrypt (json));
	}

	public void deleteDiary (long _id)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("_id", _id);
		socket.Emit ("deleteDiary", SimpleAES.AES_socketEncrypt (json));
	}

	public void setReply (long _id, string content)
	{
		content = content.Replace ("\\", "\\\\").Replace ("\"", "\\\"");

		JSONObject json = new JSONObject ();
		json.AddField ("_id", _id);
		json.AddField ("content", content);
		socket.Emit ("setReply", SimpleAES.AES_socketEncrypt (json));
	}

	public void deleteReply (long _id)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("_id", _id);
		socket.Emit ("deleteReply", SimpleAES.AES_socketEncrypt (json));
	}

	public void hangmanEnter ()
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "enter");
		socket.Emit ("hangman", SimpleAES.AES_socketEncrypt (json));
	}

	public void hangmanAnswer (string letter)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "answer");
		json.AddField ("letter", letter);
		socket.Emit ("hangman", SimpleAES.AES_socketEncrypt (json));
	}

	public void fountain ()
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "rank");
		socket.Emit ("fountain", SimpleAES.AES_socketEncrypt (json));
	}

	public void fountain (long coin)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "coin");
		json.AddField ("coin", coin);
		socket.Emit ("fountain", SimpleAES.AES_socketEncrypt (json));
	}

	public void getAdopt (string nickname)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "get");
		json.AddField ("nickname", nickname);
		socket.Emit ("adopt", SimpleAES.AES_socketEncrypt (json));
	}

	public void addAdopt ()
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "add");
		socket.Emit ("adopt", SimpleAES.AES_socketEncrypt (json));
	}

	public void adopt (int adoptNum, string nickname)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "adopt");
		json.AddField ("adoptNum", adoptNum);
		json.AddField ("nickname", nickname);
		socket.Emit ("adopt", SimpleAES.AES_socketEncrypt (json));
	}

	public void deleteAdopt (int adoptNum)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "delete");
		json.AddField ("adoptNum", adoptNum);
		socket.Emit ("adopt", SimpleAES.AES_socketEncrypt (json));
	}

	public void raiseAdopt (int adoptNum, string status)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "raise");
		json.AddField ("adoptNum", adoptNum);
		json.AddField ("status", status);
		socket.Emit ("adopt", SimpleAES.AES_socketEncrypt (json));
	}

	public void running (string type)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", type);
		socket.Emit ("running", SimpleAES.AES_socketEncrypt (json));
	}

	public void runningBet (int num)
	{
		JSONObject json = new JSONObject ();
		json.AddField ("type", "bet");
		json.AddField ("adoptNum", num);
		socket.Emit ("running", SimpleAES.AES_socketEncrypt (json));
	}

	public void profile(string nickname){
		JSONObject json = new JSONObject ();
		json.AddField ("nickname", nickname);
		socket.Emit ("profile", SimpleAES.AES_socketEncrypt (json));

//		JSONObject data = new JSONObject();
//		data.AddField ("nickname", nickname);
//		StartCoroutine (post ("profile", data, (JSONObject json) => {
//			if (json ["result"].str == "fail") {
//				//Debug.Log (json ["error"].str);
//
//			} else if (json ["result"].str == "success"){
//				settingScript.onProfile (json);
//
//			}
//		}));
	}

	public void getItemPrice(JSONObject data){
		StartCoroutine(post("getItemPrice", data, (JSONObject json) => {
			if(json["result"].str == "fail"){
				//Debug.Log (json ["error"].str);
			}else if(json["result"].str == "success"){
                settingScript.onGetItemPrice (json);
				
			}
		}));
	}

	public void report(string contents, byte[] img){
		JSONObject data = new JSONObject ();
		data.AddField ("nickname", SettingScript.nick);
		contents = contents.Replace("\\","\\\\").Replace("\"","\\\"");
		data.AddField ("contents", contents);

		StartCoroutine (report (data, img, (JSONObject json) => {
			settingScript.onScreenshot(json);
		}));
	}

	IEnumerator report(JSONObject data, byte[] img, System.Action<JSONObject> action){
		string encData = SimpleAES.AES_encrypt (data.ToString(), SimpleAES.myKey);
		WWWForm form = new WWWForm ();
		form.AddField ("data", encData);
		form.AddBinaryData  ("scrs", img, "scrs.png", "image/*");

		UnityWebRequest wr = UnityWebRequest.Post (string.Format ("http://{0}:{1}/screenshot", SettingScript.ip, SettingScript.port), form);
		wr.timeout = 10;
		yield return wr.SendWebRequest();

		if(wr.isNetworkError || wr.isHttpError) {
            settingScript.setProgressBackActive(false);
            string errorMsg;
            if (wr.error.Equals("Request timeout"))
            {
                //Debug.Log ("time more than 10");
                errorMsg = LocalizationString.LOGOLOGIN_networktimeover;
            }
            else
            {
                errorMsg = LocalizationString.LOGOLOGIN_networkerror;
            }
            settingScript.openMessagePopup(errorMsg);
		} else {
			string result = wr.downloadHandler.text;
			JSONObject json = SimpleAES.AES_socketDecrypt (result);
			//Debug.Log ("result: " + json);

			action (json);
		}
	}

	IEnumerator post(string page, JSONObject data, System.Action<JSONObject> action){
		string encData = SimpleAES.AES_encrypt (data.ToString(), SimpleAES.myKey);
		WWWForm form = new WWWForm ();
		form.AddField ("data", encData);
		UnityWebRequest wr = UnityWebRequest.Post (string.Format ("http://{0}:{1}/"+page, SettingScript.ip, SettingScript.port), form);
		wr.timeout = 10;
		yield return wr.SendWebRequest();

		if(wr.isNetworkError || wr.isHttpError) {
            settingScript.setProgressBackActive(false);
            string errorMsg;
			if (wr.error.Equals ("Request timeout")) {
                //Debug.Log ("time more than 10");
                errorMsg = LocalizationString.LOGOLOGIN_networktimeover;
            } else {
                errorMsg = LocalizationString.LOGOLOGIN_networkerror;
			}
            settingScript.openMessagePopup(errorMsg);

		} else {
			string result = wr.downloadHandler.text;
			JSONObject json = SimpleAES.AES_socketDecrypt (result);
			//Debug.Log ("result: " + json);

			action (json);
		}
	}

    string replaceEnter(string input)
    {
        string result = "";
        try
        {
            result = Regex.Replace(input, "([^\\\\]|^)(\\\\n){1,}", m => {
                return m.Value.Replace("\\n", "\n");
            });
        }
        catch (Exception e)
        {
            Debug.Log(e.ToString());
        }
        return result;
    }
}
