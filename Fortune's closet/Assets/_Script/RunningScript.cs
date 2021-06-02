using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Data;

public class RunningScript : MonoBehaviour {
	public GameObject settingPref;
	public GameObject runningStatePref;
	public GameObject rankMemberPref;
	SettingScript settingScript;

	public CameraScript cameraScript;
	public Transform bench;
	public Transform track;
	public Text leftTime;
	public GameObject cheerButton;
	public GameObject cameraMButton;
	public GameObject exitButton;
    public GameObject bettingPopup;
	public GameObject bettingCharacterPopup;
    public GameObject resultPopup;
	public GameObject rulePopup;
    
    float nextTick;
	Track trackInfo;
	int [] betData;
	int betNum;
    
    void Awake(){
		//if (SettingScript.isLoaded == false)
        //{
        //    GameObject settingInstance = Instantiate(settingPref);
        //    settingInstance.name = "SettingManager";
        //    settingScript = settingInstance.GetComponent<SettingScript>();
        //    settingScript.init();
        //    DontDestroyOnLoad(settingInstance);
        //}
        settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
		SettingScript.socketScript.runningScript = this;
		settingScript.movable = bench;
        settingScript.isSceneLoading = false;
		settingScript.setButtonsActive (false);
        settingScript.setChatingActive(true);
        settingScript.setCashShopActive(false);

		if (settingScript.data == null) {
			settingScript.openMessagePopup ("data null error", true, () => {
				SettingScript.isLoaded = false;
				Destroy (settingScript.gameObject);
				UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
			});
            return;
		}

		//create users
		Vector2 pos = new Vector2 (0, 270f - 110f * settingScript.data ["seatNum"].n);
        settingScript.createSelf(bench, pos).setImageSide();

        if(settingScript.data.HasField("userDatas")){
        	foreach(JSONObject user in settingScript.data["userDatas"].list){
				user.SetField ("x", 0);
				user.SetField ("y", 270f - 110f * user ["seatNum"].n);
        		settingScript.createCharacter(user, bench).setImageSide();
        	}
			settingScript.setSiblings (bench);
        }

		betData = new int [6];
		betNum = -1;
		
		//init track
		trackInfo = new Track (this, settingScript.data["adoptData"]);
		
		if(settingScript.data.HasField("leftTime")){
			trackInfo.second = (int)settingScript.data["leftTime"].n;
			leftTime.text = trackInfo.second + "";

			setBettingPopup (settingScript.data);
			bettingPopup.SetActive (true);
		}else if(settingScript.data.HasField("second")){
			trackInfo.second = (int)settingScript.data["second"].f;
			nextTick = settingScript.data ["second"].f - trackInfo.second;
			leftTime.text = trackInfo.second + "";

			trackInfo.run (settingScript.data["goal"].n);
			
			for (int i = 0; i < settingScript.data ["betData"].Count; i++){
				betData [i] = (int)settingScript.data ["betData"] [i].n;
	        }
		}

		settingScript.data = null;

		//localize
		bettingPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Betting;
        resultPopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = LocalizationString.Result;
		rulePopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Rule;
		rulePopup.transform.GetChild (0).GetChild (1).GetComponent<Text> ().text = LocalizationString.MINIGAME_RunningGameRuleMessage;
		settingScript.playBGM (2);
		
	}
	
    void OnDestroy(){
		settingScript.movable = null;
        if (SettingScript.socketScript != null) {
            SettingScript.socketScript.runningScript = null;
        }
    }

	void Update () {
		if(trackInfo.isGame){
			nextTick += Time.deltaTime;
			if(nextTick >= 1f){
				//run
				if(cameraMButton.activeSelf){
					if(betNum < 0 || trackInfo.adoptCharacters [betNum] == null){
						cameraScript.setCharacter (trackInfo.get1st ());
					}else{
						cameraScript.setCharacter (trackInfo.adoptCharacters [betNum]);
					}
				}
				
				for (int i = 0; i < trackInfo.adoptCharacters.Count; i++){
					DollScript doll = trackInfo.adoptCharacters [i];
					if(doll != null){
						if(doll.speedList.Count <= trackInfo.second){
							SettingScript.socketScript.running ("sync");
							settingScript.setProgressBackActive (true);
							cheerButton.transform.GetChild (0).GetComponent<Image> ().fillAmount = 0;
							trackInfo.isGame = false;
							return;
						}
						
						trackInfo.setStatus (doll);
						
						doll.speed = doll.speedList [trackInfo.second];
						if(doll.boost > 0){
							doll.boost -= 1;
							float amount = doll.speed * 2f;
							
							if (doll.stamina > 0) {
								if(doll.stamina < amount){
									amount = doll.stamina;
									cheerButton.SetActive (false);
								}
								doll.stamina -= amount;
								doll.speed = amount;
								
							}else{
								doll.boost = 0;
								if (!trackInfo.isCanCheer){
									cheerButton.transform.GetChild(0).GetComponent<Image>().fillAmount = 0;
								}
							}
						}
						
						if(doll.progress+doll.speed >= trackInfo.goal){
							doll.addPath (trackInfo.getPath (doll.progress, trackInfo.goal - doll.progress));
							doll.progress = trackInfo.goal;
							doll.setOnStopAction (() => {
								Debug.Log (doll.name);
								doll.speed = 100f;
								doll.setTargetPos (100f, -300f);
								foreach(RectTransform body in doll.transform.Find("body")){
									LeanTween.alpha (body, 0, 1f);
								}
								GameObject dollGameObject = doll.gameObject;
								LeanTween.delayedCall (1f, () => {
									if(dollGameObject != null)
										Destroy (dollGameObject);
								});
							});
							trackInfo.adoptCharacters [i] = null;
							
							if(betNum == i){
								if (!trackInfo.isCanCheer){
									cheerButton.transform.GetChild(0).GetComponent<Image>().fillAmount = 0;
								}
								cheerButton.SetActive (false);
							}

							trackInfo.runner -= 1;
						}else{
							doll.addPath (trackInfo.getPath(doll.progress, doll.speed));
							doll.progress += doll.speed;
						}
					}
				}
				
				if(trackInfo.runner <= 0){
					trackInfo.isGame = false;
					trackInfo.adoptCharacters.Clear ();
					cheerButton.SetActive (false);
					return;
				}
				
				leftTime.text = trackInfo.second + "";
				nextTick -= 1f;
				trackInfo.second += 1;
			}
		}else{
			if(trackInfo.second > 0){
				nextTick += Time.deltaTime;
				if(nextTick >= 1f){
					nextTick -= 1f;
					trackInfo.second -= 1;
				}
				leftTime.text = trackInfo.second + "";
			}
		}
		
	}
	
	void OnApplicationPause (bool pause)
	{
//		if (pause) {
//			//idle packet
//			if (socketScript != null) {
//				socketScript.sendIdle(pause);
//			}
//		} else {
//			//return packet
//			if (socketScript != null) {
//				socketScript.sendIdle(pause);
//			}
//		}
		if(!pause){
			SettingScript.socketScript.running ("sync");
			settingScript.setProgressBackActive (true);
		}
	}
	
	public void onRunning(JSONObject data){
		settingScript.setProgressBackActive (false);
		if(data["result"].str == "success"){
			if(data["type"].str == "bet"){
				//adoptNum
				int adoptNum = (int)data ["adoptNum"].n;
				
				Transform slot = bettingPopup.transform.GetChild (0).Find ("Slot" + adoptNum);
				slot.GetComponent<Image> ().color = Color.cyan;
				
				if(betNum != adoptNum){
					slot = bettingPopup.transform.GetChild (0).Find ("Slot" + betNum);
					if(slot != null){
						slot.GetComponent<Image> ().color = Color.white;
					}
					betNum = adoptNum;
				}

				bettingCharacterPopup.SetActive (false);
				
				if(cameraMButton.activeSelf){
					cameraScript.setCharacter (trackInfo.adoptCharacters [adoptNum]);
				}
			}else if(data["type"].str == "cheer"){
				//second, adoptNum
				int adoptNum = (int)data ["adoptNum"].n;
				DollScript doll = trackInfo.adoptCharacters [adoptNum];
				
				if(doll != null && doll.boost > 0){
					trackInfo.boost (adoptNum, 3, data ["nickname"].str == SettingScript.nick);
				}else{
					int speedIndex = (int)data ["second"].n;
					int second = trackInfo.second;
					int boost = speedIndex + 3 - second;
					if(boost > 0 && boost < 4){
						trackInfo.boost (adoptNum, boost, data["nickname"].str == SettingScript.nick);
					}else{
						second += boost;
					}
	
					if(doll != null){
						float distance = 0;
						for (; speedIndex < second; speedIndex++){
							distance += doll.speedList [speedIndex];
						}
						if(doll.progress+distance > trackInfo.goal){
							distance = trackInfo.goal - doll.progress;
						}
						
						if(distance > 0){
							doll.addPath (trackInfo.getPath (doll.progress, distance));
							doll.setCurrentSpeed((distance+(trackInfo.getPos (doll.progress) - doll.getCurrentPos ()).magnitude) / (1f - nextTick));
							doll.progress += distance;
							
							Debug.Log (doll.name+"/progress:"+doll.progress+"/distance:"+distance+"/speed:"+doll.speed+"/second:"+second+"/boost:"+boost);
						}
					}
				}
				
			}else if(data["type"].str == "sync"){
				if(data.HasField("leftTime")){
					trackInfo.second = (int)data ["leftTime"].f;
					nextTick = 1f-(data ["leftTime"].f - trackInfo.second);
					leftTime.text = trackInfo.second + "";
				}else{
					trackInfo.second = (int)data ["second"].f;
					nextTick = data ["second"].f - trackInfo.second;
					leftTime.text = trackInfo.second + "";

					trackInfo.sync (data ["adoptData"]);
				}
			}
		}else if(data["result"].str == "enter"){
			data["userData"].SetField ("x", 0);
			data["userData"].SetField ("y", 270f - 110f * data ["seatNum"].n);
    		settingScript.createCharacter(data["userData"], bench).setImageSide();
			settingScript.setSiblings (bench);
    		
		}else if(data["result"].str == "start"){
			trackInfo.second = 0;
			nextTick = 1f;
			leftTime.text = trackInfo.second + "";
			trackInfo.run (data["goal"].n);
			
		}else if(data["result"].str == "end"){
			//result
			Transform rankContent = resultPopup.transform.GetChild(0).GetChild (1).GetChild (0).GetChild (0);
			settingScript.destroyChilds (rankContent);

			data ["rankData"].list.Sort (new RankComparer ());
			int rank = 0, second = -1;
			float progress = -1f;
			for (int i = 0; i < data ["rankData"].Count; i++) {
				if(second != (int)data["rankData"][i]["second"].n
					|| progress.CompareTo(data["rankData"][i]["progress"].f) != 0){
					second = (int)data ["rankData"] [i] ["second"].n;
					progress = (int)data ["rankData"] [i] ["progress"].f;
					rank += 1;
				}
			
				Transform rankMem = Instantiate (rankMemberPref, rankContent).transform;
				rankMem.GetChild (0).GetComponent<Text> ().text = rank + "";
				settingScript.setProfileCharacter (data ["rankData"] [i]["adoptData"], rankMem.GetChild (1).GetChild (0));
				rankMem.GetChild (2).GetComponent<Text> ().text = (int)data ["rankData"] [i] ["second"].n + LocalizationString.Sec;
				rankMem.GetChild (3).GetComponent<Text> ().text = data ["rankData"] [i] ["adoptData"] ["nickname"].str;

				if (rank == 1 && betNum == (int)data ["rankData"] [i] ["betNum"].n){
					long cashValue;
	                if(long.TryParse(settingScript.getChData()["userData"]["cash"].str, out cashValue)){
	                    cashValue += (long)betData [betNum];
	                    settingScript.getChData()["userData"]["cash"].str = cashValue + "";
	                    settingScript.cash.transform.GetComponentInChildren<Text>().text = cashValue + "";
	                }
					
					settingScript.log (string.Format (LocalizationString.MINIGAME_scoreMessage, betData [betNum]));
				}
			}
			resultPopup.SetActive (true);
			
			Transform slot = bettingPopup.transform.GetChild (0).Find ("Slot" + betNum);
			if(slot != null){
				slot.GetComponent<Image> ().color = Color.white;
				betNum = -1;
			}
			setBettingPopup (data);
			trackInfo.reset (data ["adoptData"]);
			
			trackInfo.second = 30;
			nextTick = 0;
			leftTime.text = trackInfo.second + "";
			
		}else if(data["result"].str == "speedList"){
			int speedIndex = 0;
			for (int i = 0; i < trackInfo.adoptCharacters.Count; i++){
				if(trackInfo.adoptCharacters[i] != null){
					foreach (JSONObject speedMember in data["speedData"][speedIndex++].list){
						trackInfo.adoptCharacters [i].speedList.Add (speedMember.f);
					}
				}
			}
		}else if(data["result"].str == "leave"){
            Transform t = bench.Find(data["nickname"].str);
            if (t != null)
                Destroy(t.gameObject);
        }else if(data["result"].str == "fail"){
		}
	}
	
	public void onHome(JSONObject data){
		Debug.Log (data.ToString());
		if (data.HasField ("result")) {
			if (data ["result"].str.Equals ("success")) {
				SettingScript.room = null;
                settingScript.data = null;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
				settingScript.setButtonsActive (true);
                settingScript.setCashShopActive(true);
			} else {

			}
		} else {
			Transform t = bench.Find(data["nickname"].str);
			if(t != null)
				Destroy(t.gameObject);
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
	
	void setBettingPopup(JSONObject data){
		for (int i = 0; i < data["adoptData"].Count; i++){
			JSONObject adoptMember = data["adoptData"] [i];
			Transform slotTrs = bettingPopup.transform.GetChild(0).Find("Slot" + i);
        	CharacterScript character = slotTrs.GetChild(0).GetChild(0).GetComponent<CharacterScript>();
        	settingScript.setCharacter(adoptMember["adoptData"], character);
			character.setNickname (adoptMember["adoptData"] ["nickname"].str);
			
			Button slotButton = slotTrs.GetComponent<Button>();
	        slotButton.onClick.RemoveAllListeners();
			int adoptNum = i;
	        slotButton.onClick.AddListener(() => {
	            bettingSlotClick(adoptMember, adoptNum);
	        });

			betData[i] = (int)data ["betData"] [i].n;
			slotTrs.GetChild (0).GetChild (1).GetComponent<Text> ().text = betData[i] + "";
		}
	}
	
	void bettingSlotClick(JSONObject data, int adoptNum){
		Transform slot = bettingCharacterPopup.transform.GetChild (0);
		slot.GetChild (0).GetComponent<Text> ().text = data ["adoptData"] ["nickname"].str;
		settingScript.setCharacter (data ["adoptData"], slot.GetChild (2).GetChild (0).GetComponent<CharacterScript> ());

		int stamina = (int)data ["stamina"].n;
		int speed = (int)data ["speed"].n;
		Transform status = slot.GetChild (3);
		status.GetChild (0).GetChild (1).GetComponent<Text> ().text = stamina + "";
		status.GetChild (1).GetChild (1).GetComponent<Text> ().text = speed + "";
		if (data.HasField ("win_count") && data.HasField ("game_count")){
			status.GetChild (2).GetChild (1).GetComponent<Text> ().text = (long)data ["win_count"].n + "";
			status.GetChild (2).GetChild (3).GetComponent<Text> ().text = (long)data ["game_count"].n + "";
			status.GetChild (2).gameObject.SetActive (true);
		}else{
			status.GetChild (2).gameObject.SetActive (false);
		}
		if(data["adoptData"].HasField("adopt_date")){
			status.GetChild (3).GetComponent<Text> ().text = DateTime.Parse(data["adoptData"]["adopt_date"].str).ToLocalTime().ToShortDateString();
			status.GetChild (3).gameObject.SetActive (true);
		}else{
			status.GetChild (3).gameObject.SetActive (false);
		}
		
		Button betting = slot.GetChild (4).GetComponent<Button> ();
		betting.onClick.RemoveAllListeners ();
		betting.onClick.AddListener (() => {
			settingScript.openMessagePopup (LocalizationString.MINIGAME_RunningBettingMessage, false, () => {
				SettingScript.socketScript.runningBet (adoptNum);
				settingScript.setProgressBackActive (true);
				settingScript.playSound (0);
				settingScript.messagePopup.SetActive (false);
			});
			settingScript.playSound (1);
		});
		
		bettingCharacterPopup.SetActive (true);
		settingScript.playSound (1);
	}
	
	public void bettingCharacterPopupBackClick(){
		bettingCharacterPopup.SetActive (false);
		settingScript.playSound (2);
	}
	
	public void cheerClick(){
		if(trackInfo.isCanCheer){
			SettingScript.socketScript.running ("cheer");
			settingScript.playSound (1);
		}
	}
	
	public void cameraClick(bool isAuto){
		if(isAuto){
			if(betNum < 0 || trackInfo.adoptCharacters [betNum] == null){
				cameraScript.setCharacter (trackInfo.get1st ());
			}else{
				cameraScript.setCharacter (trackInfo.adoptCharacters [betNum]);
			}
		}else{
			cameraScript.setCharacter (null);
		}
		cameraMButton.SetActive (isAuto);
	}
	
	public void resultXClick(){
		resultPopup.SetActive (false);
		settingScript.playSound (2);
		if(!trackInfo.isGame){
			bettingPopup.SetActive (true);
		}
	}
	
	class Track{
		public List<DollScript> adoptCharacters;
		public bool isGame;
		public bool isCanCheer;
		public float length;
		public float goal;
		public int second;
		public int runner;

		RunningScript runningScript;
		List<Line> lines;

		Coroutine cheerCoroutine;
		
		public Track(RunningScript runningScript){
			this.runningScript = runningScript;
			
			lines = new List<Line> ();
			lines.Add (new Line (new Vector2 (0f, -300f), new Vector2 (415f, -300f)));
			lines.Add (new Line (new Vector2 (415f, -300f), new Vector2 (545f, -165f)));
			lines.Add (new Line (new Vector2 (545f, -165f), new Vector2 (545f, 165f)));
			lines.Add (new Line (new Vector2 (545f, 165f), new Vector2 (415f, 300f)));
			lines.Add (new Line (new Vector2 (415f, 300f), new Vector2 (-415f, 300f)));
			lines.Add (new Line (new Vector2 (-415f, 300f), new Vector2 (-545f, 165f)));
			lines.Add (new Line (new Vector2 (-545f, 165f), new Vector2 (-545f, -165f)));
			lines.Add (new Line (new Vector2 (-545f, -165f), new Vector2 (-415f, -300f)));
			lines.Add (new Line (new Vector2 (-415f, -300f), new Vector2 (0f, -300f)));
			
			foreach(Line line in lines){
				length += line.line.magnitude;
			}

			adoptCharacters = new List<DollScript>();
			isCanCheer = true;
		}
		
		public Track(RunningScript runningScript, JSONObject adoptData) : this(runningScript){
			//create dolls
			foreach (JSONObject adoptMember in adoptData.list) {
				if(!adoptMember.IsNull){
					DollScript doll = runningScript.settingScript.createDoll (adoptMember ["adoptData"], runningScript.track);
					doll.isRunning = true;
					doll.maxStamina = adoptMember ["stamina"].n;
					doll.stamina = adoptMember ["stamina"].n;
					doll.progress = adoptMember ["progress"].f;
					doll.setPos (getPos (doll.progress));
					doll.speedList = new List<float> ();
					foreach (JSONObject speedMember in adoptMember ["speedList"].list) {
						doll.speedList.Add (speedMember.f);
					}
	
					//add running state
					GameObject running_state = Instantiate (runningScript.runningStatePref, doll.transform);
					running_state.name = "running_state";
					adoptCharacters.Add (doll);
				}
			}

			runner = 6;
		}
		
		public void run(){
			isGame = true;
			runningScript.bettingPopup.SetActive (false);
			runningScript.bettingCharacterPopup.SetActive (false);
			if (!isCanCheer){
				runningScript.cheerButton.transform.GetChild(0).GetComponent<Image>().fillAmount = 0;
			}
			if(runningScript.betNum < 0 || adoptCharacters[runningScript.betNum].stamina <= 0)
				runningScript.cheerButton.SetActive (false);
			else
				runningScript.cheerButton.SetActive (true);
			runningScript.resultPopup.SetActive (false);
			//runningScript.StartCoroutine (running_update ());
		}
		
		public void run(float goal){
			this.goal = goal;
			run ();
		}
		
		public void boost(int adoptNum, int boost, bool isMine){
			DollScript doll = adoptCharacters [adoptNum];
			if(doll != null && doll.stamina > 0){
				doll.boost += boost;
				if(isMine){
					Image cheerProgress = runningScript.cheerButton.transform.GetChild (0).GetComponent<Image> ();
					cheerCoroutine = runningScript.StartCoroutine (waitCanCheer (/*3-3+*/cheerProgress, boost));
				}
			}
	    }
	    
	    public void reset(JSONObject adoptData){
			isGame = false;
			isCanCheer = true;
			second = 0;
			runner = 6;
			
			runningScript.settingScript.destroyChilds (runningScript.track);
			adoptCharacters.Clear ();
			//create dolls
			foreach (JSONObject adoptMember in adoptData.list){
				DollScript doll = runningScript.settingScript.createDoll (adoptMember["adoptData"], runningScript.track);
				doll.isRunning = true;
				doll.maxStamina = adoptMember["stamina"].n;
				doll.stamina = adoptMember["stamina"].n;
				doll.progress = adoptMember ["progress"].f;
				doll.setPos (getPos (doll.progress));
				doll.speedList = new List<float> ();
				foreach(JSONObject speedMember in adoptMember["speedList"].list){
					doll.speedList.Add (speedMember.f);
				}
	
				//add running state
				GameObject running_state = Instantiate (runningScript.runningStatePref, doll.transform);
				running_state.name = "running_state";
				adoptCharacters.Add(doll);
			}
	    }
	    
	    public void sync(JSONObject adoptData){
			runner = 6;
			
			runningScript.settingScript.destroyChilds (runningScript.track);
			adoptCharacters.Clear ();
			//create dolls
			for (int i = 0; i < adoptData.Count; i++){
				if(adoptData[i].IsNull){
					adoptCharacters.Add (null);
					if(runningScript.betNum == i){
						runningScript.cheerButton.SetActive (false);
					}
					runner -= 1;
				}else{
					DollScript doll = runningScript.settingScript.createDoll (adoptData[i]["adoptData"], runningScript.track);
					doll.isRunning = true;
					doll.maxStamina = adoptData[i]["maxStamina"].n;
					doll.stamina = adoptData[i]["stamina"].n;
					doll.progress = adoptData[i]["progress"].f;
					doll.setPos (getPos (doll.progress));
					doll.speedList = new List<float> ();
					foreach(JSONObject speedMember in adoptData[i]["speedList"].list){
						doll.speedList.Add (speedMember.f);
					}
		
					//add running state
					GameObject running_state = Instantiate (runningScript.runningStatePref, doll.transform);
					running_state.name = "running_state";
					adoptCharacters.Add(doll);
				}
			}
			
			if(!isGame){
				run ();
	    	}
	    }
	    
		//IEnumerator running_update(){
		//	while(isGame){
		//		if(runningScript.cameraMButton.activeSelf){
		//			if(runningScript.betNum < 0 || adoptCharacters [runningScript.betNum] == null){
		//				runningScript.cameraScript.setCharacter (get1st ());
		//			}else{
		//				runningScript.cameraScript.setCharacter (adoptCharacters [runningScript.betNum]);
		//			}
		//		}
				
		//		int runner = 0;
		//		for (int i = 0; i < adoptCharacters.Count; i++){
		//			DollScript doll = adoptCharacters [i];
		//			if(doll != null){
		//				if(doll.speedList.Count <= second){
		//					SettingScript.socketScript.running ("sync");
		//					runningScript.settingScript.setProgressBackActive (true);
		//					runningScript.cheerButton.transform.GetChild (0).GetComponent<Image> ().fillAmount = 0;
		//					yield break;
		//				}
						
		//				setStatus (doll);
						
		//				doll.speed = doll.speedList [(int)second];
		//				if(doll.boost > 0){
		//					doll.boost -= 1;
		//					float amount = doll.speed * 2f;
							
		//					if (doll.stamina > 0) {
		//						if(doll.stamina < amount){
		//							amount = doll.stamina;
		//							runningScript.cheerButton.SetActive (false);
		//						}
		//						doll.stamina -= amount;
		//						doll.speed = amount;
								
		//					}else{
		//						doll.boost = 0;
		//						if (!isCanCheer){
		//							runningScript.cheerButton.transform.GetChild(0).GetComponent<Image>().fillAmount = 0;
		//						}
		//					}
		//				}
						
		//				if(doll.progress+doll.speed >= goal){
		//					doll.addPath (getPath (doll.progress, goal - doll.progress));
		//					doll.progress = goal;
		//					doll.setOnStopAction (() => {
		//						Debug.Log (doll.name);
		//						doll.speed = 100f;
		//						doll.setTargetPos (100f, -300f);
		//						foreach(RectTransform body in doll.transform.Find("body")){
		//							LeanTween.alpha (body, 0, 1f);
		//						}
		//						GameObject gameObject = doll.gameObject;
		//						LeanTween.delayedCall (1f, () => {
		//							if(gameObject != null)
		//								Destroy (gameObject);
		//						});
		//					});
		//					adoptCharacters [i] = null;
							
		//					if(runningScript.betNum == i){
		//						if (!isCanCheer){
		//							runningScript.cheerButton.transform.GetChild(0).GetComponent<Image>().fillAmount = 0;
		//						}
		//						runningScript.cheerButton.SetActive (false);
		//					}
		//				}else{
		//					doll.addPath (getPath(doll.progress, doll.speed));
		//					doll.progress += doll.speed;
							
		//					runner += 1;
		//				}
		//			}
		//		}
				
		//		if(runner == 0){
		//			isGame = false;
		//			adoptCharacters.Clear ();
		//			break;
		//		}

		//		second += 1;
		//		yield return new WaitForSeconds (1f);
		//	}
			
		//	runningScript.cheerButton.SetActive (false);
		//}
		
		public Vector2 getPos(float progress){
			Vector2? pos = null;
			progress %= length;
			
			foreach(Line line in lines){
				pos = line.getPos (ref progress);
				if (pos != null)
					break;
			}
			return (Vector2)pos;
		}
		
		public List<Vector2> getPath(float progress, float distance){
			List<Vector2> posList = new List<Vector2>();
			progress %= length;
			
			for (int i = 0; i < lines.Count; i++){
				if(lines[i].isInclude(ref progress)){
					distance += progress;
					while (!lines [i].isInclude (ref distance)) {
						posList.Add (lines [i++].end);
						if(i >= lines.Count){
							i %= lines.Count;
						}
					}
					posList.Add ((Vector2)lines [i].getPos (ref distance));
					break;
				}
			}
			
			return posList;
		}
		
		IEnumerator waitCanCheer (Image progress, float time)
		{
			isCanCheer = false;
			progress.fillAmount = 1;
			progress.gameObject.SetActive (true);
			while (progress.fillAmount > 0){
				progress.fillAmount -= Time.deltaTime / time;
				yield return null;
			}
			
			isCanCheer = true;
			progress.gameObject.SetActive (false);
			cheerCoroutine = null;
	    }
	    
	    public void setStatus(DollScript doll){
			Transform running_state = doll.transform.Find ("running_state");
			running_state.Find ("stamina").GetChild (0).GetChild (0).GetComponent<Image> ().fillAmount = doll.stamina / doll.maxStamina;
			running_state.Find ("progress").GetChild (0).GetChild (0).GetComponent<Image> ().fillAmount = doll.progress / goal;
			Transform cheerObj = running_state.Find ("cheer");
	    	if(doll.boost > 0){
				cheerObj.gameObject.SetActive (true);
	    	}else{
				cheerObj.gameObject.SetActive (false);
	    	}
	    }
	    
	    public DollScript get1st(){
			DollScript doll = null;
			float progress = -1;
			for (int i = 0; i < adoptCharacters.Count; i++){
				if (adoptCharacters [i] != null && progress < adoptCharacters [i].progress) {
					doll = adoptCharacters [i];
					progress = doll.progress;
				}
			}
			
			return doll;
	    }
	    
		class Line{
			public Vector2 start, end, line;
			
			public Line(Vector2 start, Vector2 end){
				this.start = start;
				this.end = end;
				line = end - start;
			}
			
			public Vector2? getPos(ref float progress){
				if(progress > line.magnitude){
					progress -= line.magnitude;
					return null;
				}else{
					return start + (progress / line.magnitude * line);
				}
			}
			
			public bool isInclude(ref float progress){
				if(progress >= line.magnitude){
					progress -= line.magnitude;
					return false;
				}else{
					return true;
				}
			}
		}
	}
	
	class RankComparer : Comparer<JSONObject>
	{
		public override int Compare (JSONObject a, JSONObject b)
		{
			int aSecond = (int)a ["second"].n;
			int bSecond = (int)b ["second"].n;
			int result = aSecond.CompareTo (bSecond);
			if(result == 0){
				float aProgress = a ["progress"].f;
				float bProgress = b ["progress"].f;
				return bProgress.CompareTo(aProgress);
			}else{
				return result;
			}
			
		}
	}
}
