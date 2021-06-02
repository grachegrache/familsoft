using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DollScript : CharacterScript {
	public bool isRunning;
	public List<float> speedList;
	public float maxStamina;
	public float stamina;
	public float progress;
	public int boost;
	
    System.Action onClick;
    float maxX, maxY, minX, minY;
    float untilNextMove;

    public override void Awake(){
        base.Awake();

        RectTransform movable = transform.parent.GetComponent<RectTransform>();
        maxX = movable.rect.width / 2 - 50f;
        maxY = movable.rect.height / 2 - 30f;
        minX = - movable.rect.width / 2 + 50f;
        minY = - movable.rect.height / 2;

        untilNextMove = Random.Range(3f, 20f);
    }

	public override void Update () {
        base.Update();

		if(!isRunning){
			untilNextMove -= Time.deltaTime;
	        if(untilNextMove < 0){
	            untilNextMove = Random.Range(3f, 20f);
	            setTargetPos(Random.Range(minX, maxX), Random.Range(minY, maxY));
	        }
		}
        
	}

    public void setOnClickAction(System.Action action) {
        onClick = action;
    }

    public void removeOnClickAction() {
        onClick = null;
    }

    public new void OnPointerClick(BaseEventData data) {
        PointerEventData pData = (PointerEventData)data;

        if (pData.pointerPress == gameObject) {
            if(onClick != null)
                onClick();
        }
    }
    
}
