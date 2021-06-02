using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class MainScript : MonoBehaviour {
	enum ToggleState{
		left = 0,
		leftSpan,
		right,
		rightSpan,
		end
	}
	enum ToggleAnimate{
		//down
		toLeft = 0,
		toRight,
		toLeftSpan,
		toRightSpan,
		end
	}

//	public GameObject PrefabPackage;
	public RectTransform MainBack;
	public RectTransform PanelGame;
	public RectTransform PanelHelp;
	public RectTransform PanelQuit;
	public RectTransform FadeImage;
	public RectTransform ButtonGame;
	public RectTransform ButtonShop;
	public RectTransform ButtonHelp;
	public RectTransform ImageStart;
	public RectTransform TextStart;
	public RectTransform Packages;
	public GameObject PanelLicense;

	public Transform Title;
	public Transform ImagePlayer;
	public Image PanelBlur;

	ScrollRect ScrollRectGame;
	Slider SliderExp;
	Image ImageBGM;
	Image ImageSE;
	Image ImageCurrentVol;
	Image SliderCurrentBack;
	Material MaterialBlurUI;
	RectTransform SliderCurrentHandle;
	RectTransform SliderCurrentHandleArea;
	ToggleState toggleState;
	ToggleAnimate toggleAnim;
	Color gray, blue, white, black;

	PlayInfo playinfo;
	float diffX;
	float blurSize;
	int currentToggle;
	bool[] toggle;
	bool isClick;
	bool isToggle;
	bool isAnimationOver;
	bool isToggleAd;
	bool isBlur;

	void Start(){
		//initialize
		playinfo = PlayInfo.instance;
		gray = new Color (135f / 255f, 135f / 255f, 135f / 255f);
		blue = new Color (0, 128f / 255f, 1f);
		white = new Color (1f, 1f, 1f, 0);
		black = new Color (0, 0, 0, 0);
		toggle = new bool[2];

		toggle [0] = playinfo.RemoveAd;
		toggle [1] = playinfo.SavingMode;
		isToggleAd = false;
		isBlur = false;
		blurSize = 0;
		MaterialBlurUI = PanelBlur.material;
		MaterialBlurUI.SetFloat (Constant._blurSizeXY, 0);

		Color c;
		if (playinfo.isBackHelp) {
			c = Color.white;
			playinfo.isBackHelp = false;
		} else {
			c = Color.black;
		}

		LeanTween.color (FadeImage, c, 0).setOnComplete (() => {
			FadeImage.gameObject.SetActive(true);
			LeanTween.alpha (FadeImage, 0, 0.7f);
		});

		// setting playerbar
		foreach (Transform child in ImagePlayer) {
			if (child.name.Contains ("Level")) {
				child.GetComponent<Text> ().text = "LV" + playinfo.PlayerLevel;

				SliderExp = child.transform.GetChild (0).GetComponent<Slider> ();
				SliderExp.value = (float)playinfo.PlayerExp / (playinfo.PlayerLevel * 10);

			} else if (child.name.Contains ("Button")) {
				if (child.name.Contains ("Key")) {
					playinfo.CurrentTextKey = child.GetChild (0).GetComponent<Text> ();
					playinfo.CurrentTextRemainTime = child.GetChild (1).GetComponent<Text> ();
					playinfo.CurrentTextKey.text = playinfo.PlayerKey.ToString ();

				} else if(child.name.Contains("Item")){
					int index = int.Parse (child.name.Substring (10));
					child.GetChild (0).GetComponent<Text> ().text = playinfo.PlayerItem [index].ToString();
				}
			} 
		}

		// setting packages
		ScrollRectGame = PanelGame.GetComponent<ScrollRect>();
		foreach (RectTransform package in PanelGame.transform.GetChild(0)) {
			if (package.name.Contains ("Practice") == false) {
				int packCode = int.Parse (package.name.Substring (7));
				if (playinfo.PackageLimit.Contains (packCode)) {
					package.GetComponent<Button> ().onClick.AddListener (
						delegate {
							goStage (package.name);
						}
					);
				} else {
					package.gameObject.SetActive (false);
				}
			}
		}

		// setting help panel's values
		Image SliderBack;
		Transform SliderHandle;
		foreach (Transform child in PanelHelp.transform) {
			if (child.name.Equals ("ImageBGM")) {
				ImageBGM = child.GetChild (1).GetComponent<Image> ();
				ImageBGM.fillAmount = playinfo.BGM;
			} else if (child.name.Equals ("ImageSE")) {
				ImageSE = child.GetChild (1).GetComponent<Image> ();
				ImageSE.fillAmount = playinfo.SE;

			} else if(child.name.Contains("ToggleAd")){
				child.GetChild (0).GetComponent<Text> ().text = Constant.StringMainHelpRemoveAd;
				SliderBack = child.GetChild(1).GetChild(0).GetComponent<Image> ();
				SliderHandle = child.GetChild(1).GetChild (1).GetChild (0).GetComponent<RectTransform> ();

				if (playinfo.RemoveAd) {
					SliderBack.color = blue;
					SliderHandle.localPosition = new Vector3 (30f, 0, 0);
				} else {
					SliderBack.color = gray;
					SliderHandle.localPosition = new Vector3 (-30f, 0, 0);
				}

			} else if(child.name.Contains("ToggleEco")){
				child.GetChild (0).GetComponent<Text> ().text = Constant.StringMainHelpSavingMode;
				SliderBack = child.GetChild(1).GetChild (0).GetComponent<Image> ();
				SliderHandle = child.GetChild(1).GetChild (1).GetChild (0).GetComponent<RectTransform> ();

				if (playinfo.SavingMode) {
					SliderBack.color = blue;
					SliderHandle.localPosition = new Vector3 (30f, 0, 0);
				} else {
					SliderBack.color = gray;
					SliderHandle.localPosition = new Vector3 (-30f, 0, 0);
				}
			} else if (child.name.Contains ("Tutorial")) {
				if (child.name.Contains ("Game")) {
					child.GetChild (0).GetComponent<Text> ().text = Constant.StringMainHelpAboutGame;
				} else {
					child.GetChild (0).GetComponent<Text> ().text = Constant.StringMainHelpAboutItem;
				}
				child.GetComponent<Button> ().onClick.AddListener (
					delegate {
						goTutorial (child.name);
					}
				);
			}
		}

		// set panel quit
		PanelQuit.GetChild(0).GetComponent<Text>().text = Constant.StringMainQuitMessage;

		// set main title
		if (Application.systemLanguage.Equals (SystemLanguage.Korean)) {
			Title.GetChild (1).gameObject.SetActive (true);
		} else if (Application.systemLanguage.Equals (SystemLanguage.Japanese)) {
			Title.GetChild (0).gameObject.SetActive (true);
		} else {
			Title.GetChild (0).gameObject.SetActive (true);
		}

		// locate ui with isFirst value
		if (playinfo.isFirst) {
			flickering ();

		} else {
			Vector3 v = ImagePlayer.localPosition;
			v.y = 525f;
			ImagePlayer.localPosition = v;

			Image i = ButtonGame.GetComponent<Image> ();
			c = i.color;
			c.a = 1f;
			i.color = c;

			i = ButtonShop.GetComponent<Image> ();
			c = i.color;
			c.a = 1f;
			i.color = c;

			i = ButtonHelp.GetComponent<Image> ();
			c = i.color;
			c.a = 1f;
			i.color = c;

			ImageStart.gameObject.SetActive (false);
		}

		// set fonts
		PlayInfo.FontIndex font;
		if (Application.systemLanguage.Equals (SystemLanguage.Korean)) {
			font = PlayInfo.FontIndex.NotoSansCJKkr_Bold;
		} else if (Application.systemLanguage.Equals (SystemLanguage.Japanese)) {
			font = PlayInfo.FontIndex.NotoSansCJKjp_Bold;
		} else {
			font = PlayInfo.FontIndex.NotoSans_Bold;
		}
		playinfo.setFonts(font);

	}

	void Update(){
		// get first touch
		if (playinfo.isFirst) {
			if (Input.anyKeyDown) {
				if (ImageStart.gameObject.activeSelf) {
					ImageStart.gameObject.SetActive (false);
					TextStart.gameObject.SetActive (false);
					
					RectTransform rectPlayer = ImagePlayer.GetComponent<RectTransform> ();
					
					LeanTween.moveY (rectPlayer, 525f, 1f);
					LeanTween.alpha (ButtonGame, 1f, 1f);
					LeanTween.alpha (ButtonShop, 1f, 1f);
					LeanTween.alpha (ButtonHelp, 1f, 1f).setOnComplete (() => {
						playinfo.isFirst = false;
					});
					
				} else {
					RectTransform rectPlayer = ImagePlayer.GetComponent<RectTransform> ();

					LeanTween.cancelAll ();
					LeanTween.alpha (FadeImage, 0, 0);
					LeanTween.moveY (rectPlayer, 525f, 0);
					LeanTween.alpha (ButtonGame, 1f, 0);
					LeanTween.alpha (ButtonShop, 1f, 0);
					LeanTween.alpha (ButtonHelp, 1f, 0).setOnComplete (() => {
						playinfo.isFirst = false;
					});
				}

			}
		} else {
			// resizes packages
			float size;
			if (PanelGame.gameObject.activeSelf) {
				foreach (RectTransform package in Packages) {
					size = 300f - Mathf.Abs(package.position.x-350f) * 0.25f;
					if (size < 0)
						size = 1f;
					package.sizeDelta = new Vector2 (size, size);
				}
			}
		}

		// blur animation in 0.5s
		if (isBlur && blurSize < 10f) {
			blurSize += Time.deltaTime*50f;
			if (blurSize > 10f) {
				blurSize = 10f;
			}
			MaterialBlurUI.SetFloat (Constant._blurSizeXY, blurSize);

		} else if(!isBlur && PanelBlur.gameObject.activeSelf){
			blurSize -= Time.deltaTime*50f;
			if (blurSize <= 0) {
				blurSize = 0;

				#if UNITY_IOS
				LeanTween.rotateX (MainBack.gameObject, 180f, 0).setOnComplete (() => {
					PanelBlur.gameObject.SetActive (false);
				});
				#else
				PanelBlur.gameObject.SetActive (false);
				#endif

			}
			MaterialBlurUI.SetFloat (Constant._blurSizeXY, blurSize);
		}

		#if UNITY_ANDROID
		// get cancel key
		if(Input.GetKeyUp(KeyCode.Escape))
		{
			if (PanelLicense.activeSelf){
				closeLicense();
			} else if (PanelHelp.gameObject.activeSelf) {
				closeHelp ();
			} else if (PanelGame.gameObject.activeSelf) {
				isBlur = false;
				PanelGame.gameObject.SetActive(false);
			} else if (PanelQuit.gameObject.activeSelf) {
				Application.Quit();

			} else {
				PanelQuit.gameObject.SetActive (true);
				LeanTween.alpha (PanelQuit, 1f, 0.5f).setOnComplete (() => {
					LeanTween.alpha(PanelQuit, 0, 1f).setOnComplete(() => {
						PanelQuit.gameObject.SetActive(false);
					});
				});
			}
		}
		#endif
	}

	void flickering(){
		LeanTween.alpha (ImageStart, 0, 1.5f).setOnComplete (() => {
			LeanTween.alpha(ImageStart, 1f, 1.5f);
		});
		LeanTween.alpha (TextStart, 0, 1.5f).setOnComplete (() => {
			LeanTween.alpha(TextStart, 1f, 1.5f).setOnComplete(() => {
				if(playinfo.isFirst)
					flickering();
			});
		});
	}

	void OnApplicationPause(bool pauseStatus)
	{
		if (!pauseStatus && PlayInfo.instance != null && PlayInfo.instance.isPaused) {
			// set the key
			foreach (Transform child in ImagePlayer) {
				if (child.name.Contains ("Button")) {
					if (child.name.Contains ("Key")) {
						playinfo.CurrentTextKey = child.GetChild (0).GetComponent<Text> ();
						playinfo.CurrentTextRemainTime = child.GetChild (1).GetComponent<Text> ();
						playinfo.CurrentTextKey.text = playinfo.PlayerKey.ToString ();
					}
				} 
			}
			PlayInfo.instance.isPaused = false;
		}
	}

	public void showPackage(){
		if (!playinfo.isFirst) {
			isBlur = true;

			#if UNITY_IOS
			LeanTween.rotateX (MainBack.gameObject, 180f, 0);
			#endif

			PanelBlur.gameObject.SetActive (true);
			PanelGame.gameObject.SetActive (true);

			playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

			// set scroll
			float activeCount = 0;
			float targetIndex = 0;
			foreach (Transform child in PanelGame.GetChild(0)) {
				if (child.gameObject.activeSelf) {
					if (child.name.Equals (playinfo.LastPackage)) {
						targetIndex = activeCount;
					}
					activeCount += 1;
				}
			}
			float pos = targetIndex / (activeCount - 1f);
			LeanTween.delayedCall (0.1f, () => {
				ScrollRectGame.horizontalNormalizedPosition = pos;
			});
		}
	}

	public void goStage(string package){
		if (!playinfo.isFirst) {
			//set values
			playinfo.CurrentTextKey = null;
			playinfo.CurrentTextRemainTime = null;

			playinfo.LastPackage = package;
			if (PlayerPrefs.HasKey (package + Constant.LastStage) == false) {
				playinfo.LastStage = 0;
				playinfo.LastStageIndex = 0;
			} else {
				playinfo.LastStage = PlayerPrefs.GetInt (package + Constant.LastStage);
				playinfo.LastStageIndex = PlayerPrefs.GetInt (package + Constant.LastStageIndex);
			}
			PlayerPrefs.SetString (Constant.LastPackage, package);
			for (int i = 0; i < 2; i++) {
				if (PlayerPrefs.HasKey (package + Constant.StageLimit[i])) {
					playinfo.StageLimit [i] = PlayerPrefs.GetInt (package + Constant.StageLimit [i]);
				} else {
					playinfo.StageLimit [i] = 1;
					PlayerPrefs.SetInt (package + Constant.StageLimit [i], 1);
				}	
			}

			playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

			// fade
			LeanTween.color(FadeImage, black, 0).setOnComplete(() => {
				LeanTween.alpha (FadeImage, 1f, 0.4f).setOnComplete (() => {
					UnityEngine.SceneManagement.SceneManager.LoadScene (Constant.StageScene);
				});
			});

		}
	}

	public void openShop(){
		if (!playinfo.isFirst) {
			//set values
			playinfo.CurrentTextKey = null;
			playinfo.CurrentTextRemainTime = null;
			playinfo.prevShop = Constant.MainScene;

			playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

			// fade
			LeanTween.color(FadeImage, black, 0).setOnComplete(() => {
				LeanTween.alpha (FadeImage, 1f, 0.4f).setOnComplete (() => {
					UnityEngine.SceneManagement.SceneManager.LoadScene (Constant.ShopScene);
				});
			});

		}
	}

	public void openHelp(){
		if (!playinfo.isFirst) {
			isBlur = true;

			#if UNITY_IOS
			LeanTween.rotateX (MainBack.gameObject, 180f, 0);
			#endif

			PanelBlur.gameObject.SetActive (true);
			PanelHelp.gameObject.SetActive (true);

			playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

			LeanTween.scale (PanelHelp, new Vector2 (1f, 1f), 0.2f);
		}
	}

	public void closeHelp(){
		// save changes
		playinfo.BGM = ImageBGM.fillAmount;
		playinfo.audio.volume = playinfo.BGM;
		playinfo.SE = ImageSE.fillAmount;
		playinfo.RemoveAd = toggle [0];
		playinfo.SavingMode = toggle [1];
		PlayerPrefs.SetFloat (Constant.BGM, playinfo.BGM);
		PlayerPrefs.SetFloat (Constant.SE, playinfo.SE);
		PlayerPrefs.SetInt (Constant.RemoveAd, playinfo.RemoveAd ? 1 : 0);
		PlayerPrefs.SetInt (Constant.SavingMode, playinfo.SavingMode ? 1 : 0);

		// apply settings
		if (playinfo.SavingMode) {
			Screen.sleepTimeout = SleepTimeout.SystemSetting;
		} else {
			Screen.sleepTimeout = SleepTimeout.NeverSleep;
		}

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		isBlur = false;
		LeanTween.scale (PanelHelp, new Vector2 (0, 0), 0.2f).setOnComplete(() => {
			PanelHelp.gameObject.SetActive (false);
		});
	}

	public void openLicense(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);
		PanelLicense.SetActive (true);
	}

	public void closeLicense(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);
		PanelLicense.SetActive (false);
	}

	public void goPractice(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		UnityEngine.SceneManagement.SceneManager.LoadScene (Constant.PracticeScene);
	}

	public void OnPointerDownVol(BaseEventData e){
		PointerEventData p = e as PointerEventData;
		ImageCurrentVol = p.pointerPressRaycast.gameObject.GetComponent<Image>();
		setVolByPointer (p);
	}

	public void OnDragVol(BaseEventData e){
		PointerEventData p = e as PointerEventData;
		setVolByPointer (p);
	}

	public void OnPointerUpVol(BaseEventData e){
		PointerEventData p = e as PointerEventData;
		setVolByPointer (p);
	}

	void setVolByPointer(PointerEventData p){
		float xAmount = p.position.x - (ImageCurrentVol.rectTransform.position.x - ImageCurrentVol.rectTransform.rect.width * 0.5f);
		if (xAmount <= 0) {
			ImageCurrentVol.fillAmount = 0;
		} else if (xAmount >= ImageCurrentVol.rectTransform.rect.width) {
			ImageCurrentVol.fillAmount = 1f;
		} else {
			ImageCurrentVol.fillAmount = xAmount / ImageCurrentVol.rectTransform.rect.width;
		}

		if (ImageCurrentVol.name.Equals ("ImageBGM")) {
			playinfo.BGM = ImageCurrentVol.fillAmount;
			playinfo.audio.volume = playinfo.BGM;
		} else {
			playinfo.SE = ImageCurrentVol.fillAmount;
			playinfo.audio.volume = playinfo.SE;
		}
	}

	public void OnPointerDownToggle(BaseEventData e){
		PointerEventData p = e as PointerEventData;
		Transform slider = p.pointerPressRaycast.gameObject.transform.parent;
		SliderCurrentBack = slider.GetChild (0).GetComponent<Image> ();
		SliderCurrentHandleArea = slider.GetChild (1).GetComponent<RectTransform> ();
		SliderCurrentHandle = SliderCurrentHandleArea.GetChild (0).GetComponent<RectTransform> ();
		isClick = true;
		isToggle = false;
		isAnimationOver = true;
		currentToggle = int.Parse (slider.name.Substring (6));

		if (toggle[currentToggle]) {
			toggleState = ToggleState.right;
			toggleAnim = ToggleAnimate.toRightSpan;

		} else {
			toggleState = ToggleState.left;
			toggleAnim = ToggleAnimate.toLeftSpan;
		}

		animateOnce ();
	}

	public void OnDragToggle(BaseEventData e){
		PointerEventData p = e as PointerEventData;
		isClick = false;

		// judge direction to set boolean value
		diffX = p.pointerCurrentRaycast.screenPosition.x - SliderCurrentBack.transform.position.x;
		if (Mathf.Abs (diffX) < SliderCurrentBack.rectTransform.rect.width * 0.5f) {
			//left->leftSpan or right->rightSpan
			if (toggleState.Equals (ToggleState.left)) { 
				toggleAnim = ToggleAnimate.toLeftSpan;
			} else if (toggleState.Equals (ToggleState.right)) {
				toggleAnim = ToggleAnimate.toRightSpan;
			}

		}else if (Mathf.Abs (diffX) < SliderCurrentBack.rectTransform.rect.width * 1.5f) {
			//leftSpan <-> rightSpan
			if (toggleState.Equals (ToggleState.leftSpan) && diffX > 0) {
				isToggle = true;
				toggleAnim = ToggleAnimate.toRightSpan;
			} else if (toggleState.Equals (ToggleState.rightSpan) && diffX < 0) {
				isToggle = true;
				toggleAnim = ToggleAnimate.toLeftSpan;
			}
		} else {
			//leftSpan->left or rightSpan->right
			if (toggleState.Equals (ToggleState.leftSpan) && diffX < 0) {
				toggleAnim = ToggleAnimate.toLeft;
			} else if (toggleState.Equals (ToggleState.rightSpan) && diffX > 0) {
				toggleAnim = ToggleAnimate.toRight;
				if (currentToggle == 0)
					isToggleAd = true;
			}
		}

		animateOnce ();
	}

	public void OnPointerUpToggle(BaseEventData e){
		isToggle = isClick;

		if (toggleState.Equals(ToggleState.left) || toggleState.Equals (ToggleState.leftSpan)) {
			toggleAnim = isClick ? ToggleAnimate.toRight : ToggleAnimate.toLeft;
		} else if (toggleState.Equals(ToggleState.right) || toggleState.Equals (ToggleState.rightSpan)) {
			toggleAnim = isClick ? ToggleAnimate.toLeft : ToggleAnimate.toRight;
		}

		if (currentToggle == 0 && toggleAnim.Equals (ToggleAnimate.toRight))
			isToggleAd = true;
		
		animateOnce ();
	}

	void animateOnce(){
		if (!isAnimationOver) {
			LeanTween.cancel (SliderCurrentHandle);
			LeanTween.cancel (SliderCurrentBack.rectTransform);
		}

		float moveX;
		Vector2 sizeDelta = SliderCurrentHandle.rect.size;
		Color c;
		switch (toggleAnim) {
		case ToggleAnimate.toLeft:
			moveX = -30f;
			sizeDelta.x = 60f;
			c = gray;
			toggleState = ToggleState.left;
			toggle [currentToggle] = false;
			break;
		case ToggleAnimate.toRight:
			moveX = 30f;
			sizeDelta.x = 60f;
			c = blue;
			toggleState = ToggleState.right;
			toggle [currentToggle] = true;
			break;
		case ToggleAnimate.toLeftSpan:
			moveX = -15f;
			sizeDelta.x = 90f;
			c = gray;
			toggleState = ToggleState.leftSpan;
			break;
		case ToggleAnimate.toRightSpan:
			moveX = 15f;
			sizeDelta.x = 90f;
			c = blue;
			toggleState = ToggleState.rightSpan;
			break;
		
		default:
			return;
		}

		if (isToggle) {
			isToggle = false;
			playinfo.playClip (PlayInfo.AudioIndex.SFX_Switch);
		}

		isAnimationOver = false;
		LeanTween.moveX(SliderCurrentHandle, moveX, 0.2f);
		LeanTween.size (SliderCurrentHandle, sizeDelta, 0.2f);
		LeanTween.color (SliderCurrentBack.rectTransform, c, 0.2f).setOnComplete (() => {
			isAnimationOver = true;
			if(isToggleAd && !playinfo.CanRemoveAd){
				// purchase remove ad($8.9)
				if(ShopScript.Purchase(8.9f)){
					playinfo.CanRemoveAd = true;
					PlayerPrefs.SetInt(Constant.CanRemoveAd, 1);
				}else{
					// return to initial
					isToggleAd = false;
					toggleAnim = ToggleAnimate.toLeft;
					animateOnce();
				}
			}
		});
	}

	public void goTutorial(string name){
		//set values
		playinfo.CurrentTextKey = null;
		playinfo.CurrentTextRemainTime = null;

		if (name.Contains ("Game")) {
			playinfo.helpMode = HelpScript.HelpMode.TutorialGame;
		} else {
			playinfo.helpMode = HelpScript.HelpMode.TutorialItem;
		}

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		//white fade
		LeanTween.color(FadeImage, white, 0).setOnComplete(() => {
			LeanTween.alpha (FadeImage, 1f, 0.4f).setOnComplete (() => {
				UnityEngine.SceneManagement.SceneManager.LoadScene (Constant.HelpScene);
			});
		});
	}

	public void OnPointerClickBlur(BaseEventData e){
		if (isBlur) {
			if (PanelHelp.gameObject.activeSelf) {
				isBlur = false;
				LeanTween.scale (PanelHelp, new Vector2 (0, 0), 0.2f).setOnComplete (() => {
					PanelHelp.gameObject.SetActive (false);
				});
			} else if (PanelGame.gameObject.activeSelf) {
				isBlur = false;
				PanelGame.gameObject.SetActive (false);
			}
		}
	}

	public void OnPointerClickLicense(BaseEventData e){
		closeLicense ();
	}
}
