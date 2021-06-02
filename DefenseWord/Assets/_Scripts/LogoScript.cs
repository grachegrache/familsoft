using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LogoScript : MonoBehaviour {
	public RectTransform logoImage;

	void Start(){
		LeanTween.alpha(logoImage, 1f, 2.0f).setOnComplete (() => {
			LeanTween.delayedCall(1.0f,()=>{
				LeanTween.alpha(logoImage, 0, 1.0f).setOnComplete(()=>{
					UnityEngine.SceneManagement.SceneManager.LoadScene (Constant.MainScene);
				});
			});
		});

	}
	private IEnumerator loginHttp(string page, string param){
		//progressBack.SetActive (true);
		string encPackNum = SimpleAES.AES_encrypt (param, SimpleAES.key);
		WWWForm form = new WWWForm ();
		form.AddField ("pack", encPackNum);
		WWW www = new WWW (string.Format( "http://{0}:{1}/{2}", "127.0.0.1", "8080", page), form);
		float timer = 0;
		bool timeover = false;

		while (!www.isDone) {
			if (timer > 5.0f) {
				timeover = true;
				break;
			}
			timer += Time.deltaTime;
			yield return null;
		}
		if (timeover) {
			www.Dispose ();
		} else if (!string.IsNullOrEmpty (www.error)) {
			Debug.Log("WWW Error: " + www.error);
			//네트워크 에러 토스트
		} else {
			JSONObject json = new JSONObject (www.text);
			Debug.Log ("WWW result: " + json ["result"].str);
//			if (json ["result"].str == "fail") {
//				if (json ["reason"].str == "1") { // email already
//					toast.fadeMessage (LocalizationString.LOGIN_WarningEmailAlready);
//					loginEmail.ActivateInputField ();
//				} else if (json ["reason"].str == "6") { // nickname already
//					toast.fadeMessage (LocalizationString.LOGIN_WarningNicknameAlready);
//					loginNickname.ActivateInputField ();
//				} else if (json ["reason"].str == "-1") { // unknown
//					toast.fadeMessage (LocalizationString.LOGIN_WarningUnknown);
//				} else if (json ["reason"].str == "5") { //db error
//					toast.fadeMessage (LocalizationString.LOGIN_WarningDatabase);
//				} else if (json ["reason"].str == "9") { //server error
//					toast.fadeMessage (LocalizationString.LOGIN_WarningServerError);
//				} else { //0, 7, match error, 8
//					toast.fadeMessage (LocalizationString.LOGIN_WarningUnknown);
//				}
//			}
		}
	}
}