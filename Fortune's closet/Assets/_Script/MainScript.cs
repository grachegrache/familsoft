using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class MainScript : MonoBehaviour {
	public GameObject furniturePref;
	
    public Image floorImage;
    public Image wallImage;
	public Transform touch_wall;
	public Transform touch_floor;
	public GameObject[] menuIcons;
	public GameObject furnitureEditButton;
	public GameObject homeButton;
	public GameObject furnitureEdit;
	public GameObject nickPopup;

	public GameObject itemPopup;

	SettingScript settingScript;
//	TouchScreenKeyboard keyboard;

    public Sprite[] floor;
    public Sprite[] wall;
    public Sprite[][] furnitures = new Sprite[SettingScript.furnitureType.Length][];

	JSONObject furnitureData;

	public GameObject WaitingBack;
	
	void Start () {
        loadFurnitures();

        settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
		settingScript.setSocketActive (true);
		SettingScript.socketScript.mainScript = this;
        settingScript.movable = touch_floor;
        settingScript.isSceneLoading = false;

		if (settingScript.data != null) {
			settingScript.createSelf (touch_floor);

			if (settingScript.data.HasField("furnitureData")) {
				int index;
				index = (int)settingScript.data["furnitureData"]["floor"].n;
				floorImage.sprite = floor[index];
				index = (int)settingScript.data["furnitureData"]["wall"].n;
				wallImage.sprite = wall[index];

				for (int i = 0; i < settingScript.data["furnitureData"]["furnitures"].Count; i++) {
					int type = (int)settingScript.data["furnitureData"]["furnitures"][i]["furniture_type"].n;
					int num = (int)settingScript.data["furnitureData"]["furnitures"][i]["furniture_num"].n;
					string[] pos
					= settingScript.data["furnitureData"]["furnitures"][i]["furniture_loc"].str.Split(',');

					addFurnitureInRoom(type, num, float.Parse(pos[0]), float.Parse(pos[1]));
				}
				
			}else if(settingScript.getChData() != null){
				initRoom(settingScript.getChData(), false);
			}

			if (settingScript.data["userData"].IsArray) {
				for (int i = 0; i < settingScript.data["userData"].Count; i++) {
					settingScript.createCharacter(settingScript.data["userData"][i], touch_floor);
				}
			}else{
				settingScript.createCharacter(settingScript.data["userData"], touch_floor);
			}
			
			if(settingScript.data.HasField("adoptData")){
				addAdoptCharacters (settingScript.data ["adoptData"]);
			}else if(settingScript.getChData() != null){
				addAdoptCharacters (settingScript.getChData () ["adoptData"]);
			}

			furnitureData = settingScript.data ["furnitureData"];
			settingScript.data = null;

			settingScript.setButtonsActive (true);
			settingScript.setCashActive (true);
			WaitingBack.SetActive (false);

		} else if (settingScript.getChData () != null) {
			initRoom (settingScript.getChData ());
			addAdoptCharacters (settingScript.getChData () ["adoptData"]);
			
		    if (SettingScript.isMasterLeave) {
				settingScript.openMessagePopup (LocalizationString.MAINGAME_MasterLeave);
				SettingScript.isMasterLeave = false;

			}

			settingScript.setProgressBackActive (false);
			settingScript.setButtonsActive (true);
			settingScript.setCashActive (true);
			WaitingBack.SetActive (false);
		} else {
			if (SettingScript.language == SystemLanguage.Korean) {
				WaitingBack.transform.GetChild(0).gameObject.SetActive (true);
			} else {
				WaitingBack.transform.GetChild(1).gameObject.SetActive (true);
			}
		}

		if (SettingScript.room != null) {
            if (!SettingScript.room.Equals(SettingScript.nick))
            {
                homeButton.SetActive(true);
                furnitureEditButton.SetActive(false);
            }
            
			settingScript.setChatingActive (true);
			
		} else {
			settingScript.setChatingActive (false);
		}

        //localizing
        nickPopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = LocalizationString.MAINGAME_NickPopupMessage;

		settingScript.playBGM (0);
	}

    void loadFurnitures(){
        Sprite[] allFurniture = Resources.LoadAll<Sprite>("furniture");
        List<Sprite> tmpList = new List<Sprite>();

        for (int j = 0; j < allFurniture.Length; j++) {
            if (allFurniture[j].name.Contains("floor")) {
                tmpList.Add(allFurniture[j]);
            }
        }
        floor = tmpList.ToArray();
        tmpList.Clear();


        for (int j = 0; j < allFurniture.Length; j++) {
            if (allFurniture[j].name.Contains("wall")) {
                tmpList.Add(allFurniture[j]);
            }
        }
        wall = tmpList.ToArray();
        tmpList.Clear();

        for (int i = 0; i < SettingScript.furnitureType.Length; i++) {
            for (int j = 0; j < allFurniture.Length; j++) {
                if (allFurniture[j].name.Contains(SettingScript.furnitureType[i])) {
                    tmpList.Add(allFurniture[j]);
                }
            }
            furnitures[i] = tmpList.ToArray();
            tmpList.Clear();
        }

    }

	Image addFurnitureInRoom(int type, int num, float x, float y){
		Transform parent;
        if (SettingScript.furnitureType[type].Equals("frame") || SettingScript.furnitureType[type].Equals("window")) {
            parent = touch_wall;
        } else {
            parent = touch_floor;
        }
		
		Image f = Instantiate (furniturePref, parent).GetComponent<Image> ();
		f.name = "@"+type + "_" + num;
		f.sprite = furnitures[type][num];
		f.SetNativeSize ();
		f.rectTransform.localPosition = new Vector2 (x, y);
        if (SettingScript.furnitureType[type] == "bed" || SettingScript.furnitureType[type] == "rug") {
           Vector2 p = f.rectTransform.pivot;
            p.y = 1f;
            f.rectTransform.pivot = p;
        }
		return f;
	}

    // set location of furniture
    bool setFurnitureInRoom(int type, int num, float x, float y){
        Transform parent;
        if (SettingScript.furnitureType[type].Equals("frame") || SettingScript.furnitureType[type].Equals("window")) {
            parent = touch_wall;
        } else {
            parent = touch_floor;
        }

        Transform f = parent.Find(type + "_" + num);
        if(f == null){
            return false;
        }

        RectTransform rectTransform = f.GetComponent<RectTransform>();
        rectTransform.anchoredPosition = new Vector2(x, y);
        return true;
    }

	void Update () {
//		if (keyboard != null && keyboard.active) {
//			#if UNITY_ANDROID
//			Debug.Log (settingScript.GetKeyboardSize());
//			#endif
//		}

	}

	void OnDestroy(){
		settingScript.movable = null;
		if (SettingScript.socketScript != null) {
			SettingScript.socketScript.mainScript = null;
		}
	}

    public void initRoom(JSONObject data) {
        initRoom(data, true);
    }

	public void initRoom(JSONObject data, bool isCreateSelf){
		int index;
		index = (int)data ["userData"] ["floor"].n;
		floorImage.sprite = floor [index];
		index = (int)data ["userData"] ["wall"].n;
		wallImage.sprite = wall [index];

		for (int i = 0; i < data ["furnitureData"].Count; i++) {
			int type = (int)data ["furnitureData"] [i] ["furniture_type"].n;
			int num = (int)data ["furnitureData"] [i] ["furniture_num"].n;
			string [] pos = data ["furnitureData"] [i] ["furniture_loc"].str.Split (',');

			addFurnitureInRoom (type, num, float.Parse (pos [0]), float.Parse (pos [1]));

		}

        if (isCreateSelf) {
            settingScript.createSelf(touch_floor);
        }
//		keyboard = TouchScreenKeyboard.Open ("");

	}
	
	public void addAdoptCharacters (JSONObject data)
	{
		RectTransform movable = touch_floor.GetComponent<RectTransform>();
        float maxX = movable.rect.width / 2 - 50f;
        float maxY = movable.rect.height / 2 - 30f;
        float minX = -movable.rect.width / 2 + 50f;
        float minY = -movable.rect.height / 2;

		foreach(JSONObject adoptRow in data.list){
			if(!adoptRow["adoptData"].IsNull){
				adoptRow["adoptData"].AddField("x", Random.Range(minX, maxX));
            	adoptRow["adoptData"].AddField("y", Random.Range(minY, maxY));
				settingScript.createDoll (adoptRow["adoptData"], touch_floor).setOnClickAction (() => {
					settingScript.adoptSlotClick (adoptRow);
				});
			}
		}
	}
	
	public void nickConfirmClick(){
		InputField input = nickPopup.GetComponentInChildren<InputField> ();
		if (input.text.Trim () == "") {
			settingScript.log (LocalizationString.LOGIN_NicknameEmpty);
		} else if (input.text.Contains ("@") || input.text.Contains(" ") || input.text.Contains("/")
			|| input.text.Contains("\\") || input.text.Contains("\"")) {
			settingScript.log (LocalizationString.LOGIN_InvalidNickname);
		} else {
			SettingScript.socketScript.register (input.text);
			settingScript.setProgressBackActive(true);
		}
		settingScript.playSound (0);
	}

	public void nickGenderClick(int gender){
		SettingScript.gender = (PROTOCOL.gender)gender;
		if (SettingScript.gender.Equals (PROTOCOL.gender.male)) {
			nickPopup.transform.GetChild (0).GetChild (4).GetComponent<Image> ().color = Color.white;
			nickPopup.transform.GetChild (0).GetChild (3).GetComponent<Image> ().color = Color.gray;
		} else {
			nickPopup.transform.GetChild (0).GetChild (4).GetComponent<Image> ().color = Color.gray;
			nickPopup.transform.GetChild (0).GetChild (3).GetComponent<Image> ().color = Color.white;
		}
		settingScript.playSound (0);
	}


	public void onMove(JSONObject data){
		string nickname = data ["nickname"].str;
		if (nickname == SettingScript.nick) {
			return;
		}
		Transform ch = touch_floor.Find (nickname);
		if (ch != null) {
			ch.GetComponent<CharacterScript>().setTargetPos (data ["pos_x"].f, data ["pos_y"].f);
		}
	}

	public void squareClick(){
		settingScript.openMessagePopup (LocalizationString.MAINGAME_GoingSquare, false,
			() => {
				SettingScript.socketScript.goTo ("square");
				settingScript.setProgressBackActive (true);
				settingScript.messagePopup.SetActive(false);
				settingScript.playSound(0);
			});
		settingScript.playSound (1);
	}

//	public void onSquare(JSONObject data){
//		if (data ["result"].str.Equals ("success")) {
//			SettingScript.room = data ["room"].str;
//			if (data.HasField ("userData"))
//				settingScript.data = data;
//            settingScript.isSceneLoading = true;
//			UnityEngine.SceneManagement.SceneManager.LoadScene ("SquareScene");
////		} else if (data ["result"].str.Equals ("wait")) {
////			settingScript.log ("wait");
	//	} else if (data ["result"].str.Equals ("fail")) {
	//		settingScript.log ("fail");
	//	} else {
			
	//	}
	//	settingScript.setProgressBackActive (false);
	//}

	public void homeClick(){
		settingScript.openMessagePopup (LocalizationString.MAINGAME_GoingHome, false,
			() => {
				SettingScript.socketScript.goTo ("home");
				settingScript.setProgressBackActive (true);
				settingScript.messagePopup.SetActive(false);
				settingScript.playSound(0);
			});
		settingScript.playSound (1);
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
            if(data.HasField("isSolo")){
                SettingScript.room = null;
                settingScript.setChatingActive(false);

            }

			Transform t = touch_floor.Find(data["nickname"].str);
			if(t != null)
				Destroy(t.gameObject);
		}
	}

	public void onGetFurnitures(JSONObject data){
        settingScript.setProgressBackActive(false);

		if (data ["result"].str.Equals ("success")) {
			settingScript.currentChData =  settingScript.getChData ().Copy();
			furnitureData = data ["furnitureData"];

			JSONObject row = new JSONObject ();
			row.AddField ("furniture_type", 0);
			row.AddField ("furniture_num", 0);
			furnitureData ["floorNwall"].Add (row);
			row = new JSONObject ();
			row.AddField ("furniture_type", 1);
			row.AddField ("furniture_num", 0);
			furnitureData ["floorNwall"].Add (row);

			foreach(Transform child in touch_wall){
				child.GetComponent<FurnitureScript> ().setActiveTrigger (true);
			}
			foreach (Transform child in touch_floor) {
				FurnitureScript fs = child.GetComponent<FurnitureScript> ();
                if (fs != null) {
                    fs.setActiveTrigger(true);
                }else{
                    CharacterScript ch = child.GetComponent<CharacterScript>();
                    if(ch != null){
                        ch.gameObject.SetActive(false);
                    }
                }
			}

			furnitureEditCategoryClick (-1);
			furnitureEdit.SetActive (true);
			foreach (GameObject icon in menuIcons) {
				icon.SetActive (false);
			}
			settingScript.setButtonsActive (false);
            settingScript.setCashActive(false);
            settingScript.setChatingActive(false);
		} else if (data ["result"].str.Equals ("fail")) {
		} else {
		}
		
	}

	public void onAddFurniture(JSONObject data){
        settingScript.setProgressBackActive(false);

		if (data ["result"].str.Equals ("success")) {
            string nickname = data["nickname"].str;
			Transform contents = furnitureEdit.transform.GetChild (1).GetChild (0).GetChild (0);
			int type = (int)data ["furniture_type"].n;
			int num = (int)data ["furniture_num"].n;

			JSONObject newData = new JSONObject ();
			newData.AddField ("nickname", nickname);
			newData.AddField ("furniture_num", num);
			if (type < 0) {
				if (type == -1) {
					newData.AddField ("furniture_type", 0);
				} else if (type == -2) {
					newData.AddField ("furniture_type", 1);
				}
				furnitureData ["floorNwall"].Add (newData);
			} else {
				newData.AddField ("furniture_type", type);
				newData.AddField ("furniture_loc", (string)null);
				furnitureData ["house"].Add (newData);
			}

			if (nickname == SettingScript.nick) {
                Transform furnitureMem = contents.Find(type + "_" + num);
                if (furnitureMem != null)
                {
                    Button button = furnitureMem.GetComponent<Button>();
                    button.image.color = button.colors.normalColor;
                    button.onClick.RemoveAllListeners();
                    button.onClick.AddListener(() => {
                        furnitureEditItemClick(type, num, true);

                    });
                }

                settingScript.getChData()["userData"]["cash"].str = data["cash"].str;
                settingScript.cash.transform.GetComponentInChildren<Text>().text = data["cash"].str;
				settingScript.openMessagePopup (LocalizationString.MAINGAME_SuccessToBuy);
			}

		} else if (data ["result"].str.Equals ("fail")) {
		} else if (data ["result"].str.Equals ("have_item")) {
            settingScript.log(LocalizationString.SHOP_HaveItemMessage);
            
		} else if (data ["result"].str.Equals ("not_enough_cash")) {
            settingScript.openMessagePopup(LocalizationString.MAINGAME_NotEnoughGem);

		} else {
		}
		
	}

	public void onSetFurnitures(JSONObject data){
        settingScript.setProgressBackActive(false);

		if (data ["result"].str.Equals ("success")) {
            if (data["nickname"].str == SettingScript.nick) {
                //Debug.Log("master");
                JSONObject chData = settingScript.getChData();
                for (int i = 0; i < data["changed"].Count; i++) {
                    int type = (int)data["changed"][i]["furniture_type"].n;
                    int num = (int)data["changed"][i]["furniture_num"].n;
                    if (type == -1) {
                        chData["userData"].SetField("floor", num);
                    } else if (type == -2) {
                        chData["userData"].SetField("wall", num);
                    } else {
                        JSONObject row = getFurnitureRow(type, num, chData["furnitureData"]);
                        if (row != null) {
                            row["furniture_loc"].str = data["changed"][i]["furniture_loc"].str;
                        } else {
                            chData["furnitureData"].Add(data["changed"][i]);
                        }
                    }
                }
                foreach (Transform child in touch_wall) {
                    child.GetComponent<FurnitureScript>().setActiveTrigger(false);
                }
                foreach (Transform child in touch_floor) {
                    FurnitureScript fs = child.GetComponent<FurnitureScript>();
                    if (fs != null) {
                        fs.setActiveTrigger(false);
                    }else{
                        CharacterScript ch = child.GetComponent<CharacterScript>();
                        if(ch != null){
                            ch.gameObject.SetActive(true);
                        }
                    }
                }
                furnitureEdit.SetActive(false);

                foreach (GameObject icon in menuIcons) {
                    icon.SetActive(true);
                }
                settingScript.setButtonsActive(true);
                settingScript.setCashActive(true);
				settingScript.setChatingActive(SettingScript.room==null?false:true);
            } else if (data["nickname"].str == SettingScript.room) {
                //Debug.Log("guest");
                for (int i = 0; i < data["changed"].Count; i++) {
                    int type = (int)data["changed"][i]["furniture_type"].n;
                    int num = (int)data["changed"][i]["furniture_num"].n;
                    if (type == -1) {
                        furnitureData.SetField("floor", num);
                        floorImage.sprite = floor[num];
                    } else if (type == -2) {
                        furnitureData.SetField("wall", num);
                        wallImage.sprite = wall[num];
                    } else {
                        JSONObject row = getFurnitureRow(type, num, furnitureData["furnitures"]);
                        string[] pos = data["changed"][i]["furniture_loc"].str.Split(',');
                        if (row != null) {
                            row["furniture_loc"].str = data["changed"][i]["furniture_loc"].str;
                            setFurnitureInRoom(type, num, float.Parse(pos[0]), float.Parse(pos[1]));
                        } else {
                            furnitureData["furnitures"].Add(data["changed"][i]);
                            addFurnitureInRoom(type, num, float.Parse(pos[0]), float.Parse(pos[1]));
                        }
                    }
                }
            }
		} else if (data ["result"].str.Equals ("fail")) {
            
		}
	}

	public void furnitureEditClick(){
		SettingScript.socketScript.getFurnitures ();
		settingScript.setProgressBackActive (true);
		settingScript.playSound (1);
	}

	public void furnitureEditConfirmClick(){
		SettingScript.socketScript.setFurnitures (settingScript.currentChData);
		settingScript.setProgressBackActive (true);
		settingScript.playSound (0);
	}

	public void furnitureEditCancelClick(){
        foreach(Transform t in touch_floor){
            CharacterScript ch = t.GetComponent<CharacterScript>();
            if(ch != null){
                t.gameObject.SetActive(true);
            }else{
                Destroy(t.gameObject);
            }
        }
		settingScript.destroyChilds (touch_wall);

		initRoom (settingScript.getChData (), false);

		furnitureEdit.SetActive(false);
		foreach (GameObject icon in menuIcons) {
			icon.SetActive (true);
		}
		settingScript.setButtonsActive (true);
        settingScript.setCashActive(true);
		settingScript.setChatingActive(SettingScript.room==null?false:true);
		settingScript.playSound (2);
	}

	public void furnitureEditCategoryClick(int index){
		Transform contents = furnitureEdit.transform.GetChild(1).GetChild(0).GetChild(0);
		settingScript.destroyChilds (contents);
		int[] types = null;
		Dictionary<int, List<int>> own_items = new Dictionary<int, List<int>> ();

		switch (index) {
		case -1:
			types = new int[]{index};
			break;
		case -2:
			types = new int[]{index};
			break;
		case 0://0, 1(bed, chair)
			types = new int[]{ 0, 1 };
			break;
		case 2://2, 4, 5(etc, plant, rug)
			types = new int[]{ 2, 4, 5 };
			break;
		case 3://3, 7(frame, window)
			types = new int[]{ 3, 7 };
			break;
		default:
			types = new int[]{index};
			break;
		}

		foreach (int type in types) {
			if (type == -1) {
				own_items.Add (type, getFurnitureNumList (0, furnitureData ["floorNwall"]));
			} else if (type == -2) {
				own_items.Add (type, getFurnitureNumList (1, furnitureData ["floorNwall"]));
			} else {
				own_items.Add(type, getFurnitureNumList (type, furnitureData ["house"]));
			}
		}

		addFurnitureMembers (types, own_items, contents);
		settingScript.playSound (0);
	}

	List<int> getFurnitureNumList(int type, JSONObject array){
		List<int> list = new List<int> ();
		for(int i=0; i<array.Count; i++) {
			if (type == (int)array [i] ["furniture_type"].n) {
				list.Add ((int)array [i] ["furniture_num"].n);
			}
		}

		return list;
	}

	List<int> getFurnitureNumList(int type, JSONObject array, bool isCurrentChData){
		if (isCurrentChData) {
			List<int> list = new List<int> ();
			for (int i = 0; i < array.Count; i++) {
				if (type == (int)array [i] ["furniture_type"].n && array[i]["furniture_loc"].str != null) {
					list.Add ((int)array [i] ["furniture_num"].n);
				}
			}

			return list;
		} else {
			return getFurnitureNumList (type, array);
		}
	}

	JSONObject getFurnitureRow(int type, int num, JSONObject array){
		for (int i = 0; i < array.Count; i++) {
			if (type == (int)array[i] ["furniture_type"].n && num == (int)array[i] ["furniture_num"].n) {
				return array [i];
			}
		}
		return null;
	}

    // delete furniture from current furniture data
	public void setFurnitureLoc(int type, int num){
		JSONObject data = getFurnitureRow (type, num, settingScript.currentChData ["furnitureData"]);

		if (getFurnitureRow (type, num, settingScript.getChData () ["furnitureData"]) == null) {
			settingScript.currentChData ["furnitureData"].list.Remove (data);
		} else {
			data ["furniture_loc"].str = null;
		}
	}

    // set furniture location data
	public void setFurnitureLoc(int type, int num, Vector2 pos){
		JSONObject data = getFurnitureRow (type, num, settingScript.currentChData ["furnitureData"]);
		data ["furniture_loc"].str = pos.x + "," + pos.y;
	}

	void addFurnitureMembers(int[] types, Dictionary<int, List<int>> own_items, Transform parent){
		Sprite[] imageList = null;

		foreach (int type in types) {
			if (type == -1) {
				imageList = settingScript.floor_thumb;
			} else if (type == -2) {
				imageList = settingScript.wall_thumb;
			} else {
				imageList = settingScript.furniture_thumb [type];
			}

			for (int i = 0; i < imageList.Length; i++) {
				int index = i;
				Transform furnitureMem = GameObject.Instantiate (settingScript.furnitureMemberPref, parent).transform;
				furnitureMem.name = type + "_" + index;
				furnitureMem.GetComponent<Image> ().sprite = imageList [index];
				Button button = furnitureMem.GetComponent<Button> ();
				bool isHave = true;
				if (!own_items[type].Contains (index)) {
					isHave = false;
					button.image.color = button.colors.disabledColor;
				}
				button.onClick.AddListener (() => {
					furnitureEditItemClick (type, index, isHave);
				});
			}
		}
	}

	void furnitureEditItemClick(int type, int index, bool isHave){
		bool isCurrentSet = false;
		Sprite image;
		if (type == -1) {
			//floor
			image = floor[index];
			if (index == (int)settingScript.currentChData["userData"] ["floor"].n) {
				isCurrentSet = true;
			}
		} else if (type == -2) {
			//wall
			image = wall[index];
			if (index == (int)settingScript.currentChData["userData"] ["wall"].n) {
				isCurrentSet = true;
			}
		} else {
			image = furnitures [type] [index];
			if (getFurnitureNumList (type, settingScript.currentChData["furnitureData"], true).Contains (index)) {
				isCurrentSet = true;
			}
		}

		if (isHave) {
			if (!isCurrentSet) {
				itemPopup.transform.GetChild (0).GetChild (0).GetComponent<Image> ().sprite = image;
				Button yes = itemPopup.transform.GetChild (0).GetChild (2).GetComponent<Button> ();
				yes.onClick.RemoveAllListeners ();
				itemPopup.transform.GetChild (0).GetChild (1).GetComponent<Text> ().text = LocalizationString.MAINGAME_PutFurnitureMessage;
				yes.onClick.AddListener (() => {
					if (type == -1) {
						floorImage.sprite = floor [index];
						settingScript.currentChData ["userData"].SetField ("floor", index);
					} else if (type == -2) {
						wallImage.sprite = wall [index];
						settingScript.currentChData ["userData"].SetField ("wall", index);
					} else {
						addFurnitureInRoom (type, index, 0, 0).raycastTarget = true;

						JSONObject row = getFurnitureRow (type, index, settingScript.currentChData ["furnitureData"]);
						if (row == null) {
							row = new JSONObject ();
							row.AddField ("nickname", SettingScript.nick);
							row.AddField ("furniture_type", type);
							row.AddField ("furniture_num", index);
							row.AddField ("furniture_loc", "0,0");
							settingScript.currentChData ["furnitureData"].Add (row);
						} else {
							row ["furniture_loc"].str = "0,0";
						}
					}

					itemPopup.SetActive (false);
					settingScript.playSound (0);
				});
				itemPopup.SetActive (true);
				settingScript.playSound (1);
			} else {
				settingScript.playSound (0);
			}
		} else {
			JSONObject items = new JSONObject ();
			JSONObject row = new JSONObject ();
			int table_num, item_type = -1;
			if (type < 0) {
				table_num = (int)PROTOCOL.table_num.floorNwall;
				if (type == -1) {
					item_type = 0;
				} else if (type == -2) {
					item_type = 1;
				}
			} else {
				table_num = (int)PROTOCOL.table_num.house;
				item_type = type;
			}
			row.AddField ("table_num", table_num);
			row.AddField ("type", item_type);
			row.AddField ("num", index);
			items.Add (row);
			SettingScript.socketScript.getItemPrice (items);
			settingScript.playSound (1);
		}
	}
	
//	public void shopClick(){
//        settingScript.shopPopup.SetActive(true);
//
//	}
}
