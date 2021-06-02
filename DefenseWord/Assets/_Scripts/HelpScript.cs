using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HelpScript : MonoBehaviour {
	public RectTransform[] PanelTutorial;
	public RectTransform PanelExit;
	public RectTransform FadeImage;
	public Transform PanelDot;
	public GameObject PanelHide;
	public GameObject PrefabDot;

	List<GameObject> Dot;
	PlayInfo playinfo;
	Vector2 fp, lp, pp;
	int currentIndex;
	float move;
	float deltaMove;
	float DragDistanceX;
	float DragDistanceY;
	bool isMove;
	bool isMoveX;
	bool isMoveY;
	bool isGoBack;
	bool isEndFade;
	bool isFirst;

	void Start () {
		//initialize
		playinfo = PlayInfo.instance;
		Dot = new List<GameObject> ();
		isEndFade = false;
		isFirst = false;
		move = 0;
		currentIndex = 0;
		DragDistanceX = 100f; // 1/4 width
		DragDistanceY = 100f; // 1/4 height

		LeanTween.alpha (FadeImage, 0, 0.5f).setOnComplete (() => {
			isEndFade = true;
		});

		// make dots
		int pageNum = PanelTutorial[(int)playinfo.helpMode].childCount-1;
		RectTransform r;
		Vector3 v;
		GameObject g;
		for (int i = 0; i < pageNum; i++) {
			r = Instantiate (PrefabDot).GetComponent<RectTransform> ();
			r.SetParent (PanelDot);
			v = r.localPosition;
			v.x = (i - pageNum / 2) * 40f;
			v.y = 0;
			r.localPosition = v;

			g = r.GetChild (0).gameObject;
			if (i > 0)
				g.SetActive (false);
			Dot.Add (g);
		}

		if (PlayerPrefs.HasKey (Constant.isFirst) == false) {
			PanelHide.SetActive (false);
			isFirst = true;
		}

		// set strings
		if (playinfo.helpMode.Equals (HelpMode.TutorialGame)) {
			PanelTutorial [0].GetChild (0).GetComponent<Text> ().text = Constant.StringHelpGameTutorial [0];
			if (isFirst) {
				PanelTutorial [0].GetChild (0).GetChild (0).gameObject.SetActive (false);
			} else {
				PanelTutorial [0].GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpForiOS;
			}
			for (int i = 1; i < PanelTutorial [0].childCount; i++) {
				foreach (Transform t in PanelTutorial[0].GetChild(i)) {
					if (t.name.Equals ("ImageSS")) {
						switch (i) {
						case 1:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpPlayerBar;
							t.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpWord;
							t.GetChild (2).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpInputBar;
							break;
						case 2:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpPlayerBar;
							break;
						case 3:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpWord;
							t.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpInputBar;
							break;
						case 4:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpTargetWord;
							t.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpTyping;
							break;
						case 5:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpCatchedWord;
							t.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringGameResultEarnedExp;
							break;
						case 6:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpRandomItemWord;
							break;
						case 7:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpRemainTime;
							break;
						case 8:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpSpeechButton;
							break;
						case 9:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpSpeechVolume;
							break;
						case 10:
							t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpTypedWord;
							break;
						}
					} else if (t.name.Equals ("TextDesc")) {
						t.GetComponent<Text> ().text = Constant.StringHelpGameTutorial [i];
					}
				}
			}

		} else {
			foreach (RectTransform child in PanelTutorial[1]) {
				PanelTutorial [1].GetChild (0).GetComponent<Text> ().text = Constant.StringHelpItemTutorial [0];
				PanelTutorial [1].GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpForiOS;
				for (int i = 1; i < PanelTutorial [1].childCount; i++) {
					foreach (Transform t in PanelTutorial[1].GetChild(i)) {
						if (t.name.Equals ("ImageSS")) {
							switch (i) {
							case 1:
								t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpRemoverItem;
								t.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpWordToDisappear;
								break;
							case 2:
								t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpRainItem;
								t.GetChild (1).GetChild (3).GetComponent<Text> ().text = Constant.StringHelpWordsToDisappear;
								break;
							case 3:
								t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpSandglassItem;
								t.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpRemainTime;
								break;
							case 4:
								t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpRecoverItem;
								t.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpHPBar;
								break;
							case 5:
								t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringHelpBombPreventerItem;
								break;
							case 6:
								t.GetChild (0).GetChild (0).GetComponent<Text> ().text = Constant.StringGameResultEarnedItem;
								break;
							}
						} else if (t.name.Equals ("TextDesc")) {
							t.GetComponent<Text> ().text = Constant.StringHelpGameTutorial [i];
						}
					}
				}
			}

			PanelTutorial [0].gameObject.SetActive (false);
			PanelTutorial [1].gameObject.SetActive (true);
		}

		// set fonts
		PlayInfo.FontIndex font;
		if (Application.systemLanguage.Equals (SystemLanguage.Korean)) {
			font = PlayInfo.FontIndex.NotoSans_Bold;
		} else if (Application.systemLanguage.Equals (SystemLanguage.Japanese)) {
			font = PlayInfo.FontIndex.NotoSansCJKkr_Bold;
		} else {
			font = PlayInfo.FontIndex.NotoSansCJKjp_Bold;
		}
		playinfo.setFonts (font);
	}
	
	// Update is called once per frame
	void Update () {
		if (isEndFade) {
			#if UNITY_ANDROID
			if (!isFirst && Input.GetKeyUp (KeyCode.Escape)) {
				goMain ();
			}
			#endif

			if (!isGoBack || isFirst) {
				foreach (Touch touch in Input.touches) {
					if (touch.phase == TouchPhase.Began) {
						isMove = false;
						isMoveX = false;
						isMoveY = false;
						fp = touch.position;
						lp = touch.position;
					}

					if (touch.phase == TouchPhase.Moved) {
						pp = lp;
						lp = touch.position;
						Vector3 pos;

						if (isMoveX | isMoveY == false) {
							if (Mathf.Abs (lp.x - fp.x) > Mathf.Abs (lp.y - fp.y)) {
								isMoveX = true;
							} else if (!isFirst) {
								isMoveY = true;
							}
						}

						if (isMoveX) {
							move = lp.x - pp.x;

							foreach (RectTransform rect in PanelTutorial[(int)playinfo.helpMode]) {
								pos = rect.localPosition;
								pos.x += move;
								rect.localPosition = pos;
							}

						} else if (isMoveY) {
							move = lp.y - pp.y;

							foreach (RectTransform rect in PanelTutorial[(int)playinfo.helpMode]) {
								pos = rect.localPosition;
								pos.y += move;
								rect.localPosition = pos;
							}

							pos = PanelExit.localPosition;
							pos.y += move;
							PanelExit.localPosition = pos;
						}
					}

					if (touch.phase == TouchPhase.Ended) {
						isMove = true;

						if (Mathf.Abs (lp.x - fp.x) > DragDistanceX) {
							if (lp.x > fp.x) { //Right move
								if (currentIndex > 0) {
									currentIndex -= 1;
								}
							} else { //Left move
								if (currentIndex < PanelTutorial [(int)playinfo.helpMode].childCount - 1) {
									currentIndex += 1;
									if (currentIndex == PanelTutorial [(int)playinfo.helpMode].childCount - 1)
										isGoBack = true;
								}
							}

							// set dots
							for (int j = 0; j < Dot.Count; j++) {
								if (j == currentIndex)
									Dot [j].SetActive (true);
								else if (Dot [j].activeSelf)
									Dot [j].SetActive (false);
							}

						} else if (Mathf.Abs (lp.y - fp.y) > DragDistanceY) {
							if (lp.y < fp.y) { // down move
								isGoBack = true;
							}
						}

					}
				}
			}

			if (isMove) {
				deltaMove = 1400f * Time.deltaTime;
				if (setCenter ()) {
					if (!isFirst && isGoBack) {
						goMain ();
					}
					isMove = false;
				}
			}
		}
	}

	bool setCenter(){
		bool resultX = false;
		bool resultY = false;

		for (int i = 0; i < PanelTutorial [(int)playinfo.helpMode].childCount; i++) {
			resultX = setPosCenter (PanelTutorial [(int)playinfo.helpMode].GetChild (i), (i - currentIndex) * 700f);
			resultY = setPosCenter (PanelTutorial [(int)playinfo.helpMode].GetChild (i), isGoBack & isMoveY ? -1200f : 0, false);
		}

		setPosCenter (PanelExit, isGoBack & isMoveY ? 0 : 1200f, false);

		return resultX & resultY;
	}

	bool setPosCenter(Transform t, float until, bool isX = true) {
		bool result = false;
		Vector3 pos = t.localPosition;

		if (isX) {
			if (Mathf.Abs (pos.x - until) < deltaMove) {
				pos.x = until;
				result = true;
			} else if (pos.x < until) {
				pos.x += deltaMove;
			} else {
				pos.x -= deltaMove;
			}
		} else {
			if (Mathf.Abs (pos.y - until) < deltaMove * 2f) {
				pos.y = until;
				result = true;
			} else if (pos.y < until) {
				pos.y += deltaMove * 2f;
			} else {
				pos.y -= deltaMove * 2f;
			}
		}
		t.localPosition = pos;

		return result;
	}

	void goMain(){
		playinfo.isBackHelp = true;

		//white fade
		LeanTween.alpha (FadeImage, 1f, 0.4f).setOnComplete (() => {
			UnityEngine.SceneManagement.SceneManager.LoadScene(Constant.MainScene);
		});
	}

	public void selectKeyboard(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		playinfo.UseSpeak = 0;
		PlayerPrefs.SetInt (Constant.UseSpeak, 0);
		PlayerPrefs.SetInt (Constant.isFirst, 1);
		goMain ();
	}

	public void selectSpeak(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		playinfo.UseSpeak = 1;
		PlayerPrefs.SetInt (Constant.UseSpeak, 1);
		PlayerPrefs.SetInt (Constant.isFirst, 1);
		goMain ();
	}

	public enum HelpMode{
		TutorialGame = 0,
		TutorialItem
	}
}
