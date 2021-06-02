using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

//this script is imported in Empty GameObject containing Block Objects in child
//the child Block Objects must be named -> "Block ("+ int + ")"
//the blank image must be named like BLANK_IMAGE_NAME(BLOCK_SIZE+"x"+BLOCK_SIZE+"Blank")
//prefab name must be like under enum


public class PlayBoardGameSceneManager : MonoBehaviour {
	public GameObject _board_parent_obj;
	public GameObject _complete_image_obj;
	public GameObject resetButton;
	public Text _soul_num_txt;
	public Transform titleImage;

	GameManager game_manager;
	Sprite [] _sprites;

	string _complete_image_name;

	//------------
	void Awake ()
	{
		game_manager = GameManager.GetInstance ();
		_complete_image_name = "puzzle/complete/" + game_manager.GetBoardImageName ().ToString () + "_complete";

		//Instantiate Board Prefab by Name
		GameObject prefab = null;
		switch (GetBlockNum ()) {
		case 4:
			prefab = Resources.Load ("Prefab/tmp_image_4x4") as GameObject;
			break;
		case 5:
			prefab = Resources.Load ("Prefab/tmp_image_5x5") as GameObject;
			break;
		}
		GameObject obj = Instantiate (prefab, _board_parent_obj.transform) as GameObject;
		obj.name = "GameBoardPrefab";
		obj.transform.localPosition = Vector3.zero;
		//Set CompleteImage
		Sprite sp = Resources.Load<Sprite> (_complete_image_name);
		_complete_image_obj.GetComponent<Image> ().sprite = sp;
		//Load CuttingImages
		_sprites = Resources.LoadAll<Sprite> ("puzzle/" + game_manager.GetBoardImageName ().ToString ());
		
		if(Application.systemLanguage == SystemLanguage.Korean){
			titleImage.GetChild (0).gameObject.SetActive (true);
			titleImage.GetChild (1).gameObject.SetActive (false);
		}else{
			titleImage.GetChild (0).gameObject.SetActive (false);
			titleImage.GetChild (1).gameObject.SetActive (true);
		}
	}

	void Start ()
	{
		SetSoulNumText ();
	}

	void Update ()
	{
		#if UNITY_ANDROID
        // get cancel key
        if(Input.GetKeyUp(KeyCode.Escape))
        {
            game_manager.ChangeScene (SceneName.MainScene);
        }
        #endif
	}

	public int GetBlockNum ()
	{
		return game_manager.GetBlockSize ();
	}

	public void SetSoulNumText ()
	{
		_soul_num_txt.text = DontDestroyManager.GetSoulNum () + "";
	}
	public Sprite [] GetSprites ()
	{
		return _sprites;
	}

	public void backClick ()
	{
		game_manager.ChangeScene (SceneName.MainScene);
	}

	//----------------------------------------------------------------HBTEST
	public string GetBlockState ()
	{
		return PlayerPrefs.GetString (game_manager.GetBoardImageName ().ToString ());
	}
	public void SetBlockState (string s)
	{
		game_manager.SetBlockState (s);
	}
	public void SaveBlockState (string s)
	{
		PlayerPrefs.SetString (game_manager.GetBoardImageName ().ToString (), s);
		PlayerPrefs.SetString ("recent", game_manager.GetBoardImageName ().ToString ());
	}
	public void CompleteBoard ()
	{
		string board = game_manager.GetBoardImageName ().ToString ();
		PlayerPrefs.SetInt (board + "_complete", 1);
		
		string [] boardInfos = board.Split ('_');
		if(boardInfos[2] == "f3"){
			board = board.Substring (0, 3) + "m1";
		}else if(boardInfos[2] == "m3"){
			board = "_" + (int.Parse (boardInfos [1]) + 1) + "_f1";
			if(!Enum.IsDefined(typeof(BoardPrefabName), board)){
				return;
			}
		}else{
			board = board.Substring (0, 4) + (int.Parse (boardInfos [2].Substring (1)) + 1);
		}
		
		PlayerPrefs.SetString ("recent", board);
		_complete_image_obj.SetActive (false);
		resetButton.SetActive (true);
		game_manager.getDontDestroyManager ().blurManager.popup (LocalizeTool.localizeString.complete_board);
	}

	public void resetClick(){
		game_manager.getDontDestroyManager ().blurManager.popup (LocalizeTool.localizeString.msg_reset, () => {
			_board_parent_obj.transform.Find ("GameBoardPrefab").GetComponent<BlockGameScript> ().Reset ();
			_complete_image_obj.SetActive (true);
			resetButton.SetActive (false);
		});
	}
}
