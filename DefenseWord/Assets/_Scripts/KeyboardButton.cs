using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class KeyboardButton : Button {
	public delegate void CallOnPointerDown(KeyboardButton btn, PointerEventData eventData);
	public delegate void CallOnPointerUp(KeyboardButton btn, PointerEventData eventData);
	public delegate void CallOnPointerEnter(KeyboardButton btn, PointerEventData eventData);
	public delegate void CallOnPointerExit(KeyboardButton btn, PointerEventData eventData);

	public CallOnPointerDown method1;
	public CallOnPointerUp method2;
	public CallOnPointerEnter method3;
	public CallOnPointerExit method4;

	public bool selected;
	public bool hold;
	public bool isBackDown;
	public string key;

	float pressedTime;


	protected override void Start () {
		hold = false;
		selected = false;
		isBackDown = false;
		key = name.Substring (6);
		
	}
	
	// Update is called once per frame
	void Update () {
		if (!hold && isBackDown) {
			pressedTime += Time.deltaTime;

			if (pressedTime > 0.5f) {
				hold = true;
				Debug.Log (key + " hold");
			}
		}

	}

	public override void OnPointerDown (PointerEventData eventData)
	{
		base.OnPointerDown (eventData);
		if (key.Equals ("Back"))
			isBackDown = true;
		selected = true;
		method1 (this, eventData);

	}

	public override void OnPointerUp (PointerEventData eventData)
	{
		base.OnPointerUp (eventData);
		hold = false;
		isBackDown = false;
		pressedTime = 0;
		method2 (this, eventData);

		selected = false;
	}

	public override void OnPointerEnter (PointerEventData eventData)
	{
		base.OnPointerEnter (eventData);
		method3 (this, eventData);

	}

	public override void OnPointerExit (PointerEventData eventData)
	{
		base.OnPointerExit (eventData);
		hold = false;
		isBackDown = false;
		pressedTime = 0;
		method4 (this, eventData);

		selected = false;
	}


	public class MatchDownUp{
		public KeyboardButton downKey;
		public KeyboardButton currentKey;

		public MatchDownUp(KeyboardButton down, KeyboardButton current){
			this.downKey = down;
			this.currentKey = current;
		}
	}
}
