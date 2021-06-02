using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class PracticeScript : MonoBehaviour {
	public Transform PanelSpeak;
	public Transform PanelKeyboard;
	public RectTransform PanelQuit;
	public RectTransform WordsContent;
	public RectTransform LoadImage;
	public Text TextPassTime;
	public Text TextInput;
	public GameObject PrefabWord;
	public ScrollRect WordsScrollRect;

	GameObject ButtonSpeak;
	GameObject[] volumes;

	List<KeyboardButton.MatchDownUp> selectedKeys;
	GameScript.GameStatus gameStatus;
	StringBuilder sb;
	PlayInfo playinfo;

	double passTime;
	float timer;
	float rmsDb;
	bool isKeyboard;
	bool isTimeScale;

	#if UNITY_IOS
	[DllImport("__Internal")]
	private static extern void ttsSpeak(string text);
	[DllImport("__Internal")]
	private static extern void ttsInitialize();
	[DllImport("__Internal")]
	private static extern void sttRec();
	[DllImport("__Internal")]
	private static extern void sttInit(string text);
	[DllImport("__Internal")]
	private static extern void sttDestroy();
	#endif

	void Start(){
		playinfo = PlayInfo.instance;

		//initialize members
		selectedKeys = new List<KeyboardButton.MatchDownUp> ();
		sb = new StringBuilder ();
		volumes = new GameObject[4];

		gameStatus = GameScript.GameStatus.game;
		passTime = 0;
		timer = 0;
		isTimeScale = false;

		//setting for game input
		ButtonSpeak = PanelSpeak.GetChild (0).gameObject;
		for (int i=0; i<4; i++) {
			volumes [i] = PanelSpeak.GetChild (i+1).gameObject;
		}

		foreach (Transform child in PanelKeyboard) {
			KeyboardButton btn = child.GetComponent<KeyboardButton> ();
			btn.method1 = keyDown;
			btn.method2 = keyUp;
			btn.method3 = keyEnter;
			btn.method4 = keyExit;
		}

		isKeyboard = playinfo.UseSpeak == 1 ? false : true;
		initializePlugins ();

		// set panel quit strings
		PanelQuit.GetChild (0).GetComponent<Text> ().text = Constant.StringQuitMessage;
		PanelQuit.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringQuitConfirm;
		PanelQuit.GetChild (2).GetChild (0).GetComponent<Text> ().text = Constant.StringPanelCancel;

		//		DontDestroyOnLoad (this);

		// set fonts
		playinfo.setFonts(PlayInfo.FontIndex.BMJUA_ttf);

	}

	void Update(){
		if (gameStatus.Equals (GameScript.GameStatus.game)) {
			timer += Time.deltaTime;

			//update pass time
			if (timer >= 1f) {
				passTime += 1f;
				timer -= 1f;
				TextPassTime.text = passTime.ToString ();
			}

			//hold backspace
			if (selectedKeys.Count == 1) {
				if (selectedKeys [0].currentKey.isBackDown && selectedKeys [0].currentKey.hold) {
					if (sb.Length > 0) {
						sb.Remove (sb.Length - 1, 1);
						TextInput.text = sb.ToString ();
					}
				}
			}

		}

		#if UNITY_ANDROID
		if(Input.GetKeyUp(KeyCode.Escape))
		{
			if (gameStatus.Equals (GameScript.GameStatus.ready) && PanelQuit.gameObject.activeSelf) {
				if(isTimeScale)
					return;
				isTimeScale = true;
				Time.timeScale = 1f;
				LeanTween.scale(PanelQuit, new Vector2(0,0), 0.2f).setOnComplete(() => {
					PanelQuit.gameObject.SetActive (false);
					gameStatus = GameScript.GameStatus.game;
					isTimeScale = false;
				});

			} else if (gameStatus.Equals (GameScript.GameStatus.game) && !PanelQuit.gameObject.activeSelf) {
				if(isTimeScale)
					return;
				isTimeScale = true;
				PanelQuit.gameObject.SetActive (true);
				gameStatus = GameScript.GameStatus.ready;
				LeanTween.scale(PanelQuit, new Vector2(1f,1f), 0.2f).setOnComplete(() => {
					Time.timeScale = 0;
					isTimeScale = false;
				});

			}
		}
		#endif

	}

	void OnApplicationPause(bool pauseStatus){
		if (isKeyboard == false) {
			if (pauseStatus) {
				Time.timeScale = 0;
				gameStatus = GameScript.GameStatus.ready;
				#if UNITY_ANDROID
				if (ButtonSpeak.activeSelf == false)
					using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "STTUtils")) {
						jc.CallStatic ("stopListening");
					}
				#endif
				#if UNITY_IOS
			//여긴 필요없음
			//sttStop();
				#endif
			} else {
				Time.timeScale = 1f;
				gameStatus = GameScript.GameStatus.game;
				#if UNITY_ANDROID
				if (ButtonSpeak.activeSelf == false)
					using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "STTUtils")) {
						jc.CallStatic ("startListening");
					}
				#endif
				#if UNITY_IOS
			//여긴 필요없음
			//sttRec();
				#endif
			}
		}
	}

	void OnDestroy(){
		destroyPlugins ();
	}

	void showWord(WordScript word){
		WordsScrollRect.verticalNormalizedPosition = -0.2f;
	}

	WordScript makeWord(string text){
		RectTransform tmpRect = Instantiate (PrefabWord).GetComponent<RectTransform> ();
		tmpRect.SetParent(WordsContent);
		tmpRect.GetChild (1).gameObject.SetActive (false);
		Text tmpText = tmpRect.GetChild (0).GetComponent<Text> ();
		tmpText.text = text;

		WordScript newWord = new WordScript (tmpRect, tmpText);
		return newWord;
	}

	// called by startListening in OnResult method
	public void STTresult(string results){
		if (results.Equals ("_error") == false) {
			JSONObject jsonResult = new JSONObject (results);
			showWord (makeWord (jsonResult [0].str));
		} else {
			TextInput.text = "";
		}

		// return to initial
		for (int i = 0; i < 4; i++) {
			if (volumes [i].activeSelf)
				volumes [i].SetActive (false);
		}
		ButtonSpeak.SetActive(true);

		destroyPlugins ();
	}

	//called by startlistening in 
	public void STTvolume(string volume){
		int index;

		rmsDb = Mathf.Pow (10f, (float.Parse (volume) * 0.1f));
		if (rmsDb < 2.5f) {
			index = 0;
		} else if (rmsDb < 5f) {
			index = 1;
		} else if (rmsDb < 7.5f) {
			index = 2;
		} else {
			index = 3;
		}
		for (int i = 0; i < 4; i++) {
			if (i == index)
				volumes [i].SetActive (true);
			else
				volumes[i].SetActive(false);
		}
	}

	public void startSpeech(){
		if (gameStatus.Equals (GameScript.GameStatus.game)) {
			rmsDb = 0;
			ButtonSpeak.SetActive (false);
			volumes [0].SetActive (true);
			#if UNITY_ANDROID
			using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "STTUtils")) {
				jc.CallStatic ("startListening");
			}
			#endif
			#if UNITY_IOS
			sttRec();
			#endif
		}
	}

	public void keyDown(KeyboardButton btn, PointerEventData eventData){
		if (gameStatus.Equals (GameScript.GameStatus.game)) {
			selectedKeys.Add (new KeyboardButton.MatchDownUp (btn, btn));

			if (btn.isBackDown && sb.Length > 0) {
				sb.Remove (sb.Length - 1, 1);
				TextInput.text = sb.ToString ();
			}
		}
	}

	public void keyUp(KeyboardButton btn, PointerEventData eventData){
		if (gameStatus.Equals (GameScript.GameStatus.game)) {
			KeyboardButton.MatchDownUp removeOne = null;

			foreach (KeyboardButton.MatchDownUp match in selectedKeys) {
				if (match.downKey.Equals (btn)) {
					if (match.currentKey.key.Equals ("Enter")) {
						if (sb.Length <= 0)
							continue;
						showWord (makeWord (sb.ToString ()));
						#if UNITY_ANDROID
						using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "TTSUtils")) {
							jc.CallStatic ("speak", new object[]{ sb.ToString () });
						}
						#endif
						#if UNITY_IOS
						ttsSpeak(sb.ToString ());
						#endif
						sb.Remove (0, sb.Length);
					} else if (match.currentKey.key.Equals ("Back") == false) {
						sb.Append (match.currentKey.key);
					}

					TextInput.text = sb.ToString ();

					if (!match.currentKey.image.color.Equals (match.currentKey.colors.normalColor))
						match.currentKey.image.color = match.currentKey.colors.normalColor;
					removeOne = match;
				}
			}

			selectedKeys.Remove (removeOne);
		}
	}

	public void keyEnter(KeyboardButton btn, PointerEventData eventData){
		if (gameStatus.Equals (GameScript.GameStatus.game)) {
			if (selectedKeys.Count > 0) {
				foreach (KeyboardButton.MatchDownUp match in selectedKeys) {
					if (match.downKey.Equals (eventData.pointerPress.GetComponent<KeyboardButton> ()))
						match.currentKey = btn;
				}
				btn.selected = true;
				btn.image.color = btn.colors.pressedColor;
			}
		}
	}

	public void keyExit(KeyboardButton btn, PointerEventData eventData){
		if (gameStatus.Equals (GameScript.GameStatus.game)) {
			if (btn.selected)
				btn.image.color = btn.colors.normalColor;
		}
	}

	public void OnClickButtonKeyboard(){
		if (isKeyboard == false) {
			destroyPlugins ();
			PanelSpeak.gameObject.SetActive (false);
			isKeyboard = true;
			initializePlugins ();

			playinfo.playClip (PlayInfo.AudioIndex.SFX_Switch);
		}
	}

	public void OnClickButtonSpeak(){
		if (isKeyboard) {
			destroyPlugins ();
			PanelKeyboard.gameObject.SetActive (false);
			isKeyboard = false;
			initializePlugins ();

			playinfo.playClip (PlayInfo.AudioIndex.SFX_Switch);
		}
	}

	void initializePlugins(){
		if (isKeyboard) {
			PanelKeyboard.gameObject.SetActive (true);

			#if UNITY_ANDROID
			using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "TTSUtils")) {
				jc.CallStatic ("initialize");
			}
			#endif
			#if UNITY_IOS
			ttsInitialize();
			#endif
		} else {
			PanelSpeak.gameObject.SetActive (true);

			#if UNITY_ANDROID
			using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "STTUtils")) {
				jc.CallStatic ("initialize", new object[]{Constant.PracticeManager});
			}
			#endif
			#if UNITY_IOS
			sttInit(Constant.PracticeManager);
			#endif
		}
	}

	void destroyPlugins(){
		if (isKeyboard) {
			#if UNITY_ANDROID
			using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "TTSUtils")) {
				jc.CallStatic ("destroy");
			}
			#endif
			#if UNITY_IOS
			//여긴 필요없음
			#endif
		} else {
			#if UNITY_ANDROID
			using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "STTUtils")) {
				jc.CallStatic ("destroy");
			}
			#endif
			#if UNITY_IOS
			sttDestroy();
			#endif
		}
	}

	public void openQuit(){
		if (gameStatus.Equals (GameScript.GameStatus.ready) || isTimeScale)
			return;
		isTimeScale = true;
		gameStatus = GameScript.GameStatus.ready;
		PanelQuit.gameObject.SetActive (true);

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		LeanTween.scale (PanelQuit, new Vector2 (1f, 1f), 0.2f).setOnComplete (() => {
			Time.timeScale = 0;
			isTimeScale = false;
		});

	}

	public void quitGame(){
		if (isTimeScale)
			return;
		isTimeScale = true;
		Time.timeScale = 1f;

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		//fade
		LeanTween.alpha (LoadImage, 1f, 0.4f).setOnComplete (() => {
			SceneManager.LoadScene (Constant.MainScene);
			//			Destroy (this);
		});
	}

	public void quitCancel(){
		if (isTimeScale)
			return;
		isTimeScale = true;
		Time.timeScale = 1f;

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		LeanTween.scale (PanelQuit, new Vector2 (0, 0), 0.2f).setOnComplete (() => {
			PanelQuit.gameObject.SetActive (false);
			gameStatus = GameScript.GameStatus.game;	
			isTimeScale = false;

		});

	}

}
