using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DragGalleryContentScript : MonoBehaviour {
	MainSceneManager main_scene_manager;
	float DRAG_DISTANCE = 175f;
	float MOVE_SPEED = 0.135f;
	int HORIZONTAL_NUM = 2;
	int VERTICAL_NUM = 3;

	public Sprite [] stars;
	
	ScrollRect scrollRect;
	
	int _now_page_num;
	int _total_page_num;

	Vector3 _mouse_down_pos, _mouse_up_pos;
	float _dest_pos;
	bool _moving, isInit;

	void Awake(){
		if(!isInit){
			init ();
		}
	}

	void init(){
		main_scene_manager = GameObject.Find ("SceneManager").GetComponent<MainSceneManager> ();
		scrollRect = transform.parent.gameObject.GetComponent<ScrollRect> ();
		isInit = true;
	}

	void Update () {
		if (main_scene_manager.GetPopUpActive ())
			return;

		SetMouseClickInfo ();

		if (_moving) {
			if (Mathf.Abs (scrollRect.horizontalNormalizedPosition - _dest_pos) < 0.001f){
				scrollRect.horizontalNormalizedPosition = _dest_pos;
				_moving = false;
			}else{
				scrollRect.horizontalNormalizedPosition += (_dest_pos - scrollRect.horizontalNormalizedPosition) * MOVE_SPEED;
			}
		}
	}
	
	public void loadGallery(){
		if(!isInit){
			init ();
		}
		Sprite[] puzzle_imgs = Resources.LoadAll<Sprite> ("puzzle/complete");

		//Set Pages
		GameObject gallery_page_prefab = Resources.Load ("Prefab/" + "GalleryPage") as GameObject;
		List<Transform> _page_objs = new List<Transform> ();
		int pageNum = puzzle_imgs.Length / (HORIZONTAL_NUM * VERTICAL_NUM) + (puzzle_imgs.Length % (HORIZONTAL_NUM * VERTICAL_NUM) > 0 ? 1 : 0);
		for (int i = 0; i < pageNum; i++) {
			GameObject tmp_obj = Instantiate (gallery_page_prefab);
			_page_objs.Add (tmp_obj.transform);
			tmp_obj.transform.SetParent (transform);
			tmp_obj.name = "Page"+i;
		}

		string [] puzzleInfo;
		//Set Buttons
		GameObject play_board_btn_prefab = Resources.Load ("Prefab/" + "PlayBoardBtn") as GameObject;
		for (int i = 0; i < puzzle_imgs.Length; i++) {
			puzzleInfo = puzzle_imgs [i].name.Split ('_');
			Transform tmp_page_obj = _page_objs [i / (HORIZONTAL_NUM * VERTICAL_NUM)];
			GameObject tmp_obj = Instantiate (play_board_btn_prefab);
			tmp_obj.GetComponent<Image> ().sprite = puzzle_imgs [i];
			
			int star = int.Parse (puzzleInfo [1]);
			Image starImage = tmp_obj.transform.GetChild(0).GetComponent<Image> ();
			starImage.sprite = stars [star - 1];
			starImage.SetNativeSize ();
			
			tmp_obj.transform.SetParent(tmp_page_obj);
			tmp_obj.GetComponent<Button> ().onClick.AddListener (main_scene_manager.PlayBoard);
			tmp_obj.name = "BoardButton" + i;
		}

		_total_page_num = _page_objs.Count;
		_now_page_num = 1;
		
		scrollRect.horizontalNormalizedPosition = 0;
	}

	void SetMouseClickInfo(){
		if (Input.GetMouseButtonDown (0)) {
			_mouse_down_pos = Input.mousePosition;
			_moving = false;
		} else if (Input.GetMouseButtonUp (0)) {
			_mouse_up_pos = Input.mousePosition;

			if (Mathf.Abs (_mouse_down_pos.x - _mouse_up_pos.x) >= DRAG_DISTANCE) {
				if (_mouse_down_pos.x < _mouse_up_pos.x) {
					//Drag Right
					if (_now_page_num <= 1)
						return;
					//Get Previous Page
					_now_page_num--;
					main_scene_manager.SetDotImage (_now_page_num, true);

				} else {
					//Drag Left
					if (_now_page_num >= _total_page_num)
						return;
					//Get Next Page
					_now_page_num++;
					main_scene_manager.SetDotImage (_now_page_num, false);
				}
			}
			
			SetMovePosition ();
		}
	}

	void SetMovePosition(){
		_dest_pos = 1f / (_total_page_num - 1) * (_now_page_num - 1);
		_moving = true;
	}

	public void SetDirectPage(){
		scrollRect.horizontalNormalizedPosition = 1 / (_total_page_num - 1) * (_now_page_num - 1);
	}

	public int GetTotalPageNum(){
		return _total_page_num;
	}
	
}
