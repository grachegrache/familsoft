using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class GameScript : MonoBehaviour {
	public enum GamePattern{
		minRespawn = 0,
		speed,
		damage,
		item, // since the item tutorial, applying random factor
		bomb,
		bombItem
	}
	public enum GameLevel{
		to200 = 200,
		to299 = 299,
		to343 = 343
	}
	public enum GameStatus {
		ready = 0,
		game,
		result
	}

	struct GameResult{
		public bool clear;
		public int getExp;
		public ItemScript getItem;
	}

	public Transform PanelPlayer;
	public Transform PanelSpeak;
	public Transform PanelKeyboard;
	public RectTransform PanelQuit;
	public RectTransform PanelResult;
	public RectTransform PanelNoKey;
	public RectTransform PanelReview;
	public RectTransform wordsParent;
	public RectTransform textExpsParent;
	public RectTransform LoadImage;
	public RectTransform ImageEraser;
	public RectTransform ImageSandglass;
	public Text TextInput;
	public Text TextReady;
	public Text TextRemainTime;
	public Text TextResultPlayer;
	public Text TextResultExp;
	public Sprite[] SpriteItems;
	public Slider SliderExp;
	public GameObject TextEarnedItem;
	public GameObject PanelClear;
	public GameObject PanelOver;
	public GameObject ButtonNext;
	public GameObject PrefabWord;
	public GameObject PrefabTextExp;
	public ParticleSystem ParticleSystemRain;
	public ParticleSystem ParticleSystemRecover;
	public RippleEffect RippleEffect;

	Text[] TextItem;
	RectTransform[] sandglasses;
	GameObject[] volumes;
	Slider SliderLifegage;
	Image ImageLifegageFill;
	RectTransform RectTextReady;
	GameObject ButtonSpeak;

	List<WordScript> wordPool;
	List<WordScript> activeWords;
	List<KeyboardButton.MatchDownUp> selectedKeys;
	List<Text> TextExps;
	GameStatus gameStatus;
	GameResult gameResult;
	StringBuilder sb;
	PlayInfo playinfo;
	Color maxColor, midColor, minColor;

	float respawnTimer;
	float timer;
	float lifegage;
	float untilLifegage;
	float top, bottom;
	float untilExp;
	float deltaSlider;
	float rmsDb;
	int prevLevel;
	bool isStop;
	bool isTimeScale;
	bool isGo;

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
	[DllImport("__Internal")]
	private static extern void sttSoundBack();
	#endif

	void Start(){
		playinfo = PlayInfo.instance;

		//show ready text
		TextReady.text = Constant.StringGameReady;
		RectTextReady = TextReady.gameObject.GetComponent<RectTransform> ();

		playinfo.playClip (PlayInfo.AudioIndex.SFX_Ready);

		LeanTween.textAlpha (RectTextReady, 0f, 0.5f).setOnComplete (() => {
			LeanTween.textAlpha (RectTextReady, 1f, 0.5f).setOnComplete (() => {
				LeanTween.textAlpha (RectTextReady, 0f, 0.5f).setOnComplete (() => {
					LeanTween.textAlpha (RectTextReady, 1f, 0.5f).setOnComplete (() => {
						TextReady.text = Constant.StringGameStart;
						LeanTween.textAlpha(RectTextReady,0f,0.5f);
						LeanTween.moveY (RectTextReady, 600f, 0.5f).setOnComplete (() => {
							gameStatus = GameStatus.game;
						});

					});
				});
			});
		});

		//initialize members
		wordPool = new List<WordScript> ();
		selectedKeys = new List<KeyboardButton.MatchDownUp> ();
		activeWords = new List<WordScript> ();
		TextExps = new List<Text> ();
		sb = new StringBuilder ();
		TextItem = new Text[5];
		volumes = new GameObject[4];

		SliderExp.value = (float)playinfo.PlayerExp / (playinfo.PlayerLevel * 10);
		maxColor = Color.green;
		midColor = Color.yellow;
		minColor = Color.red;
		isStop = false;
		isTimeScale = false;
		isGo = false;

		// set sandglasses
		sandglasses = new RectTransform[] {
			ImageSandglass.GetChild (0).GetComponent<RectTransform> (),
			ImageSandglass.GetChild (1).GetComponent<RectTransform> (),
			ImageSandglass.GetChild (2).GetComponent<RectTransform> (),
			ImageSandglass.GetChild (3).GetComponent<RectTransform> (),
			ImageSandglass.GetChild (4).GetComponent<RectTransform> ()
		};

		// set particle systems
		var col = ParticleSystemRain.colorOverLifetime;
		col.enabled = true;
		Gradient grad = new Gradient();
		grad.SetKeys(
			new GradientColorKey[] { new GradientColorKey(Color.white, 0), new GradientColorKey(Color.white, 1f) },
			new GradientAlphaKey[] { new GradientAlphaKey(1f, 0), new GradientAlphaKey(0, 1f) } );
		col.color = grad;

		col = ParticleSystemRecover.colorOverLifetime;
		col.enabled = true;
		grad = new Gradient ();
		grad.SetKeys (
			new GradientColorKey[] {
				new GradientColorKey (Color.white, 0),
				new GradientColorKey (Color.white, 0.5f),
				new GradientColorKey (Color.white, 1f)
			},
			new GradientAlphaKey[]{ new GradientAlphaKey (0, 0), new GradientAlphaKey (1f, 0.5f), new GradientAlphaKey (0, 1f) }
		);
		col.color = grad;

		//make word pool
		RectTransform tmpRect;
		Text tmpText, tmpText2;

		for (int i = 0; i < 10; i++) {
			tmpRect = Instantiate (PrefabWord).GetComponent<RectTransform> ();
			tmpRect.gameObject.SetActive (false);
			tmpRect.SetParent(wordsParent);
			tmpText = tmpRect.GetChild (0).GetComponent<Text> ();
			tmpText2 = tmpRect.GetChild (1).GetComponent<Text> ();
			wordPool.Add (new WordScript(tmpRect, tmpText, tmpText2, playinfo.speed));
		}

		//make text exps
		Vector3 v;
		for (int i = 0; i < 5; i++) {
			Text t = Instantiate (PrefabTextExp).GetComponent<Text> ();
			t.gameObject.SetActive (false);
			t.rectTransform.SetParent (textExpsParent);
			v = t.rectTransform.localScale;
			v.x = 1f; v.y = 1f; v.z = 1f;
			t.rectTransform.localScale = v;
			TextExps.Add (t);
		}

		//setting for game balance
		TextRemainTime.text = playinfo.maxTime.ToString();
		lifegage = playinfo.maxLifegage;
		respawnTimer = playinfo.minRespawn;
		prevLevel = playinfo.PlayerLevel;
		timer = 0f;
		untilLifegage = 1f;

		foreach (Transform child in PanelPlayer) {
			if (child.name.Contains ("Level")) {
				child.GetComponent<Text> ().text = "LV"+playinfo.PlayerLevel;

			} else if(child.name.Contains("Slider")){
				SliderLifegage = child.GetComponent<Slider> ();
				ImageLifegageFill = SliderLifegage.fillRect.GetComponent<Image> ();

			} else if(child.name.Contains("Item")) {
				int index = int.Parse (child.name.Substring (10));
				TextItem [index] = child.GetChild (0).GetComponent<Text> ();
				TextItem [index].text = playinfo.PlayerItem [index].ToString();

				if (child.name.Contains ("4"))
					continue;
				child.GetComponent<Button> ().onClick.AddListener (
					delegate {
						useItem(child.name.Substring (10));
					}
				);
			}
		}

		//setting for game input
		if (playinfo.UseSpeak == 1) {
			PanelSpeak.gameObject.SetActive (true);
			top = 450f;
			bottom = -550f;

			ButtonSpeak = PanelSpeak.GetChild (0).gameObject;
			for (int i=0; i<4; i++) {
				volumes [i] = PanelSpeak.GetChild (i+1).gameObject;
			}

			#if UNITY_ANDROID
			using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "STTUtils")) {
				jc.CallStatic ("initialize", new object[]{Constant.GameManager});
			}
			#endif
			#if UNITY_IOS
			sttInit(Constant.GameManager);
			#endif
		} else {
			PanelKeyboard.gameObject.SetActive (true);
			top = 450f;
			bottom = -260f;

			foreach (Transform child in PanelKeyboard) {
				KeyboardButton btn = child.GetComponent<KeyboardButton> ();
				btn.method1 = keyDown;
				btn.method2 = keyUp;
				btn.method3 = keyEnter;
				btn.method4 = keyExit;
			}

			#if UNITY_ANDROID
			using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "TTSUtils")) {
				jc.CallStatic ("initialize");
			}
			#endif
			#if UNITY_IOS
			ttsInitialize();
			#endif
		}

		// set panel quit strings
		PanelQuit.GetChild (0).GetComponent<Text> ().text = Constant.StringQuitMessage;
		PanelQuit.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringQuitConfirm;
		PanelQuit.GetChild (2).GetChild (0).GetComponent<Text> ().text = Constant.StringPanelCancel;

		// set panel no key strings
		PanelNoKey.GetChild(0).GetComponent<Text>().text = Constant.StringNoKeyMessage;
		PanelNoKey.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringNoKeyConfirm;
		PanelNoKey.GetChild (2).GetChild (0).GetComponent<Text> ().text = Constant.StringPanelCancel;

		// set panel result strings
		PanelClear.transform.GetChild(1).GetComponent<Text>().text = Constant.StringGameResultEarnedExp;
		PanelClear.transform.GetChild (2).GetComponent<Text> ().text = Constant.StringGameResultEarnedItem;
		PanelOver.transform.GetChild (1).GetComponent<Text> ().text = Constant.StringGameResultNeedItem;

		// set panel review strings
		PanelReview.GetChild(0).GetChild(0).GetComponent<Text>().text = Constant.StringGameReviewMessage;
		PanelReview.GetChild(0).GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringGameReviewConfirm;
		PanelReview.GetChild(0).GetChild (2).GetChild (0).GetComponent<Text> ().text = Constant.StringPanelCancel;

//		DontDestroyOnLoad (this);

		// set fonts
		playinfo.setFonts(PlayInfo.FontIndex.BMJUA_ttf);

	}

	void Update(){
		if(gameStatus.Equals(GameStatus.game)){
			if (lifegage > 0) {
				if (!isStop) {
					deltaSlider = 0.5f * Time.deltaTime;
					respawnTimer += Time.deltaTime;
					timer += Time.deltaTime;

					// shoot word randomly in a half chances when the pattern is over the "item"
					// wait for maximum twice checkTime
					if (respawnTimer > playinfo.minRespawn) {
						bool isShoot = false;

						if (playinfo.pattern < GamePattern.item) {
							isShoot = true;

						} else {
							Random.InitState ((int)System.DateTime.Now.ToBinary ());
							if (respawnTimer / 2 > playinfo.minRespawn || Random.value > 0.5f) {
								isShoot = true;
							}
						}

						if (isShoot) {
							//shoot word
							WordScript nextWord = nextTempWord ();

							if (playinfo.pattern >= GamePattern.damage) {
								nextWord.damage = Random.Range (10f, 50f);
							}

							if (playinfo.pattern >= GamePattern.bomb) {
								if (Random.value > 0.8f) {
									nextWord.randomBomb ();
									nextWord.image.color = Color.cyan;
								} else {
									nextWord.image.color = Color.white;
								}
							}

							nextWord.rect.gameObject.SetActive (true);
							nextWord.isActive = true;
							activeWords.Add (nextWord);
							respawnTimer = 0f;
						}
					}

					if (playinfo.pattern >= GamePattern.speed) {
						foreach (WordScript word in activeWords) {
							word.speed += playinfo.deltaSpeed;
						}
					}

					// move active words
					foreach (WordScript word in activeWords) {
						if (word.isActive) {
							Vector3 tmp = word.rect.localPosition;
							tmp.y -= word.speed * Time.deltaTime;
							word.rect.localPosition = tmp;

							// check words touch the below
							if (word.rect.localPosition.y < bottom) {
								playinfo.playClip (PlayInfo.AudioIndex.water_click);

								word.isActive = false;
								word.rect.gameObject.SetActive (false);
								activeWords.Remove (word);
								lifegage -= word.damage;

								if (lifegage < 0) {
									//freeze time
									untilLifegage = 0;

								} else {
									untilLifegage = lifegage / playinfo.maxLifegage;
								}
							}
						}
					}

					//update remain time
					if (timer >= 1f) {
						playinfo.maxTime -= 1;
						TextRemainTime.text = playinfo.maxTime.ToString ();
						timer -= 1f;
					}

					if (playinfo.maxTime <= 0) {
						//game end
						isStop = true;
						gameResult.clear = true;
						applyResult ();

					}
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

			//lifegage animation
			if (SliderLifegage.value != untilLifegage) {
				if (Mathf.Abs (SliderLifegage.value - untilLifegage) < deltaSlider)
					SliderLifegage.value = untilLifegage;
				else if (SliderLifegage.value > untilLifegage)
					SliderLifegage.value -= deltaSlider;
				else
					SliderLifegage.value += deltaSlider;

				if (SliderLifegage.value > 0.5f) {
					ImageLifegageFill.color = Color.Lerp (midColor, maxColor, (SliderLifegage.value - 0.5f) * 2);
				} else {
					ImageLifegageFill.color = Color.Lerp (minColor, midColor, (SliderLifegage.value) * 2);
				}
			}

			//check end of the animation
			if (SliderLifegage.value.Equals (0)) {
				// game over
				isStop = true;
				gameResult.clear = false;
				applyResult ();

			}

		} else if(gameStatus.Equals(GameStatus.result)){
			//show exp bar animation
			if (playinfo.PlayerLevel > prevLevel) {
				if (SliderExp.value < 1f) {
					if (1f - SliderExp.value < deltaSlider)
						SliderExp.value = 1f;
					else
						SliderExp.value += deltaSlider;

				} else {
					prevLevel += 1;
					SliderExp.value = 0;
				}

			} else {
				if (SliderExp.value < untilExp) {
					if (untilExp - SliderExp.value < deltaSlider)
						SliderExp.value = untilExp;
					else
						SliderExp.value += deltaSlider;
				}
			}

		}

		#if UNITY_ANDROID
		if(Input.GetKeyUp(KeyCode.Escape))
		{
			if (PanelResult.gameObject.activeSelf) {
				if(!gameStatus.Equals(GameStatus.result))
					return;
				if(PanelNoKey.gameObject.activeSelf){
					noKeyCancel();
				} else if (!PanelReview.gameObject.activeSelf) {
					quitGame ();
				}

			} else if (gameStatus.Equals (GameStatus.ready) && PanelQuit.gameObject.activeSelf) {
				if(isTimeScale)
					return;
				isTimeScale = true;
				Time.timeScale = 1f;
				LeanTween.scale(PanelQuit, new Vector2(0,0), 0.2f).setOnComplete(() => {
					PanelQuit.gameObject.SetActive (false);
					gameStatus = GameStatus.game;
					isTimeScale = false;
				});

			} else if (gameStatus.Equals (GameStatus.game) && !PanelQuit.gameObject.activeSelf) {
				if(isTimeScale)
					return;
				isTimeScale = true;
				PanelQuit.gameObject.SetActive (true);
				gameStatus = GameStatus.ready;
				LeanTween.scale(PanelQuit, new Vector2(1f,1f), 0.2f).setOnComplete(() => {
					Time.timeScale = 0;
					isTimeScale = false;
				});

			}
		}
		#endif

	}

	void OnApplicationPause(bool pauseStatus){
		if (playinfo.UseSpeak == 1) {
			if (pauseStatus) {
				Time.timeScale = 0;
				gameStatus = GameStatus.ready;
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
				gameStatus = GameStatus.game;
				Time.timeScale = 1f;
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
		if (playinfo.UseSpeak == 1) {
			#if UNITY_ANDROID
			using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "STTUtils")) {
				jc.CallStatic ("destroy");
			}
			#endif
			#if UNITY_IOS
			sttDestroy();
			#endif
		} else {
			#if UNITY_ANDROID
			using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "TTSUtils")) {
				jc.CallStatic ("destroy");
			}
			#endif
			#if UNITY_IOS
			//여긴 필요없음
			#endif
		}
	}

	WordScript nextTempWord(){
		WordScript nextWord = null;
		foreach (WordScript word in wordPool) {
			if (word.rect.gameObject.activeSelf == false) {
				nextWord = word;
			}
		}

		if (nextWord == null) {
			// add obj
			RectTransform nextRect = Instantiate (PrefabWord).GetComponent<RectTransform> ();
			Text nextText = nextRect.GetChild (0).GetComponent<Text> ();
			Text nextTextExp = nextRect.GetChild (1).GetComponent<Text> ();
			nextWord = new WordScript (nextRect, nextText, nextTextExp, playinfo.speed);
			wordPool.Add (nextWord);
		}

		nextWord.rect.localPosition = new Vector3 (0, top, 0);
		nextWord.rect.localRotation = new Quaternion (0, 0, 0, 0);
		nextWord.rect.localScale = new Vector3 (1f, 1f, 1f);
		nextWord.text.text = playinfo.pack.words [Random.Range (0, (int)playinfo.wordLevel)];
		nextWord.setExp (playinfo.wordLevel, playinfo.UseSpeak);
		nextWord.item = null;
		nextWord.speed = playinfo.speed;
		return nextWord;
	}

	void applyResult(){
		// apply result
		if (gameResult.clear) {
			// set item
			bool isItem = false;
			if (playinfo.pattern >= GamePattern.item) {
				gameResult.getItem = new ItemScript (playinfo.pattern);
				int index = (int)gameResult.getItem.type;
				if (index < 5) {
					playinfo.PlayerItem [index] += 1;
					PlayerPrefs.SetInt (Constant.playerItem [index], playinfo.PlayerItem [index]);

					//change ImageItem's image
					Image ImageItem = TextEarnedItem.transform.GetChild (0).GetComponent<Image> ();
					ImageItem.sprite = SpriteItems [index];
					isItem = true;
				}
			}
			if (!isItem) {
				TextEarnedItem.SetActive (false);
			}

			// set exp
			playinfo.PlayerExp += gameResult.getExp;
			if (playinfo.PlayerExp >= playinfo.PlayerLevel * 10) {
				playinfo.PlayerExp -= playinfo.PlayerLevel * 10;
				playinfo.PlayerLevel += 1;
			}
			untilExp = (float)playinfo.PlayerExp / (playinfo.PlayerLevel * 10);

			// save changes
			PlayerPrefs.SetInt (Constant.playerLevel, playinfo.PlayerLevel);
			PlayerPrefs.SetInt (Constant.playerExp, playinfo.PlayerExp);
			if (playinfo.LastStage == playinfo.StageLimit[playinfo.UseSpeak] - 1) {
				PlayerPrefs.SetInt (playinfo.LastPackage + Constant.StageLimit[playinfo.UseSpeak], ++playinfo.StageLimit[playinfo.UseSpeak]);
			}

			// setting for result window
			TextResultExp.text = gameResult.getExp.ToString ();
			if (playinfo.LastStage.Equals (playinfo.pack.stageNum - 1))
				ButtonNext.SetActive (false);

			playinfo.playClip (PlayInfo.AudioIndex.SFX_Success_02);

		} else {
			// setting for result window
			PanelClear.SetActive (false);
			PanelOver.SetActive (true);
			ButtonNext.SetActive (false);

			playinfo.playClip (PlayInfo.AudioIndex.jazzy_chords);
		}

		// result window
		TextResultPlayer.text = "LV" + playinfo.PlayerLevel;

		PanelResult.gameObject.SetActive (true);
		LeanTween.scale (PanelResult, new Vector2 (1f, 1f), 0.2f).setOnComplete (() => {
			gameStatus = GameStatus.result;
			if(PlayerPrefs.HasKey(Constant.isReview) == false){
				PanelReview.gameObject.SetActive(true);
				LeanTween.scale(PanelReview.GetChild(0).GetComponent<RectTransform>(), new Vector2(1f,1f),0.2f).setOnComplete(() => {
					PlayerPrefs.SetInt(Constant.isReview, 1);
				});
			}

		});
	}

	public bool submitAnswer(string answer){
		if(gameStatus.Equals(GameStatus.game) && lifegage > 0){
			string lower = answer.ToLower ();
			bool isBomb = false;

			foreach (WordScript word in wordPool) {
				if (word.isActive) {
					if (lower.Equals (word.text.text)) {
						gameResult.getExp += word.exp;
						showExp (word.exp);
						word.isActive = false;
						activeWords.Remove (word);
						effectAnswer(word.rect);

						// random item
						if (word.item != null) {
							effectAnswerRandomItem(word.rect);

							if (word.item.type.Equals(ItemScript.ItemType.bomb))
								useItem (((int)word.item.type).ToString ());
							else
								isBomb = true;
						}

						if (isBomb)
							break;
						else
							return true;
					}
				}
			}

			if (isBomb) {
				if (activeWords.Count == 0) {
					return true;
				}

				ShuffleList (activeWords);
				foreach (WordScript word in activeWords) {
					word.isActive = false;
				}

				if (playinfo.PlayerItem [4] > 0) {
					// dodge bomb
					effectDodgeBomb ();
					useItem ("4");

				} else {
					// bomb
					effectBomb();
				}

				activeWords.Clear ();
				return true;
			}
		}
		return false;
	}

	void showExp(int exp){
		Text t = null;
		Vector3 v;
		for (int i = 0; i < TextExps.Count; i++) {
			t = TextExps [i];
			if (t.gameObject.activeSelf == false) {
				v = t.rectTransform.localPosition;
				v.x = 0; v.y = i * 50f;
				t.rectTransform.localPosition = v;
				t.gameObject.SetActive (true);
				break;
			}
		}

		if (t == null) {
			// add textexp
			t = Instantiate (PrefabTextExp).GetComponent<Text> ();
			t.rectTransform.SetParent (textExpsParent);
			v = t.rectTransform.localScale;
			v.x = 1f; v.y = 1f; v.z = 1f;
			t.rectTransform.localScale = v;
			v = t.rectTransform.localPosition;
			v.x = 0;
			v.y = TextExps.Count * 50f;
			t.rectTransform.localPosition = v;
		}

		t.text = "+" + exp.ToString ();

		LeanTween.alphaText(t.rectTransform, 0, 1f).setOnComplete (() => {
			t.gameObject.SetActive(false);
			LeanTween.alphaText(t.rectTransform, 1f, 0);
		});

		return;
	}

	public void useItem(string item){
		if (gameStatus.Equals (GameStatus.game)) {
			bool isUsed = true;
			int index = int.Parse (item);

			if (playinfo.PlayerItem [index] > 0) {
				switch ((ItemScript.ItemType)index) {
				case ItemScript.ItemType.removeLast:
					//find the undermost one
					if (activeWords.Count == 0) {
						isUsed = false;
						break;
					}

					WordScript maxY = activeWords [0];
					for (int i = 1; i < activeWords.Count; i++)
						if (maxY.rect.localPosition.y < activeWords [i].rect.localPosition.y)
							maxY = activeWords [i];

					maxY.isActive = false;
					activeWords.Remove (maxY);
					effectEraser (maxY.rect);
					break;
				case ItemScript.ItemType.removeAll:
					if (activeWords.Count == 0) {
						isUsed = false;
						break;
					}

					isUsed = effectRain ();
					break;
				case ItemScript.ItemType.stoping:
					isUsed = effectSandglass();
					break;
				case ItemScript.ItemType.healing:
					isUsed = effectRecover ();
					break;
				case ItemScript.ItemType.dodgeBomb:
					break;
				default:
					return;
				}

				if (isUsed) {
					playinfo.PlayerItem [index] -= 1;
					PlayerPrefs.SetInt (Constant.playerItem [index], playinfo.PlayerItem [index]);

					TextItem [index].text = playinfo.PlayerItem [index].ToString ();
				}
			}
		}
	}

	// called by startListening in OnResult method
	public void STTresult(string results){
		if (results.Equals ("_error") == false) {
			JSONObject jsonResult = new JSONObject (results);
			string[] inputs = new string[jsonResult.Count];
			bool isAnswer = false;
			Color c = Color.red;

			for (int i = 0; i < jsonResult.Count; i++) {
				inputs [i] = jsonResult [i].str;
				if (submitAnswer (inputs [i])) {
					isAnswer = true;
					TextInput.text = inputs [i];

					if (i == 0) {
						c = Color.black;
						gameResult.getExp += (int)playinfo.wordLevel / 100;
						showExp ((int)playinfo.wordLevel / 100);
					} else {
						c = Color.gray;
					}
				}
			}

			if (isAnswer == false) {
				TextInput.text = inputs [0];
			}

			TextInput.color = c;
		} else {
			TextInput.text = "";
		}

		#if UNITY_ANDROID
		using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "STTUtils")) {
			jc.CallStatic ("destroy");
		}
		#endif
		#if UNITY_IOS
		sttSoundBack();
		#endif

		// return to initial
		for (int i = 0; i < 4; i++) {
			if (volumes [i].activeSelf)
				volumes [i].SetActive (false);
		}
		ButtonSpeak.SetActive(true);
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
		if (gameStatus.Equals (GameStatus.game)) {
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
		if (gameStatus.Equals (GameStatus.game)) {
			selectedKeys.Add (new KeyboardButton.MatchDownUp (btn, btn));

			if (btn.isBackDown && sb.Length > 0) {
				sb.Remove (sb.Length - 1, 1);
				TextInput.text = sb.ToString ();
			}
		}
	}

	public void keyUp(KeyboardButton btn, PointerEventData eventData){
		if (gameStatus.Equals (GameStatus.game)) {
			KeyboardButton.MatchDownUp removeOne = null;

			foreach (KeyboardButton.MatchDownUp match in selectedKeys) {
				if (match.downKey.Equals (btn)) {
					if (match.currentKey.key.Equals ("Enter")) {
						if (submitAnswer (sb.ToString ())) {
							#if UNITY_ANDROID
							using (AndroidJavaClass jc = new AndroidJavaClass (Constant.AndroidPackage + "TTSUtils")) {
								jc.CallStatic ("speak", new object[]{ sb.ToString () });
							}
							#endif
							#if UNITY_IOS
							ttsSpeak(sb.ToString ());
							#endif
						}
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
		if (gameStatus.Equals (GameStatus.game)) {
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
		if (gameStatus.Equals (GameStatus.game)) {
			if (btn.selected)
				btn.image.color = btn.colors.normalColor;
		}
	}

	public void openQuit(){
		if (gameStatus.Equals (GameStatus.ready) || isTimeScale)
			return;
		isTimeScale = true;
		PanelQuit.gameObject.SetActive (true);
		gameStatus = GameStatus.ready;

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
		playinfo.loadScene = Constant.StageScene;

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		//fade
		LeanTween.alpha (LoadImage, 1f, 0.4f).setOnComplete (() => {
			SceneManager.LoadScene (Constant.MiddleScene);
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
			gameStatus = GameStatus.game;	
			isTimeScale = false;
		});

	}

	public void noKeyCancel(){
		if (isTimeScale)
			return;
		isTimeScale = true;
		Time.timeScale = 1f;

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		LeanTween.scale (PanelNoKey, new Vector2 (0, 0), 0.2f).setOnComplete (() => {
			PanelNoKey.gameObject.SetActive (false);
			isTimeScale = false;
		});

	}

	public void retryGame(){
		if (isGo == false) {
			playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

			if (playinfo.PlayerKey > 0) {
				if (playinfo.pack.stages [playinfo.LastStage] != null) {
					isGo = true;
					if (playinfo.PlayerKey == 10) {
						playinfo.saveKeyTime ();
					}
					playinfo.loadScene = Constant.GameScene;
					playinfo.pack.stages [playinfo.LastStage].setPlayinfo (playinfo);
					playinfo.maxLifegage = 100f + (float)playinfo.PlayerLevel * 1f;
					playinfo.PlayerKey -= 1;
					PlayerPrefs.SetInt (Constant.playerKey, playinfo.PlayerKey);

					LeanTween.alpha (LoadImage, 1f, 0.4f).setOnComplete (() => {
						SceneManager.LoadScene (Constant.MiddleScene);
					
					});
//				Destroy (this);
				}
			} else {
				PanelNoKey.gameObject.SetActive (true);
				LeanTween.scale (PanelNoKey, new Vector2 (1f, 1f), 0.2f);
			}
		}
	}

	public void nextStage(){
		if (isGo == false) {
			playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

			if (playinfo.PlayerKey > 0) {
				if (playinfo.pack.stages [++playinfo.LastStage] != null) {
					isGo = true;
					if (playinfo.PlayerKey == 10) {
						playinfo.saveKeyTime ();
					}
					playinfo.loadScene = Constant.GameScene;
					playinfo.pack.stages [playinfo.LastStage].setPlayinfo (playinfo);
					playinfo.maxLifegage = 100f + (float)playinfo.PlayerLevel * 1f;
					playinfo.PlayerKey -= 1;
					PlayerPrefs.SetInt (Constant.playerKey, playinfo.PlayerKey);
					PlayerPrefs.SetInt (playinfo.LastPackage + Constant.LastStage, playinfo.LastStage);
					LeanTween.alpha (LoadImage, 1f, 0.4f).setOnComplete (() => {
						SceneManager.LoadScene (Constant.GameScene);

					});
//				Destroy (this);
				} else {
					playinfo.LastStage -= 1;
				}
			} else {
				PanelNoKey.gameObject.SetActive (true);
				LeanTween.scale (PanelNoKey, new Vector2 (1f, 1f), 0.2f);
			}
		}
	}

	public void goShop(){
		if (isGo == false) {
			isGo = true;
			playinfo.loadScene = Constant.ShopScene;
			playinfo.prevShop = Constant.StageScene;

			playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

			//fade
			LeanTween.alpha (LoadImage, 1f, 0.4f).setOnComplete (() => {
				UnityEngine.SceneManagement.SceneManager.LoadScene (Constant.MiddleScene);
				//			Destroy (this);
			});
		}
	}

	public void goReview(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		Application.OpenURL (Constant.ReviewURL);
	}

	public void reviewCancel(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		LeanTween.scale (PanelReview.GetChild (0).GetComponent<RectTransform> (), new Vector2 (0, 0), 0.2f).setOnComplete (() => {
			PanelReview.gameObject.SetActive (false);
		});
	}

	// takes 1s
	void effectEraser(RectTransform word){
		playinfo.playClip (PlayInfo.AudioIndex.Kitten_Meow);

		ImageEraser.gameObject.SetActive (true);
		ImageEraser.position = word.position;

		LeanTween.alpha (word, 0, 1f).setOnComplete (() => {
			word.gameObject.SetActive(false);
			LeanTween.alpha(word, 1f, 0);
		});
		LeanTween.moveX (ImageEraser, -word.rect.width * 0.5f, 0.1f).setOnComplete (() => {
			LeanTween.moveX (ImageEraser, word.rect.width * 0.5f, 0.2f).setOnComplete (() => {
				LeanTween.moveX (ImageEraser, -word.rect.width * 0.5f, 0.2f).setOnComplete (() => {
					LeanTween.alpha (ImageEraser, 0, 0.5f);
					LeanTween.moveX (ImageEraser, word.rect.width * 0.5f, 0.5f).setOnComplete(() => {
						ImageEraser.gameObject.SetActive(false);
						LeanTween.alpha(ImageEraser, 1f, 0);
					});
				});
			});
		});
	}

	// takes 1.5s
	bool effectRain(){
		if (ParticleSystemRain.isPlaying)
			return false;

		playinfo.playClip (PlayInfo.AudioIndex.Rain_Ending);

		ParticleSystemRain.Play ();

		foreach (WordScript word in activeWords) {
			word.isActive = false;
			LeanTween.alpha (word.rect, 0, Random.value + 0.5f).setOnComplete (() => {
				word.rect.gameObject.SetActive(false);
				LeanTween.alpha(word.rect, 1f, 0);
			});
		}
		activeWords.Clear ();
		return true;
	}

	// takes 0.5s
	bool effectRecover(){
		if (ParticleSystemRecover.isPlaying || lifegage >= playinfo.maxLifegage)
			return false;

		playinfo.playClip (PlayInfo.AudioIndex.magic_sound_1);

		ParticleSystemRecover.Play ();

		lifegage += playinfo.maxLifegage * 0.3f;
		untilLifegage = lifegage / playinfo.maxLifegage;
		return true;
	}

	// takes 3s
	bool effectSandglass(){
		if (isStop)
			return false;

		playinfo.playClip (PlayInfo.AudioIndex.sandfall4);

		isStop = true;
		ImageSandglass.gameObject.SetActive (true);

		LeanTween.alpha (sandglasses[4], 1f, 0.2f);
		LeanTween.moveY (ImageSandglass, 5f, 0.1f).setOnComplete (() => {
			LeanTween.alpha(sandglasses[3], 1f, 0);
			LeanTween.alpha(sandglasses[4], 0, 0.3f).setOnComplete(() => {
				LeanTween.alpha(sandglasses[2], 1f, 0f);
				LeanTween.alpha(sandglasses[3], 0, 0.35f).setOnComplete(() => {
					LeanTween.alpha(sandglasses[1], 1f, 0f);
					LeanTween.alpha(sandglasses[2], 0, 0.3f).setOnComplete(() => {
						LeanTween.rotate(sandglasses[0], 180f, 0).setOnComplete(() => {
							LeanTween.alpha(sandglasses[0], 1f, 0f);
							LeanTween.alpha(sandglasses[1], 0, 0.35f).setOnComplete(() => {
								LeanTween.rotate(sandglasses[0], 180f, 0.2f).setOnComplete(() => {
									LeanTween.alpha(sandglasses[0], 0, 0);
									LeanTween.alpha(sandglasses[4], 1f, 0).setOnComplete(() => {
										LeanTween.alpha(sandglasses[3], 1f, 0f);
										LeanTween.alpha(sandglasses[4], 0, 0.3f).setOnComplete(() => {
											LeanTween.alpha(sandglasses[2], 1f, 0f);
											LeanTween.alpha(sandglasses[3], 0, 0.35f).setOnComplete(() => {
												LeanTween.alpha(sandglasses[1], 1f, 0f);
												LeanTween.alpha(sandglasses[2], 0, 0.3f).setOnComplete(() => {
													LeanTween.rotate(sandglasses[0], 180f, 0).setOnComplete(() => {
														LeanTween.alpha(sandglasses[0], 1f, 0f);
														LeanTween.alpha(sandglasses[1], 0, 0.35f).setOnComplete(() => {
															LeanTween.alpha(sandglasses[0], 0, 0.2f).setOnComplete(() => {
																ImageSandglass.gameObject.SetActive(false);
																LeanTween.rotate(sandglasses[0], 180f, 0);
															});
															LeanTween.moveY(ImageSandglass, -5f, 0.1f).setOnComplete(() => {
																 isStop = false;
															});
														});
													});
												});
											});
										});
									});
								});
							});
						});
					});
				});
			});
		});

		return true;
	}

	// takes 0.4s
	void effectAnswer(RectTransform word){
		LeanTween.moveX (word, word.rect.width * 0.3f * (Random.value * 2f - 1f), 0.2f);
		LeanTween.moveY (word, word.localPosition.y + 300f, 0.4f);
		LeanTween.rotate (word, -90f, 0.2f);
		LeanTween.alpha (word, 0, 0.4f).setOnComplete (() => {
			word.gameObject.SetActive (false);
			LeanTween.alpha (word, 1f, 0);
		});
	}

	void effectAnswerRandomItem(RectTransform word){
		playinfo.playClip (PlayInfo.AudioIndex.water_click);

		Vector2 pos = word.localPosition;
		pos.x += 350f;
		pos.x /= 700f;
		pos.y += 600f;
		pos.y /= 1200f;
		RippleEffect.Emit (pos);
	}

	// takes 0.5s
	void effectBomb(int i = 0){
		RectTransform currWord = activeWords [i].rect;
		float currDamage = activeWords [i].damage;
		float toX = Random.value * 600f - 300f;
		float degree = Mathf.Atan2 (Mathf.Abs (toX), currWord.localPosition.y + 600f) * Mathf.Rad2Deg;
		if (toX < 0) {
			degree = 90f - degree;
		} else {
			degree += 90f;
		}

		LeanTween.rotate (currWord, degree, 0.1f);
		LeanTween.moveX (currWord, toX, 0.5f);
		LeanTween.moveY (currWord, -800f, 0.5f).setOnComplete (() => {
			playinfo.playClip(PlayInfo.AudioIndex.water_click);

			currWord.gameObject.SetActive(false);

			// damage to lifegage
			lifegage -= currDamage;
			if (lifegage < 0)
				untilLifegage = 0;
			else
				untilLifegage = lifegage / playinfo.maxLifegage;
		});

		// check last
		if (++i >= activeWords.Count)
			return;
		else
			LeanTween.delayedCall (Random.value * 0.2f + 0.1f, () => {
				effectBomb (i);
			});
	}

	// takes 1s
	void effectDodgeBomb(int i = 0){
		RectTransform currWord = activeWords [i].rect;
		float toX = Random.value * 600f - 300f;
		float degree = Mathf.Atan2 (Mathf.Abs (toX), currWord.localPosition.y + 600f) * Mathf.Rad2Deg;
		if (toX < 0) {
			degree = 90f - degree;
		} else {
			degree += 90f;
		}

		LeanTween.rotate (currWord, degree, 0.1f);
		LeanTween.moveX (currWord, toX, 0.5f);
		LeanTween.moveY (currWord, -400f, 0.5f).setOnComplete (() => {
			playinfo.playClip(PlayInfo.AudioIndex.ping);

			LeanTween.moveY(currWord, -350f, 0.5f);
			LeanTween.alpha(currWord, 0, 0.5f).setOnComplete(() => {
				currWord.gameObject.SetActive(false);
				LeanTween.alpha(currWord, 1f, 0);
			});
		});

		// check last
		if (++i >= activeWords.Count)
			return;
		else
			LeanTween.delayedCall (Random.value * 0.2f + 0.1f, () => {
				effectDodgeBomb (i);
			});
	}

	void ShuffleList<T>(List<T> list){
		int idx;
		T old;

		for (int i = 0; i < list.Count; i++)
		{
			idx = Random.Range(0, list.Count);
			old = list[i];
			list[i] = list[idx];
			list[idx] = old;
		}
	}

}
