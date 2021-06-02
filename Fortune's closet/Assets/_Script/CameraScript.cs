using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScript : MonoBehaviour {
	public RectTransform area;
	CharacterScript ch;
	float minX,maxX,minY,maxY;
	Vector2 fp, lp, pp;
	Vector2 touchMove;
	
	void Start () {
		ch = null;
		minX = 350f - area.rect.width / 2;
		maxX = area.rect.width / 2 - 350f;
		minY = 600f - area.rect.height / 2;
		maxY = area.rect.height / 2 - 600f;
	}

	void Update () {
		Vector3 camPos = transform.position;
		if (ch) {
			Vector2 pos = ch.getCurrentPos ();
			
			if (minX > pos.x) {
				pos.x = minX;
			} else if (maxX < pos.x) {
				pos.x = maxX;
			}
			camPos.x = pos.x;
			if (minY > pos.y) {
				pos.y = minY;
			} else if (maxY < pos.y) {
				pos.y = maxY;
			}
			camPos.y = pos.y;
			
		}else{
			foreach (Touch touch in Input.touches)
			{
				if (touch.phase == TouchPhase.Began)
				{
					fp = touch.position;
					lp = touch.position;
				}
	
				if (touch.phase == TouchPhase.Moved)
				{
					pp = lp;
					lp = touch.position;
					touchMove = pp - lp;

					//move camera
					camPos.x += touchMove.x;
					if(camPos.x < minX){
						camPos.x = minX;
					}else if(camPos.x > maxX){
						camPos.x = maxX;
					}
					
					camPos.y += touchMove.y;
					if(camPos.y < minY){
						camPos.y = minY;
					}else if(camPos.y > maxY){
						camPos.y = maxY;
					}
					
				}
	
				//if (touch.phase == TouchPhase.Ended)
				//{
					
				//}
			}
		}
		transform.position = camPos;
	
	}

	public void setCharacter(CharacterScript ch){
		this.ch = ch;
	}
}
