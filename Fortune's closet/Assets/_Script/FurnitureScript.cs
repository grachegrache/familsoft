using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class FurnitureScript : MonoBehaviour {
	public Button removeButton;
	MainScript mainScript;

	RectTransform parent;
	RectTransform rect;
	Image image;

	int type, num;
	float min_x, min_y, max_x, max_y;
	float dragDistance;

	void Awake(){
		parent = transform.parent.GetComponent<RectTransform> ();
		rect = GetComponent<RectTransform> ();
		image = GetComponent<Image> ();
		mainScript = GameObject.Find ("MainManager").GetComponent<MainScript> ();
	}

	void Start () {
		string[] info = name.Substring(1).Split ('_');
		type = int.Parse (info [0]);
		num = int.Parse (info [1]);
		removeButton.onClick.AddListener (() => {
			mainScript.setFurnitureLoc(type,num);
			Destroy(gameObject);
		});

        if(rect.pivot.y == 0){
            min_y = -parent.rect.height / 2;
            max_y = parent.rect.height / 2 - rect.rect.height;
        }else{
            min_y = -parent.rect.height / 2 + rect.rect.height;
            max_y = parent.rect.height / 2;
        }
		min_x = rect.rect.width / 2 - parent.rect.width / 2;
		max_x = parent.rect.width / 2 - rect.rect.width / 2;

        Vector2 pos = rect.anchoredPosition;
        if (pos.x < min_x) {
            pos.x = min_x;
        } else if (pos.x > max_x) {
            pos.x = max_x;
        }
        if (pos.y < min_y) {
            pos.y = min_y;
        } else if (pos.y > max_y) {
            pos.y = max_y;
        }
        rect.anchoredPosition = pos;
	}

	void Update () {
		if (removeButton.gameObject.activeSelf) {
			if (Input.anyKeyDown) {
				// button이 아닌 곳이면 remove button 제거
				if (EventSystem.current.currentSelectedGameObject == null
					|| (!EventSystem.current.currentSelectedGameObject.Equals (gameObject)
						&& !EventSystem.current.currentSelectedGameObject.Equals(removeButton.gameObject))) {
//					Debug.Log ("other click "+EventSystem.current.currentSelectedGameObject.name);
					removeButton.gameObject.SetActive (false);
				}
			
			}
		}
	}

	public void setActiveTrigger(bool active){
		image.raycastTarget = active;
	}

	public void OnDrag(BaseEventData e){
		PointerEventData p = (PointerEventData)e;
		dragDistance += p.delta.magnitude;
		Vector2 localCursor;
		if (!RectTransformUtility.ScreenPointToLocalPointInRectangle(parent,
			p.position, p.pressEventCamera, out localCursor))
			return;
		
		if (localCursor.x < min_x) {
			localCursor.x = min_x;
		} else if (localCursor.x > max_x) {
			localCursor.x = max_x;
		}
		if (localCursor.y < min_y) {
			localCursor.y = min_y;
		} else if (localCursor.y > max_y) {
			localCursor.y = max_y;
		}
		rect.localPosition = localCursor;
	}

	public void OnEndDrag(BaseEventData e){
//		PointerEventData p = (PointerEventData)e;
		mainScript.setFurnitureLoc (type, num, rect.localPosition);
		
	}

	public void OnPointerClick(BaseEventData e){
		if (dragDistance < 5) {
			removeButton.gameObject.SetActive (true);
		}
		dragDistance = 0;
	}
}
