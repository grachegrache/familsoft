using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class BlockGameScript : MonoBehaviour {
	PlayBoardGameSceneManager playBoardGameSceneManager;
	float _tmp_color_right = 1f, _tmp_color_wrong= 0.5f;
	float IMAGE_SIZE = 700f;
	int BLOCK_NUM;
	float BLOCK_SIZE;
	string BLANK_IMAGE_NAME;
	int BLANK_INDEX;

	Transform[] _blocks;
	Sprite[] _sprites;
	Vector3[] _complete_location;
	int _right_loc_num;

	//variables only For Check Mouse Motion
	bool _mouse_down_on_board;
	Transform _start_drag_obj;
	Vector3 _start_drag_obj_pos;
	Transform _mouse_dragging_obj;
	bool _mouse_moved;//variable for check_ Object is clicked or Draged from start_obj_pos to start_obj_pos
	bool isCompleted;

	void Awake(){
        playBoardGameSceneManager = GameObject.Find("SceneManager").GetComponent<PlayBoardGameSceneManager>();
		BLOCK_NUM = GameManager.GetInstance().GetBlockSize();
		BLANK_IMAGE_NAME = "Blank" + BLOCK_NUM + "x" + BLOCK_NUM;
		BLOCK_SIZE = IMAGE_SIZE / BLOCK_NUM;
		BLANK_INDEX = BLOCK_NUM * BLOCK_NUM - 1;
		_right_loc_num = 0;
	}

	void Start () {
		//---------------------Get Child Block Objects
		_blocks = new Transform[transform.childCount];
		int idx = 0;
		foreach(Transform child in transform){
			_blocks[idx++] = child;
		}
		//---------------------Get Sprites for blocks
		_sprites = playBoardGameSceneManager.GetSprites();
		//Debug.Log ("test_ " + _sprites.Length);//test_ error return 0!!
		//Set last sprite to blank image
		_sprites [_sprites.Length - 1] = Resources.Load<Sprite> (BLANK_IMAGE_NAME);
		//Put Random sprites on block objects
		for (int i = 0; i < _blocks.Length; i++) {
			_blocks[i].GetComponent<Image>().sprite = _sprites[i];
		}
		//---------------------Check block states from PlayBoardGameSceneManager
        string _block_state = playBoardGameSceneManager.GetBlockState();
		if (_block_state.Length == 0) {
			//there is no PlayerPref _board_state info for this board
			// -> Shuffle Objects
			for (int i = 0; i < _blocks.Length - 1; i++) {
				int r = Random.Range (i, _blocks.Length - 1);
				ChangeObjectLocation (_blocks [i], _blocks [r]);
			}
		} else {
			//there is PlayerPref _board_state info for this board
			// -> Set Objects (info saved in PlayerPrefs)
			int[] _states = System.Array.ConvertAll (_block_state.Split (','), int.Parse);
			for (int i = 0; i < _states.Length; i++) {
				int vertical_order = _states [i] / BLOCK_NUM;
				int horizontal_order = _states [i] - vertical_order * BLOCK_NUM;
				_blocks [i].localPosition = new Vector3 (-IMAGE_SIZE / 2 + BLOCK_SIZE * horizontal_order, IMAGE_SIZE / 2 - BLOCK_SIZE * (vertical_order + 1), 0f);
			}
		}
		
		//---------------------Set all Blocks' color
		for (int i = 0; i < _blocks.Length; i++) {
			if (CheckRightLoc (i)) {
				SetObjectColor (_blocks [i], true);
				_right_loc_num++;
			} else {
				SetObjectColor (_blocks [i], false);
			}
		}
		Debug.Log ("_right_loc_num _Start() : " + _right_loc_num);

		isCompleted = _right_loc_num == BLOCK_NUM * BLOCK_NUM;
		if(isCompleted){
			playBoardGameSceneManager._complete_image_obj.SetActive (false);
			playBoardGameSceneManager.resetButton.SetActive (true);
		}
	}

	// Update is called once per frame
	void Update () {
		//---------------------Drag Blocks
		if (!isCompleted && DontDestroyManager.GetSoulNum () > 0) {
			CheckClickingBoard ();
			DraggingBoardObj ();
		}
    }

    void OnDestroy()
    {
		//---------------------Save Block State Data
        string _block_state = "";
		for (int i = 0; i <= BLANK_INDEX; i++)
        {
            if (i != 0) _block_state += ",";
			Vector3 loc = _blocks[i].localPosition;
			int horizontal_order = (int)(loc.x + IMAGE_SIZE / 2) * BLOCK_NUM / (int)IMAGE_SIZE;
			int vertical_order = (int)(IMAGE_SIZE / 2 - loc.y) * BLOCK_NUM / (int)IMAGE_SIZE - 1;
			//Debug.Log("idx : " + idx + " / order(" + horizontal_order + ", " + vertical_order + ")");//test
			_block_state += (vertical_order * BLOCK_NUM + horizontal_order) + "";
        }
        playBoardGameSceneManager.SaveBlockState(_block_state);
    }

	////////////////////////////////////// Private Methods
	//---------------------Method for Checking Mouse Left Button Clicking Motion
	void CheckClickingBoard(){
		if (Input.GetMouseButtonDown (0)) {
			//Mouse Down
			_start_drag_obj = GetObjectByTouchPosition (Input.mousePosition);
			if (_start_drag_obj != null && !_start_drag_obj.name.Equals(_blocks[BLANK_INDEX].name)) {
				_start_drag_obj_pos = _start_drag_obj.position;
				_mouse_down_on_board = true;
				_mouse_moved = false;
			}
		} else if (Input.GetMouseButtonUp (0)) {
			//Mouse Up
			if (_mouse_down_on_board) {
				//Mouse Up when Dragging on board
				Transform mouse_up_obj = GetObjectByTouchPosition (Input.mousePosition);
				if (mouse_up_obj != null) {
					//Mouse Button Up on Board
					if (!mouse_up_obj.position.Equals (_start_drag_obj_pos)) {
						//mouse button up not on the start drag pos
						//bool button_up_near_start_pos = (Mathf.Abs (mouse_up_obj.position.x - _start_drag_obj_pos.x) <= BLOCK_SIZE && Mathf.Abs (mouse_up_obj.position.y - _start_drag_obj_pos.y) <= BLOCK_SIZE) ? true : false;
						bool button_up_near_start_pos = (GetBlocksOnlyInCross(mouse_up_obj.position,_start_drag_obj_pos)) ? true : false;
						if (button_up_near_start_pos) {
							//mouse up near the start_obj pos
							if (!_start_drag_obj.position.Equals (_start_drag_obj_pos)) {
								//start obj is not on start pos
								//-> [Setting Routine] when Objects Changed, After Dragging Object
								SettingRoutineAfterChangeObject(_start_drag_obj, _blocks [BLANK_INDEX]);//testing....
							}
						}
					} else {
						//mouse button up on the start drag pos
						//Debug.Log("_mouse_moved : "+_mouse_moved);//test
						if (!_mouse_moved) {
							//just clicked!! not dragged from start drag position to start drag position
							Transform blank_obj = _blocks [BLANK_INDEX];
							//if (Mathf.Abs (_start_drag_obj_pos.x - blank_obj.position.x) <= BLOCK_SIZE && Mathf.Abs (_start_drag_obj_pos.y - blank_obj.position.y) <= BLOCK_SIZE) {
							if (GetBlocksOnlyInCross(_start_drag_obj_pos,blank_obj.position)) {
								//there is blank obj near by
								ChangeObjectLocation (_start_drag_obj, blank_obj);
								//-> [Setting Routine] when Objects Changed, After Dragging Object
								SettingRoutineAfterChangeObject (_start_drag_obj, _blocks [BLANK_INDEX]);//testing...
							}

						}
					}
				}else {
					//Mouse Button Up Not on Board
					if (!_start_drag_obj.position.Equals (_start_drag_obj_pos)) {
						//start obj is not on start pos
						ChangeObjectLocation(_start_drag_obj, _blocks[BLOCK_NUM*BLOCK_NUM-1]);//set start drag obj to start drag obj pos
					}
				}
			} 

			_mouse_down_on_board = false;
		}
	}
	void SettingRoutineAfterChangeObject(Transform t1, Transform t2){
		Debug.Log (t1.gameObject.name + "<->" + t2.gameObject.name);
		//1. Set Soul -1
		DontDestroyManager.SetSoulNum (DontDestroyManager.GetSoulNum () - 1);
		playBoardGameSceneManager.SetSoulNumText ();//set soul text
		//2. Set Color of Two Objects
		bool obj1_on_right_pos_after_change_loc = CheckRightLoc (t1);
		bool obj2_on_right_pos_after_change_loc = CheckRightLoc (t2);
		SetObjectColor (t1, obj1_on_right_pos_after_change_loc);
		SetObjectColor (t2, obj2_on_right_pos_after_change_loc);
		//3. Set Number of Objects on Right Position
		bool obj1_on_right_pos_before_change_loc = (GetRightLoc (t1).Equals (t2.localPosition)) ? true : false;
		//Debug.Log ("test) " + GetRightLoc (t1) + "=" + t2.localPosition);
		bool obj2_on_right_pos_before_change_loc = (GetRightLoc (t2).Equals (t1.localPosition)) ? true : false;
		//Debug.Log ("test) " + GetRightLoc (t2) + "=" + t1.localPosition);
		//Debug.Log ("clicked object : " + obj1_on_right_pos_before_change_loc + "->" + obj1_on_right_pos_after_change_loc);//test
		//Debug.Log ("changed object : " + obj2_on_right_pos_before_change_loc + "->" + obj2_on_right_pos_after_change_loc);//test

		if (obj1_on_right_pos_before_change_loc != obj1_on_right_pos_after_change_loc) {
			if (obj1_on_right_pos_before_change_loc)
				_right_loc_num--;//O->X
			else
				_right_loc_num++;//X->O
		}
		if (obj2_on_right_pos_before_change_loc != obj2_on_right_pos_after_change_loc) {
			if (obj2_on_right_pos_before_change_loc)
				_right_loc_num--;//O->X
			else
				_right_loc_num++;//X->O
		}
		//4. Check Puzzle Completed
		Debug.Log ("_right_loc_num : " + _right_loc_num);
		if (_right_loc_num == BLOCK_NUM * BLOCK_NUM) {
			//Complete!
			playBoardGameSceneManager.CompleteBoard ();
			isCompleted = true;
		}
	}
	//--------------------Mthod for Reset Button
	public void Reset(){
		//Shuffle Objects
		for (int i = 0; i < _blocks.Length - 1; i++) {
			int r = Random.Range (i, _blocks.Length - 1);
			ChangeObjectLocation (_blocks [i], _blocks [r]);
		}
		//Set Color and right loc num
		_right_loc_num = 0;
		for (int i = 0; i < _blocks.Length; i++) {
			if (CheckRightLoc (i)) {
				SetObjectColor (_blocks [i], true);
				_right_loc_num++;
			} else {
				SetObjectColor (_blocks [i], false);
			}
		}
		isCompleted = false;
	}
	//---------------------Method for Checking Mouse Left Button Dragging Motion on Board
	void DraggingBoardObj(){
		if (_mouse_down_on_board) {
			//mouse is dragging from the board
			_mouse_dragging_obj = GetObjectByTouchPosition (Input.mousePosition);
			if (_mouse_dragging_obj != null) {
				//mouse is dragging on the board
				if (!_start_drag_obj_pos.Equals (_mouse_dragging_obj.position))
					_mouse_moved = true;

				if (!_mouse_dragging_obj.position.Equals (_start_drag_obj_pos)) {
					//mouse position is not on the start drag obj position
					bool mouse_on_blank = (GetObjectNumByGameObject (_mouse_dragging_obj) == BLANK_INDEX) ? true : false;
					Vector3 blank_obj_pos = _blocks [BLANK_INDEX].transform.position;
					//bool blank_near_by_start_pos = (Mathf.Abs (blank_obj_pos.x - _start_drag_obj_pos.x) <= BLOCK_SIZE && Mathf.Abs (blank_obj_pos.y - _start_drag_obj_pos.y) <= BLOCK_SIZE) ? true : false;
					bool blank_near_by_start_pos = (GetBlocksOnlyInCross(blank_obj_pos, _start_drag_obj_pos)) ? true : false;
					bool start_obj_on_start_pos = (_start_drag_obj.position.Equals (_start_drag_obj_pos)) ? true : false;
					if (mouse_on_blank && blank_near_by_start_pos && start_obj_on_start_pos) {
						//mouse position is on the blank & blank obj is near with start drag pos & start obj is on the start drag pos
						ChangeObjectLocation (_start_drag_obj, _mouse_dragging_obj);
					}
				} else {
					//mouse position is on the start drag obj position
					if (!_start_drag_obj.position.Equals (_start_drag_obj_pos)) {
						//start drag obj is not on the start drag pos
						ChangeObjectLocation (_start_drag_obj, _mouse_dragging_obj);
					}
				}
				/* else {
					//start drag obj is blank obj
					if (!_mouse_dragging_obj.position.Equals (_start_drag_obj_pos)) {
						//mouse position is not on the start drag obj position
						if (_start_drag_obj.position.Equals (_start_drag_obj_pos)) {
							//start drag obj(blank obj) is on start drag position
							ChangeObjectLocation (_start_drag_obj, _mouse_dragging_obj);
						}
					} else {
						//mouse position is on the start drag obj position
						if (!_start_drag_obj.position.Equals (_start_drag_obj_pos)) {
							//start drag obj is not on start drag position
							ChangeObjectLocation (_start_drag_obj, _mouse_dragging_obj);
						}
					}
				}*/
			} else {
				_mouse_moved = true;
			}

		}//mouse is dragging from the board
	}

	bool GetBlocksOnlyInCross(Vector3 v1, Vector3 v2){
		bool same_position = v1.Equals (v2);
		bool in_nine_square = (Mathf.Abs (v1.x - v2.x) <= BLOCK_SIZE && Mathf.Abs (v1.y - v2.y) <= BLOCK_SIZE);
		bool in_cross = (Mathf.Abs (v1.x - v2.x) == BLOCK_SIZE && Mathf.Abs (v1.y - v2.y) == BLOCK_SIZE);
		if (!same_position && in_nine_square && !in_cross)
			return true;
		
		return false;
	}
		
	void SetObjectColor(Transform t, bool right_pos){
		Color tmp = t.gameObject.GetComponent<Image> ().color;
		if (right_pos) {
			tmp.a = _tmp_color_right;
		} else {
			tmp.a = _tmp_color_wrong;
		}
		t.gameObject.GetComponent<Image> ().color = tmp;
	}

	Transform GetObjectByTouchPosition(Vector3 v){
		Vector3 tmp_loc;
		foreach (Transform go in _blocks) {
			tmp_loc = go.position;
			if (v.x >= tmp_loc.x && 
				v.x <= tmp_loc.x + BLOCK_SIZE && 
				v.y >= tmp_loc.y && 
				v.y <= tmp_loc.y + BLOCK_SIZE)
				return go;
			/*
			if (v.x > tmp_loc.x && v.y > tmp_loc.y && Vector3.Distance (v, tmp_loc) < BLOCK_SIZE)
				return go;
				*/
		}
		return null;
	}

	void ChangeObjectLocation(Transform a, Transform b){
		Vector3 tmp = a.localPosition;
		a.localPosition = b.localPosition;
		b.localPosition = tmp;
	}

	int GetObjectNumByGameObject(Transform go){
		string a = go.name;
		string b = string.Empty;

		for (int i=0; i< a.Length; i++)
		{
			if (char.IsDigit(a[i]))
				b += a[i];
		}

		if (b.Length>0) return int.Parse(b);
		return -1;
	}

	bool CheckRightLoc(int num){
		Vector3 loc = _blocks [num].localPosition;
		int rightX = (-1) * (int)IMAGE_SIZE / 2 + (int)BLOCK_SIZE * (num % BLOCK_NUM);
		int rightY = (int)IMAGE_SIZE / 2 - (int)BLOCK_SIZE * (num / BLOCK_NUM + 1);
		if (loc.x == rightX && loc.y == rightY) return true;

		return false;
	}
	
	bool CheckRightLoc(Transform t){
		int num = GetObjectNumByGameObject (t);
		Vector3 loc = t.localPosition;

		int rightX = (-1) * (int)IMAGE_SIZE / 2 + (int)BLOCK_SIZE * (num % BLOCK_NUM);
		int rightY = (int)IMAGE_SIZE / 2 - (int)BLOCK_SIZE * (num / BLOCK_NUM + 1);
		if (loc.x == rightX && loc.y == rightY) return true;
		return false;
	}
	Vector3 GetRightLoc(Transform t){
		int num = GetObjectNumByGameObject (t);

		int rightX = (-1) * (int)IMAGE_SIZE / 2 + (int)BLOCK_SIZE * (num % BLOCK_NUM);
		int rightY = (int)IMAGE_SIZE / 2 - (int)BLOCK_SIZE * (num / BLOCK_NUM + 1);

		return new Vector3 (rightX, rightY, 0f);
	}




	//---------------------Methods not using....

	/*void TouchBlocks(){
		if (Input.GetMouseButtonDown (0)) {
			_last_down_button = GetObjectByTouchPosition (Input.mousePosition);

			if (_last_down_button == null)
	//---------------------Methods not using....

	/*void TouchBlocks(){
		if (Input.GetMouseButtonDown (0)) {
			_last_down_button = GetObjectByTouchPosition (Input.mousePosition);

			if (_last_down_button == null)
				return;
		}
		else if (Input.GetMouseButtonUp (0)) {
			_last_up_button = GetObjectByTouchPosition (Input.mousePosition);

			if (_last_up_button == null || _last_down_button == null) {
				_last_up_button = null;
				_last_down_button = null;
				return;
			}

			int button_down_num = GetObjectNumByGameObject (_last_down_button);
			int button_up_num = GetObjectNumByGameObject (_last_up_button);

			if (button_up_num == button_down_num) {
				//Button just Clicked
				ActivateBlock();
				_last_up_button = null;
				_last_down_button = null;
				return;
			}

			//Button Draged
			if (button_down_num == BLANK_INDEX)
				ActivateBlock (_last_up_button);
			else if (button_up_num == BLANK_INDEX)
				ActivateBlock (_last_down_button);
			
			_last_up_button = null;
			_last_down_button = null;
		}
		return;
	}*/
	/*
    void SetObejcts(string _block_state)
    {
        Debug.Log("BlockGameScript_Start() : " + _block_state);//test
        int[] _states = System.Array.ConvertAll<string, int>(_block_state.Split(','), int.Parse);
        for (int i = 0; i < _states.Length; i++)
        {
            int vertical_order = _states[i] / BLOCK_NUM;
            int horizontal_order = _states[i] - vertical_order * BLOCK_NUM;
			_blocks[i].localPosition = new Vector3(-IMAGE_SIZE / 2 + BLOCK_SIZE * horizontal_order, IMAGE_SIZE / 2 - BLOCK_SIZE * (vertical_order + 1), 0f);
        }
    }
	*/
	// execept blank
	/*
    void ShuffleObject(Transform[] data)
    {
        Debug.Log("Shuffle()");
        for (int i = 0; i < data.Length - 1; i++)
        {
            int r = Random.Range(i, data.Length - 1);
            ChangeObjectLocation(data[i], data[r]);
        }
    }*/
	/*
	Transform[] GetChildObjects(){
		Transform[] result = new Transform[transform.childCount];
		int idx = 0;

		foreach(Transform child in transform){
			result[idx++] = child;
		}

		return result;
	}
	*/

	//if right position -> Set alpha 1f
	//or wrong position -> Set alpha 0.5f
	// init 
	//true : right_loc_num ++ when it is right position
	//false : when change a block with a blank block, change color and set right loc num
	/*
	bool CheckPositionAndChangeColor(int num){
		bool isRight = CheckRightLoc(num);
		SetObjectColor (_blocks [num], isRight);
        return isRight;
	}*/
	/*
    int GetIdxByTransform(int idx)
    {
        Vector3 loc = _blocks[idx].localPosition;
        int horizontal_order = (int)(loc.x + IMAGE_SIZE / 2) * BLOCK_NUM / (int)IMAGE_SIZE;
        int vertical_order = (int)(IMAGE_SIZE / 2 - loc.y) * BLOCK_NUM / (int)IMAGE_SIZE - 1;

        //Debug.Log("idx : " + idx + " / order(" + horizontal_order + ", " + vertical_order + ")");//test
        return vertical_order * BLOCK_NUM + horizontal_order;
    }
	
	//-------------Button--------

	public void ActivateBlock(){
		Debug.Log ("Button clicked");//test
		if (DontDestroyManager.GetSoulNum () <= 0) {
			Debug.Log ("no soul!!");
			return;
		}

		GameObject _button_obj = EventSystem.current.currentSelectedGameObject;

        int num = GetObjectNumByGameObject(_button_obj.transform);
		if (num == BLANK_INDEX)
			return;
        
		//check : there is blank block near by...
		Vector3 _blank_pos = _blocks[BLANK_INDEX].localPosition;
		Vector3 _button_pos = _button_obj.transform.localPosition;
		if (Vector3.Distance (_blank_pos, _button_pos) > BLOCK_SIZE) {
			//can't move
			return;
		}

		//-1 Soul Num and Set it on Text
		DontDestroyManager.SetSoulNum (DontDestroyManager.GetSoulNum () - 1);
		playBoardGameSceneManager.SetSoulNumText ();
		//change this object with blank object directly
		_blocks[BLANK_INDEX].localPosition = _button_pos;
		_button_obj.transform.localPosition = _blank_pos;
		//check this location is right!
		CheckPositionAndChangeColor(num, false);

		
		if (_right_loc_num == BLOCK_NUM * BLOCK_NUM) {
            DontDestroyManager.SetCompletePicture(GameManager.GetInstance().GetBoardImageName());
		}
	}
	void ActivateBlock(Transform _button_trans){
		Debug.Log ("Button clicked");//test
		if (DontDestroyManager.GetSoulNum () <= 0) {
			Debug.Log ("no soul!!");
			return;
		}

		//GameObject _button_obj = EventSystem.current.currentSelectedGameObject;

		int num = GetObjectNumByGameObject(_button_trans);
		if (num == BLANK_INDEX)
			return;

		//check : there is blank block near by...
		Vector3 _blank_pos = _blocks[BLANK_INDEX].localPosition;
		Vector3 _button_pos = _button_trans.localPosition;
		if (Vector3.Distance (_blank_pos, _button_pos) > BLOCK_SIZE) {
			//can't move
			return;
		}

		//-1 Soul Num and Set it on Text
		DontDestroyManager.SetSoulNum (DontDestroyManager.GetSoulNum () - 1);
		playBoardGameSceneManager.SetSoulNumText ();
		//change this object with blank object directly
		_blocks[BLANK_INDEX].localPosition = _button_pos;
		_button_trans.localPosition = _blank_pos;
		//check this location is right!
		CheckPositionAndChangeColor(num, false);


		if (_right_loc_num == BLOCK_NUM * BLOCK_NUM) {
			DontDestroyManager.SetCompletePicture(GameManager.GetInstance().GetBoardImageName());
		}
	}*/
}
