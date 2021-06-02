using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class KeyboardScript : MonoBehaviour {
	public System.Action<string> onKeyTyped;
	
	List<KeyboardButton.MatchDownUp> selectedKeys;
	
	void Awake ()
	{
		selectedKeys = new List<KeyboardButton.MatchDownUp> ();
		
		foreach (Transform child in transform) {
			KeyboardButton btn = child.GetComponent<KeyboardButton> ();
			btn.method1 = keyDown;
			btn.method2 = keyUp;
			btn.method3 = keyEnter;
			btn.method4 = keyExit;
		}
	}
	
	public void keyDown(KeyboardButton btn, PointerEventData eventData){
		selectedKeys.Add (new KeyboardButton.MatchDownUp (btn, btn));
		
	}

	public void keyUp(KeyboardButton btn, PointerEventData eventData){

		foreach (KeyboardButton.MatchDownUp match in selectedKeys) {
			if (match.downKey.Equals (btn)) {
				if(onKeyTyped != null)
					onKeyTyped (match.currentKey.key);
					
				if (!match.currentKey.image.color.Equals (match.currentKey.colors.normalColor))
					match.currentKey.image.color = match.currentKey.colors.normalColor;
				selectedKeys.Remove (match);
				break;
			}
		}
	}

	public void keyEnter(KeyboardButton btn, PointerEventData eventData){
		if (selectedKeys.Count > 0) {
			foreach (KeyboardButton.MatchDownUp match in selectedKeys) {
				if (match.downKey.Equals (eventData.pointerPress.GetComponent<KeyboardButton> ()))
					match.currentKey = btn;
			}
			btn.selected = true;
			btn.image.color = btn.colors.pressedColor;
		}
		
	}

	public void keyExit(KeyboardButton btn, PointerEventData eventData){
		if (btn.selected)
			btn.image.color = btn.colors.normalColor;
		
	}
}
