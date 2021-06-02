using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ToastScript : MonoBehaviour {
	int cancelID;
	int cancelID2;
	bool needQuit;
	public void fadeMessage(string message){
		if (needQuit) {
			return;
		}
//		LeanTween.cancelAll ();
		LeanTween.cancel(cancelID);
		LeanTween.cancel (cancelID2);
		gameObject.SetActive (true);
		GetComponentInChildren<Text> ().text = message;
		cancelID = LeanTween.alpha (GetComponent<RectTransform> (), 1.0f, 0.5f).setEase (LeanTweenType.linear).setOnComplete (() => {
			cancelID2 = LeanTween.alpha (GetComponent<RectTransform> (), 0.0f, 0.3f).setEase (LeanTweenType.linear).setDelay (1.2f).setOnComplete (() => {
				gameObject.SetActive(false);
			}).id;
		}).id;
	}
	public void fadeMessageQuit(string message){
		if (needQuit) {
			return;
		}
		needQuit = true;
		LeanTween.cancel(cancelID);
		LeanTween.cancel (cancelID2);
		gameObject.SetActive (true);
		GetComponentInChildren<Text> ().text = message;
		cancelID = LeanTween.alpha (GetComponent<RectTransform> (), 1.0f, 0.5f).setEase (LeanTweenType.linear).setOnComplete (() => {
			cancelID2 = LeanTween.alpha (GetComponent<RectTransform> (), 0.0f, 0.3f).setEase (LeanTweenType.linear).setDelay (1.2f).setOnComplete (() => {
				gameObject.SetActive(false);
//				#if UNITY_ANDROID
//				Application.Quit ();
//				#endif
//				#if UNITY_IOS
				UnityEngine.SceneManagement.SceneManager.LoadScene ("LogoScene");
//				#endif
			}).id;
		}).id;
	}
//	private void blink(){
//		LeanTween.alphaText(GetComponent<RectTransform> (), 1.0f, 0.5f).setEase(LeanTweenType.linear).setLoopPingPong();
//	}
}
