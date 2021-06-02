using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StageScript : MonoBehaviour {
	public RectTransform LoadImage;
	public RectTransform FadeImage;
	public RectTransform PanelGames;
	public Transform PanelDot;
	public Image ImageSwitch;
	public GameObject PanelNoKey;
	public GameObject PrefabDot;
	public GameObject PrefabPanelGame;
	public Sprite SpriteSpeak;
	public Sprite SpriteKeyboard;

	PlayInfo playinfo;
	List<GameObject> Dot;
	Vector3 fp,pp,lp;
	bool isMove;
	bool isDragging;
	bool isGoStage;
	float DragDistance;
	float move;
	float deltaMove;

	// Use this for initialization
	void Start () {
		//initialize
		playinfo = PlayInfo.instance;

		LeanTween.alpha (FadeImage, 0, 0.7f);

		isMove = false;
		isDragging = false;
		isGoStage = false;
		move = 0;
		DragDistance = 175f; // 1/4 width
		Dot = new List<GameObject>();

		ImageSwitch.sprite = playinfo.UseSpeak == 1 ? SpriteSpeak : SpriteKeyboard;
		int packNum = int.Parse (playinfo.LastPackage.Substring (7));
		playinfo.pack = Constant.packages.Find (x => x.packageCode == packNum);
		int pageNum = playinfo.pack.stageNum / 9;
		RectTransform r;
		Vector3 v;
		GameObject g;
		for (int i = 0; i < pageNum; i++) {
			// make dots
			r = Instantiate (PrefabDot).GetComponent<RectTransform>();
			r.SetParent (PanelDot);
			v = r.localPosition;
			v.x = (i - pageNum / 2) * 40f;
			v.y = 0;
			r.localPosition = v;

			g = r.GetChild (0).gameObject;
			if (i == playinfo.LastStageIndex)
				g.SetActive (false);
			Dot.Add (g);

			// make panelgames
			r = Instantiate(PrefabPanelGame).GetComponent<RectTransform>();
			r.SetParent (PanelGames);
			v = r.localPosition;
			v.x = (i - playinfo.LastStageIndex) * 700f;
			v.y = 0;
			r.localPosition = v;
			v = r.localScale;
			v.Set (1f, 1f, 1f);
			r.localScale = v;

			foreach(RectTransform child in r){
				int stageNum = int.Parse (child.name.Substring (11)) + i * 9;
				Text t = child.GetChild (0).GetComponent<Text> ();
				t.text = (stageNum + 1).ToString ();
				if (stageNum < playinfo.StageLimit[playinfo.UseSpeak]) {
					child.GetComponent<Button> ().onClick.AddListener (
						delegate {
							stage (int.Parse (t.text)-1);
						}
					);
				} else {
					child.GetComponent<Image> ().color = Color.black;
				}
			}
		}

		// set panel no key strings
		PanelNoKey.transform.GetChild(0).GetComponent<Text>().text = Constant.StringNoKeyMessage;
		PanelNoKey.transform.GetChild (1).GetChild (0).GetComponent<Text> ().text = Constant.StringNoKeyConfirm;
		PanelNoKey.transform.GetChild (2).GetChild (0).GetComponent<Text> ().text = Constant.StringPanelCancel;

		// set fonts
		playinfo.setFonts(PlayInfo.FontIndex.BMJUA_ttf);

	}
	
	// Update is called once per frame
	void Update () {
		#if UNITY_ANDROID
		if(Input.GetKeyUp(KeyCode.Escape))
		{
			if (PanelNoKey.activeSelf) {
				noKeyCancel();
			} else {
				goBack ();
			}
		}
		#endif

		//Check the touch inputs
		foreach (Touch touch in Input.touches)
		{
			if (touch.phase == TouchPhase.Began)
			{
				isMove = false;
				fp = touch.position;
				lp = touch.position;
			}

			if (touch.phase == TouchPhase.Moved)
			{
				isDragging = true;
				pp = lp;
				lp = touch.position;
				move = lp.x - pp.x;
				Vector3 pos;
				foreach (RectTransform rect in PanelGames) {
					pos = rect.localPosition;
					pos.x += move;
					rect.localPosition = pos;
				}

			}

			if (touch.phase == TouchPhase.Ended)
			{
				isMove = true;

				if (Mathf.Abs(lp.x - fp.x) > DragDistance || Mathf.Abs(lp.y - fp.y) > DragDistance)
				{
					if (Mathf.Abs(lp.x - fp.x) > Mathf.Abs(lp.y - fp.y))
					{
						if (lp.x > fp.x) //Right move
						{
							if (playinfo.LastStageIndex > 0) {
								playinfo.LastStageIndex -= 1;
							}
						}
						else //Left move
						{
							if (playinfo.LastStageIndex < PanelGames.childCount - 1) {
								playinfo.LastStageIndex += 1;
							}
						}

						// set dots
						for (int j = 0; j < Dot.Count; j++) {
							if (playinfo.LastStageIndex.Equals (j))
								Dot [j].SetActive (false);
							else if (!Dot [j].activeSelf)
								Dot [j].SetActive (true);
						}
					}

				}

			}
		}

		if (isMove) {
			deltaMove = 1400f * Time.deltaTime;
			if (setCenter ()) {
				isMove = false;
				isDragging = false;
			}
		}
	}

	bool setCenter(){
		Vector3 pos;
		float until;
		bool result = false;

		for (int i = 0; i < PanelGames.childCount; i++) {
			pos = PanelGames.GetChild(i).localPosition;
			until = (i - playinfo.LastStageIndex) * 700f;

			if (Mathf.Abs(pos.x - until) < deltaMove) {
				pos.x = until;
				result = true;

			} else if (pos.x < until) {
				pos.x += deltaMove;

			} else {
				pos.x -= deltaMove;
			}

			PanelGames.GetChild(i).localPosition = pos;
		}

		return result;
	}

	public void goBack(){
		//set scene's values
		PlayerPrefs.SetInt (playinfo.LastPackage+Constant.LastStage, playinfo.LastStage);
		PlayerPrefs.SetInt (playinfo.LastPackage + Constant.LastStageIndex, playinfo.LastStageIndex);

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		// fade
		LeanTween.alpha (FadeImage, 1f, 0.4f).setOnComplete (() => {
			UnityEngine.SceneManagement.SceneManager.LoadScene (Constant.MainScene);
		});

	}

	//lead to purchase
	public void noKeyConfirm(){
		PlayerPrefs.SetInt(playinfo.LastPackage+Constant.LastStage, playinfo.LastStage);
		PlayerPrefs.SetInt (playinfo.LastPackage + Constant.LastStageIndex, playinfo.LastStageIndex);

		playinfo.prevShop = Constant.StageScene;

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		//white fade
		LeanTween.alpha (FadeImage, 1f, 0.4f).setOnComplete (() => {
			UnityEngine.SceneManagement.SceneManager.LoadScene (Constant.ShopScene);
		});
	}

	public void noKeyCancel(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		LeanTween.scale (PanelNoKey, new Vector2 (0, 0), 0.2f).setOnComplete (() => {
			PanelNoKey.SetActive (false);
		});
	}

	public void switchInput(){
		if (playinfo.UseSpeak == 1) {
			playinfo.UseSpeak = 0;
			ImageSwitch.sprite = SpriteKeyboard;

		} else {
			playinfo.UseSpeak = 1;
			ImageSwitch.sprite = SpriteSpeak;
		}

		PlayerPrefs.SetInt (Constant.UseSpeak, playinfo.UseSpeak);
		setStages ();

		playinfo.playClip (PlayInfo.AudioIndex.SFX_Switch);
	}

	void setStages(){
		for(int i=0; i<PanelGames.childCount; i++){
			foreach (RectTransform child in PanelGames.GetChild(i)) {
				Button b = child.GetComponent<Button> ();
				Image img = child.GetComponent<Image>();
				Text t = child.GetChild (0).GetComponent<Text> ();
				int stageNum = int.Parse (t.text) - 1;
				if (stageNum < playinfo.StageLimit [playinfo.UseSpeak]) {
					b.onClick.AddListener (
						delegate {
							stage (int.Parse (t.text) - 1);
						}
					);
					img.color = Color.white;
				} else {
					b.onClick.RemoveAllListeners ();
					img.color = Color.black;
				}
			}
		}
	}

	public void stage(int num){
		if(!isDragging && !isGoStage){
			playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

			if (playinfo.PlayerKey > 0) {
				if (playinfo.pack.stages [num] != null) {
					isGoStage = true;
					if (playinfo.PlayerKey == 10) {
						playinfo.saveKeyTime ();
					}

					playinfo.pack.stages [num].setPlayinfo (playinfo);
					playinfo.maxLifegage = 100f + (float)playinfo.PlayerLevel * 1f;
					playinfo.PlayerKey -= 1;
					playinfo.LastStage = num;
					PlayerPrefs.SetInt (Constant.playerKey, playinfo.PlayerKey);
					PlayerPrefs.SetInt (playinfo.LastPackage + Constant.LastStage, playinfo.LastStage);
					LeanTween.alpha (LoadImage, 1f, 0.4f).setOnComplete (() => {
						LoadImage.GetChild(0).gameObject.SetActive(true);
						UnityEngine.SceneManagement.SceneManager.LoadScene(Constant.GameScene);
						
					});
				}
			} else {
				PanelNoKey.SetActive (true);
				LeanTween.scale (PanelNoKey, new Vector2 (1f, 1f), 0.2f);
			}
		}
	}

}
