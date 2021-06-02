using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Globalization;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class SoulPopUpManager : MonoBehaviour {   
	float PADDING = 50f;
	float SOUL_DISTANCE = 50f;//if soul is near by touch position less than this value, soul will be gotten
	const int CREATABLE_SOUL_MAX = 50;//max soul num which can created on the Screen
	const float SOUL_CREATE_TIME = 20f;//create soul per 30 seconds

	//public objects...
	public Text _remain_time_txt;
	public GameObject _soul_area;


	//PlayerPrefs variable...
	int _collectable_soul_num;
	string _last_opened_time;
	float _last_time_to_create_new_soul;

	//private variable...
	GameManager game_manager;
	List<GameObject> _list_souls;


	//-------------------RuntimeMethods
	void Awake(){
		//Initialize private Variable...
		game_manager = GameManager.GetInstance ();
		_list_souls = new List<GameObject> ();

		// Get Data from PlayerPrefs
		_collectable_soul_num = PlayerPrefs.GetInt ("_collectable_soul_num", 0);
		_last_opened_time = PlayerPrefs.GetString ("_last_opened_time", DateTime.Now.ToString ());
		_last_time_to_create_new_soul = PlayerPrefs.GetFloat ("_last_time_to_create_new_soul", SOUL_CREATE_TIME);

		// Set Data _collectable_soul_num, _last_time_to_create_new_soul
		long _second_difference = CheckSecondDifference (_last_opened_time);
		_second_difference += ((long)SOUL_CREATE_TIME - (long)_last_time_to_create_new_soul);
		if (_second_difference >= (CREATABLE_SOUL_MAX - _collectable_soul_num) * (long)SOUL_CREATE_TIME) {
			_collectable_soul_num = CREATABLE_SOUL_MAX;
			_last_time_to_create_new_soul = SOUL_CREATE_TIME;
		}
		else {
			_collectable_soul_num += (int)_second_difference / (int)SOUL_CREATE_TIME;
			_last_time_to_create_new_soul -= _second_difference % (int)SOUL_CREATE_TIME;
		}
	}

	void Start(){
		PlaceSoulsRandomly (_collectable_soul_num);
	}
	// Update is called once per frame
	void Update () {
		//Debug.Log ("Update()_ collectable soul num:"+_collectable_soul_num);
		CheckTouchInputs ();

		if (_collectable_soul_num < CREATABLE_SOUL_MAX) {
			_last_time_to_create_new_soul -= Time.deltaTime;
			_remain_time_txt.text = (int)_last_time_to_create_new_soul + "";

			if (_last_time_to_create_new_soul < 0) {
				_last_time_to_create_new_soul = SOUL_CREATE_TIME;
				CreateSoul ();
				_collectable_soul_num++;
			}
		} else {
			_remain_time_txt.text = "";
		}
	}
	void OnDestroy(){
		PlayerPrefs.SetInt ("_collectable_soul_num", _collectable_soul_num);
		PlayerPrefs.SetString ("_last_opened_time", DateTime.Now.ToString());
		PlayerPrefs.SetFloat ("_last_time_to_create_new_soul", _last_time_to_create_new_soul);

		//Debug.Log ("OnDestroy()_ collectable soul num:" + _collectable_soul_num + " / last opened time:" + PlayerPrefs.GetString ("_last_opened_time"));//test
	}


	//-----------------------------------private methods
	long CheckSecondDifference(string old){
		DateTime old_dateValue = Convert.ToDateTime (old);
		DateTime now_dateValue = DateTime.Now;

		//Debug.Log (old_dateValue + "/" + now_dateValue);
		//Debug.Log (now_dateValue.Subtract (old_dateValue).TotalSeconds);
		return (long) (now_dateValue.Subtract (old_dateValue).TotalSeconds);
	}
	void PlaceSoulsRandomly(int _soul_num){
		//Debug.Log ("PlaceSoulsRandomly_ soul num : " + _soul_num);

		for (int i = 0; i < _soul_num; i++) {
			CreateSoul ();
		}
	}
	void CreateSoul(){
		GameObject prefab_obj = Resources.Load("Prefab/Soul") as GameObject;
		GameObject clone_obj = Instantiate (prefab_obj);
		_list_souls.Add (clone_obj);
		clone_obj.transform.SetParent(_soul_area.GetComponent<Transform>());
		float range_x = _soul_area.GetComponent<RectTransform> ().rect.width / 2f - PADDING;
		float range_y = _soul_area.GetComponent<RectTransform> ().rect.height / 2f - PADDING;
		Vector3 tmp_loc = new Vector3 (Random.Range (-1*range_x, range_x), Random.Range (-1*range_y, range_y), 0f);
		//Debug.Log ("PlaceSoulsRandomly_ " + tmp_loc);
		clone_obj.transform.localPosition = tmp_loc;
	}
	void CheckTouchInputs(){
		if (Input.GetMouseButton(0))
		{
			Vector3 mouse_pos = Input.mousePosition;
			//Debug.Log(mouse_pos);//test

			//Find Near Soul Objects
			for (int i=0;i<_list_souls.Count ;i++){
				GameObject soul = _list_souls [i];
				if (Vector3.Distance (soul.GetComponent<Transform> ().position, mouse_pos) <= SOUL_DISTANCE) {
					//if soul is near by Touch position, Get soul & remove that object
					Destroy (soul);
					GetSoul (i);
				}
			}//for
		}
	}

	void GetSoul(int i){
		/*
		if (game_manager.GetTodayGetSoulNum () + 1 > GameManager.MAX_GET_SOUL_NUM_IN_A_DAY) {
			Debug.Log ("over get_soul_num_in_a_day");//test
			return;
		}
		game_manager.AddTodayGetSoulNum ();
		*/
		//DontDestroyManager.SetSoulNum (DontDestroyManager.GetSoulNum () + 1);
		_collectable_soul_num--;
		_list_souls.RemoveAt (i);
		DontDestroyManager.SetSoulNum (DontDestroyManager.GetSoulNum () + 1);
		Debug.Log("GetSoul()_ collectable soul num:"+_collectable_soul_num);//test
	}

	public void GoBack(){
        MainSceneManager mainSceneManager = GameObject.Find("SceneManager").GetComponent<MainSceneManager>();
		mainSceneManager.SetGalleryPage();
        mainSceneManager.soulText.text = DontDestroyManager.GetSoulNum()+"";
		gameObject.SetActive (false);
	}
}
