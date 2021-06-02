using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BlurManager : MonoBehaviour {
    public GameObject mainBack;
	Text message;
	Button confirmButton;
    Coroutine currentCoroutine;
    Material MaterialBlurUI;
    
    bool isBlur;
    float blurSize;
	UnityEngine.Events.UnityAction confirmAction;

	void Awake() {
        MaterialBlurUI = GetComponent<Image>().material;
        MaterialBlurUI.SetFloat("_blurSizeXY", 0);
		init ();
	}
	
	void init(){
		message = transform.GetChild (0).GetChild (0).GetComponent<Text> ();
		confirmButton = transform.GetChild (0).GetChild (1).GetComponent<Button> ();
	}

    public void setActive(bool active){
        if (currentCoroutine == null) {
            if(active){
                gameObject.SetActive(true);
            }
            currentCoroutine = StartCoroutine(setBlur(active));
        }
    }

    IEnumerator setBlur(bool active){
        if(active){
            while (blurSize < 10f){
                blurSize += Time.deltaTime * 50f;
                if(blurSize > 10f){
                    blurSize = 10f;
                }
                MaterialBlurUI.SetFloat("_blurSizeXY", blurSize);
                yield return null;
            }
        }else{
            while (blurSize > 0) {
                blurSize -= Time.deltaTime * 50f;
                if (blurSize <= 0f) {
                    blurSize = 0f;

                    #if UNITY_IOS
                        mainBack.transform.Rotate(180f, 0, 0);
                        Canvas.ForceUpdateCanvases();
                    #endif
                }

                MaterialBlurUI.SetFloat("_blurSizeXY", blurSize);
                yield return null;
            }
            
        }
        
        currentCoroutine = null;
        gameObject.SetActive(active);
    }
    
    public void popup(string msg){
		if (message == null || confirmButton == null)
			init ();
		message.text = msg;
		setActive (true);
    }
    
    public void popup(string msg, UnityEngine.Events.UnityAction action){
    	if (message == null || confirmButton == null)
			init ();
		if(confirmAction != null){
			confirmButton.onClick.RemoveListener (confirmAction);
		}
		confirmButton.onClick.AddListener (action);
		confirmAction = action;
		message.text = msg;
		setActive (true);
    }
}
