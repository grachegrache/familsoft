using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

// save/load local data
public class DontDestroyManager : MonoBehaviour {
	GameManager _game_manager;
	static int _soul_num;
	//static int _complete_picture_num;
	static string [] pictures;
	string _last_played_date;

	public SocialTool socialTool;
	public BlurManager blurManager;
	
	void Awake ()
	{
		//Don't Destroy
		DontDestroyOnLoad (gameObject);
		//if (FindObjectsOfType(GetType()).Length > 1) Destroy(gameObject);

		_game_manager = GameManager.GetInstance ();

		_soul_num = PlayerPrefs.GetInt ("_soul_num", 0);
		Debug.Log ("Start()_ soul num:" + _soul_num);

		//load board
		string [] names = Enum.GetNames (typeof (BoardPrefabName));
		pictures = new string [names.Length];
		for (int i = 0; i < names.Length; i++) {
			if (PlayerPrefs.HasKey (names [i])) {
				pictures [i] = PlayerPrefs.GetString (names [i]);
			}
		}

		//load board state 
		foreach (BoardPrefabName bpn in Enum.GetValues (typeof (BoardPrefabName))) {
			//GameManager.GetInstance().SetBlockState(bpn, PlayerPrefs.GetString(bpn.ToString()));
			PlayerPrefs.GetString (bpn.ToString ());
			//Debug.Log("Start() : " + bpn.ToString() + " -> " + PlayerPrefs.GetString(bpn.ToString()));
		}

		//SetTodayGetSoulNum
		/*
        _last_played_date = PlayerPrefs.GetString ("_last_played_date").Substring(0, "MM/DD/YYYY".Length);
        string now_date = DateTime.Today.ToString ().Substring(0, "MM/DD/YYYY".Length);

        if (_last_played_date.Equals(now_date)) {
            _game_manager.SetTodayGetSoulNum(PlayerPrefs.GetInt("_today_get_soul_num"));
        } else {
            _game_manager.SetTodayGetSoulNum (0);
        }*/

		LocalizeTool.loadLocalizeString ();
		socialTool = new SocialTool (this);
	}

	// Use this for initialization
	void Start ()
	{

	}

	// Update is called once per frame
	void Update ()
	{
		/*string now = DateTime.Now.ToString ();

		//time check
		if (_last_played_date != now.Substring(0, "MM/DD/YYYY".Length)) {
			_last_played_date = now.Substring(0, "MM/DD/YYYY".Length);
			PlayerPrefs.SetString ("_last_played_date", DateTime.Now.ToString ());
			_game_manager.SetTodayGetSoulNum (0);
		}*/

	}

	void OnDestroy ()
	{
		PlayerPrefs.SetInt ("_soul_num", _soul_num);
		Debug.Log ("DontDestroyManager_ OnDestroy()_ soul num:" + _soul_num);
		//PlayerPrefs.SetInt ("_complete_picture_num", _complete_picture_num);
		//Debug.Log ("OnDestroy() : " + _soul_num);

#if UNITY_ANDROID
		socialTool.SaveGame ();
#elif UNITY_IOS
#endif
		
	}

	public static int GetSoulNum(){
		return _soul_num;
	}
	public static void SetSoulNum(int i){
		_soul_num = i;
	}

	public static void SetCompletePicture(BoardPrefabName board){
		//save board
		string picture = board.ToString();
		//PlayerPrefs.SetString();
		//_complete_picture_num++;
		Debug.Log ("SetCompletePicture -> " + board.ToString());
	}

}
