using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public enum SceneName{ MainScene, PlayBoardGameScene }
// image name

public enum BoardPrefabName {
	_1_f1=0,
	_1_f2=1,
	_1_f3=2,
	_1_m1=3,
	_1_m2=4,
	_1_m3=5,
	_2_f1=6,
	_2_f2=7,
	_2_f3=8,
	_2_m1=9,
	_2_m2=10,
	_2_m3=11,
	_3_f1=12,
	_3_f2=13,
	_3_f3=14,
	_3_m1=15,
	_3_m2=16,
	_3_m3=17,
	_4_f1=18,
	_4_f2=19,
	_4_f3=20,
	_4_m1=21,
	_4_m2=22,
	_4_m3=23,
	length=24,
}

public class GameManager{
	public static int MAX_GET_SOUL_NUM_IN_A_DAY = 1000;//testing...

	//BoardPrefabName -> 4x4 or 5x5(Block Size)
	int[] BoardPrefabSize = {
		4,4,4,4,4,4,4,4,4,4,4,4
	};

	string [] BoardPrefabState = new string [(int)BoardPrefabName.length];

	//DateTime _last_played_date;
	//int _today_get_soul_num = 0;//number of soul which is caught today


	//------Singletone
	static GameManager _instance;
	GameManager(){
	}
	public static GameManager GetInstance(){
		if (_instance == null)
			_instance = new GameManager ();
		return _instance;
	}

	BoardPrefabName _board_image_name;
	DontDestroyManager dontDestroyManager;
	SceneName current_scene = SceneName.MainScene;

	//------public methods
	public SceneName GetCurrentScene(){
		return current_scene;
	}
	
	public void ChangeScene(SceneName sn){
		current_scene = sn;
		SceneManager.LoadScene (sn.ToString());
	}

	public void ChangeScene(SceneName sn, BoardPrefabName bpn){
		current_scene = sn;
		_board_image_name = bpn;
		SceneManager.LoadScene (sn.ToString ());
	}

	public BoardPrefabName GetBoardImageName(){
		return _board_image_name;
	}

	public int GetBlockSize(){
		return BoardPrefabSize [(int)_board_image_name];
	}
	/*
	public int GetTodayGetSoulNum(){
		return _today_get_soul_num;
	}
	public void AddTodayGetSoulNum(){
		if (_today_get_soul_num + 1 > MAX_GET_SOUL_NUM_IN_A_DAY) {
			Debug.Log ("AddTodayGetSoulNum() can't occur event");//test
			return;
		}
		_today_get_soul_num++;
	}
	public void SetTodayGetSoulNum(int i){
		_today_get_soul_num = i;
	}
	*/
	public string GetBlockState()
	{
		return BoardPrefabState[(int)_board_image_name];
	}
	public string GetBlockState(BoardPrefabName bpn)
	{
		return BoardPrefabState[(int)bpn];
	}

	public void ResetBlockState()
	{
		BoardPrefabState[(int)_board_image_name] = "";
	}
	public void SetBlockState(string s)
	{
		Debug.Log("GameManager_ blockstate saved : " + s);
		BoardPrefabState[(int)_board_image_name] = s;
	}
	public void SetBlockState(BoardPrefabName bpn, string s)
	{
		BoardPrefabState[(int)bpn] = s;
	}
	
	public DontDestroyManager getDontDestroyManager(){
		if(dontDestroyManager == null){
			GameObject dontDestroyObj = GameObject.Find ("DontDestroy");
			if(dontDestroyObj == null){
				dontDestroyObj = GameObject.Instantiate (Resources.Load ("Prefab/" + "DontDestroy")) as GameObject;
				dontDestroyObj.name = "DontDestroy";
			}
			dontDestroyManager = dontDestroyObj.GetComponent<DontDestroyManager>();
		}
		return dontDestroyManager;
	}
}
