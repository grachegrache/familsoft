using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;

public class MainSceneManager : MonoBehaviour {
	float DOT_INTERVAL_SIZE = 40f;

	public GameObject soul_popup;
	public GameObject quitToast;
	public GameObject mainIluust;
	public GameObject gallery;
	public GameObject dots;
	public Text soulText;

	GameManager game_manager;
	GameObject dot_active, dot_non_active;
	Sprite img_active, img_non_active;
	List<GameObject> dot_objs;

	void Awake ()
	{
		//PlayerPrefs.SetString ("_1_f1", "0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,14");
		bool isFirst = false;
		if (GameObject.Find ("DontDestroy") == null) {
			Instantiate (Resources.Load ("Prefab/" + "DontDestroy") as GameObject).name = "DontDestroy";
			isFirst = true;
		}

		game_manager = GameManager.GetInstance ();
		dot_active = Resources.Load ("Prefab/" + "DotActivePage") as GameObject;
		dot_non_active = Resources.Load ("Prefab/" + "DotNonActivePage") as GameObject;
		img_active = dot_active.GetComponent<Image> ().sprite;
		img_non_active = dot_non_active.GetComponent<Image> ().sprite;
		dot_objs = new List<GameObject> ();

		if (isFirst) {
			if (Application.systemLanguage == SystemLanguage.Korean) {
				mainIluust.transform.GetChild (0).GetChild (0).gameObject.SetActive (true);
				mainIluust.transform.GetChild (0).GetChild (1).gameObject.SetActive (false);
			} else {
				mainIluust.transform.GetChild (0).GetChild (0).gameObject.SetActive (false);
				mainIluust.transform.GetChild (0).GetChild (1).gameObject.SetActive (true);
			}
			mainIluust.SetActive (true);
		} else {
			ActiveGallery ();
		}

	}

	// Use this for initialization
	void Start ()
	{
		soulText.text = DontDestroyManager.GetSoulNum () + "";
		quitToast.transform.GetChild (0).GetComponent<Text> ().text = LocalizeTool.localizeString.msg_quit;
		//blurManager.setActive (true);
	}



	// Update is called once per frame
	void Update ()
	{
#if UNITY_ANDROID
		// get cancel key
		if (Input.GetKeyUp (KeyCode.Escape)) {
			if (soul_popup.activeSelf) {
				// close soul_popup
			} else if (quitToast.activeSelf) {
				Application.Quit ();
			} else {
				quitToast.SetActive (true);
			}
		}
#endif
	}

	//-----------Button Methods
	public void PlayBoard ()
	{
		//(image name)_complete
		string _image_name = EventSystem.current.currentSelectedGameObject.GetComponent<Image> ().sprite.name;

		if (soul_popup.activeSelf) {
			return;
		} else {
			string [] boardInfo = _image_name.Split ('_');
			int star = int.Parse (boardInfo [1]);
			if (star > 1) {
				string prevBoardComplete = "_" + (star - 1) + "_" + boardInfo [2] + "_complete";
				if (!PlayerPrefs.HasKey (prevBoardComplete)) {
					game_manager.getDontDestroyManager ().blurManager.popup (LocalizeTool.localizeString.didnt_complete);
					return;
				}
			}
		}

		//(image_name) -> BoardPrefName
		string _pref_name = _image_name.Substring (0, _image_name.Length - "_complete".Length);
		game_manager.ChangeScene (SceneName.PlayBoardGameScene, (BoardPrefabName)Enum.Parse (typeof (BoardPrefabName), _pref_name));
	}

	public void Soul ()
	{
		if (soul_popup.activeSelf)
			return;

		soul_popup.SetActive (true);
		//soul_popup.GetComponent<SoulPopUpManager> ()._have_to_init = true;
	}
	public bool GetPopUpActive ()
	{
		return soul_popup.activeSelf;
	}

	public void ActiveGallery ()
	{
		DragGalleryContentScript dragGalleryContentScript = gallery.transform.GetChild (0).GetChild (0).GetComponent<DragGalleryContentScript> ();
		foreach (Transform child in dragGalleryContentScript.transform) {
			Destroy (child.gameObject);
		}
		foreach (Transform child in dots.transform) {
			Destroy (child.gameObject);
		}
		gallery.SetActive (true);
		dragGalleryContentScript.loadGallery ();

		//Set Dots
		dot_objs.Clear ();
		int total_page_num = dragGalleryContentScript.GetTotalPageNum ();
		float dots_start_pos = DOT_INTERVAL_SIZE * (total_page_num - 1) / -2f;
		for (int i = 0; i < total_page_num; i++) {
			GameObject tmp_obj;
			if (i == 0) {
				tmp_obj = Instantiate (dot_active);

			} else {
				tmp_obj = Instantiate (dot_non_active);
			}
			tmp_obj.transform.SetParent (dots.transform);
			tmp_obj.transform.localPosition = new Vector3 (dots_start_pos + DOT_INTERVAL_SIZE * i, 0f, 0f);
			tmp_obj.name = "Dot" + i;
			dot_objs.Add (tmp_obj);
		}

		mainIluust.SetActive (false);
	}

	public void startClick ()
	{
		string board = PlayerPrefs.GetString ("recent", "_1_f1");
		game_manager.ChangeScene (SceneName.PlayBoardGameScene, (BoardPrefabName)Enum.Parse (typeof (BoardPrefabName), board));
	}

	public void SetGalleryPage ()
	{
		DragGalleryContentScript dragGalleryContentScript = gallery.transform.GetChild (0).GetChild (0).GetComponent<DragGalleryContentScript> ();
		dragGalleryContentScript.SetDirectPage ();

	}

	public void SetDotImage (int current_page_num, bool t_go_left_f_go_right)
	{
		int previous_page_num;
		if (t_go_left_f_go_right) {
			previous_page_num = current_page_num + 1;
		} else {
			previous_page_num = current_page_num - 1;
		}
		dot_objs [current_page_num - 1].GetComponent<Image> ().sprite = img_active;
		dot_objs [previous_page_num - 1].GetComponent<Image> ().sprite = img_non_active;
	}

	public void socialLogin ()
	{
		game_manager.getDontDestroyManager ().socialTool.socialLogin ();
	}
}
