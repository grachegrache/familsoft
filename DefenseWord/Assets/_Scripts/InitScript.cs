using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class InitScript : MonoBehaviour {
	public RectTransform ImageFade;

	void Start () {
		Constant.init ();
		PlayInfo playinfo = PlayInfo.instance;

		// check isfirst
		if (PlayerPrefs.HasKey (Constant.isFirst) == false) {
			Screen.sleepTimeout = SleepTimeout.NeverSleep;
			LeanTween.delayedCall (0.1f, () => {
				LeanTween.color (ImageFade, Color.white, 0.2f).setOnComplete (() => {
					SceneManager.LoadScene (Constant.HelpScene);
				});
			});
		} else {
			// set saving mode
			if (playinfo.SavingMode) {
				Screen.sleepTimeout = SleepTimeout.SystemSetting;
			} else {
				Screen.sleepTimeout = SleepTimeout.NeverSleep;
			}

			LeanTween.delayedCall (0.1f, () => {
				SceneManager.LoadScene (Constant.MainScene);
				
			});
//			LeanTween.alpha (ImageFade, 0, 0.7f).setOnComplete (() => {
//			});
		}
	}

}
