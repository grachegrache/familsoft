using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.Networking;
#if UNITY_ANDROID
//using GooglePlayGames;
//using GooglePlayGames.BasicApi;
//using UnityEngine.SocialPlatforms;
#elif UNITY_IOS
using System.Runtime.InteropServices;
#endif

public class LoginScript : MonoBehaviour {
	public GameObject settingPref;
	public GameObject[] titles;
    public GameObject retry;
	public Button loginButton;
    public GameObject loginAuthPop;
    public GameObject privacyTermPop;
    public GameObject guestPop;

	SettingScript settingScript;
    bool isRetry;
    int login_auth =-1;
	#if UNITY_IOS
	[DllImport("__Internal")]
	private static extern void _Authenticate ();

	public void XCodeToServer(string s){
//		Debug.Log("xcodetoserver:"+s);
		SettingScript.login_info = s;
        clickLogin();//loginButton.gameObject.SetActive (true);
	}
	public void XCodeToError(string err){
		settingScript.log(err);
		isRetry = true;
		retry.SetActive(true);
        login_auth = 0;
	}
#endif

    void Awake()
    {
        if (SettingScript.isLoaded == false)
        {
            GameObject settingInstance = Instantiate(settingPref);
            settingInstance.name = "SettingManager";
            settingScript = settingInstance.GetComponent<SettingScript>();
            settingScript.init();
            DontDestroyOnLoad(settingInstance);
        }
        else
        {
            settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
        }

        if (SettingScript.language == SystemLanguage.Korean)
        {
            titles[0].SetActive(true);
        }
        else
        {
            titles[1].SetActive(true);
        }
        login_auth = PlayerPrefs.GetInt("login_auth", -1); //동의 아직 안한 상태
        if(login_auth == 0){ //동의 한 상태
            loginAuthPop.SetActive(true);
        }
        else if (login_auth == 1) //이미 소셜 로그인 해본 누른상태
        {
            clickSocial();
        }
        else if (login_auth == 2) //이미 게스트 로그인 해본 누른상태
        {
            loginAuthPop.SetActive(true);
        }
        else //동의 아직 안한 상태
        {
            privacyTermPop.transform.GetChild(0).GetChild(0).GetChild(0).GetComponentInChildren<Text>().text
                      = LocalizationString.PrivacyTerms;
            privacyTermPop.transform.GetChild(2).GetComponentInChildren<Text>().text = LocalizationString.Agree;
            privacyTermPop.SetActive(true);
        }

        if (Application.platform == RuntimePlatform.Android)
        {
            loginAuthPop.transform.GetChild(0).GetComponentInChildren<Text>().text = LocalizationString.GoogleLogin;
        }
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            loginAuthPop.transform.GetChild(0).GetComponentInChildren<Text>().text = LocalizationString.GameCenterLogin;
        }
        loginAuthPop.transform.GetChild(1).GetComponentInChildren<Text>().text = LocalizationString.GuestLogin;

    }

	// Use this for initialization
	//void Start () {

	//}

    public void clickAgree(){
        privacyTermPop.SetActive(false);
        loginAuthPop.SetActive(true);
        login_auth = 0;
        PlayerPrefs.SetInt("login_auth", login_auth);
    }

    public void clickSocial(){
        login_auth = 1;
        loginAuthPop.SetActive(false);
        #if UNITY_ANDROID
        if(string.IsNullOrEmpty(SettingScript.login_info)){
            //PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder()
            //    .RequestEmail()
            //    .RequestIdToken()
            //    .Build();

            //PlayGamesPlatform.InitializeInstance(config);
            //PlayGamesPlatform.DebugLogEnabled = true;
            //PlayGamesPlatform.Activate();
        }
        #endif
        //      settingScript.log (LocalizationString.LOGIN_CheckingVersion);
        isRetry = false;
        StartCoroutine(versionCheck());
    }
    public void clickGuest()
    {
        login_auth = 2;
        loginAuthPop.SetActive(false);
        isRetry = false;
        StartCoroutine(versionCheck());

    }
	public void clickLogin(){
        
		UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
		//settingScript.playSound(0);
	}

    public void clickVersion(){
        if(!isRetry){
            return;
        }

        retry.SetActive(false);
        isRetry = false;
        StartCoroutine(versionCheck());
    }

    public void clickGuestConfirm(){
        string ID = guestPop.transform.GetChild(1).GetComponent<InputField>().text;
        string PW = guestPop.transform.GetChild(2).GetComponent<InputField>().text;
        if(ID.Trim() == "" || PW.Trim() == ""){
            settingScript.log(LocalizationString.LOGIN_IDPWEmpty);
        }else if (ID.Contains(" ")){
            settingScript.log(LocalizationString.LOGIN_InvalidID);
        } else {
            char[] temp = ID.ToCharArray();
            for (int i = 0; i < ID.Length;i++){
                if(!char.IsLetterOrDigit(temp[i])){
                    settingScript.log(LocalizationString.LOGIN_InvalidID);
                    return;
                }
            }
            if (PW.Contains(" ") || PW.Contains("/")
                 || PW.Contains("\\") || PW.Contains("\""))
            {
                settingScript.log(LocalizationString.LOGIN_InvalidPW);
            }
            else
            {
                SettingScript.login_method = (int)PROTOCOL.login_method.guest;
                SettingScript.guest_info[0] = ID;
                SettingScript.guest_info[1] = PW;
                SettingScript.login_info = null;
                clickLogin();
                guestPop.SetActive(false);
            }
        }

    }

    public void clickGuestCancel(){
        guestPop.transform.GetChild(1).GetComponent<InputField>().text = "";
        guestPop.transform.GetChild(2).GetComponent<InputField>().text = "";

        guestPop.SetActive(false);
        loginAuthPop.SetActive(true);

    }

	private IEnumerator versionCheck(){
		string encAppVersion = SimpleAES.AES_encrypt (SettingScript.appVersion, SimpleAES.myKey);
		WWWForm form = new WWWForm ();
		form.AddField ("appVersion", encAppVersion);
		UnityWebRequest wr = UnityWebRequest.Post (string.Format ("http://{0}:{1}/checkVersion", SettingScript.ip, SettingScript.port), form);
		wr.timeout = 10;
		yield return wr.SendWebRequest();

		if(wr.isNetworkError || wr.isHttpError) {
            string errorMsg;
			if (wr.error.Equals ("Request timeout")) {
                errorMsg = LocalizationString.LOGOLOGIN_networktimeover;
			} else {
                errorMsg = LocalizationString.LOGOLOGIN_networkerror;
			}
            settingScript.openMessagePopup(errorMsg);
            //retry
            isRetry = true;
            retry.SetActive(true);
		} else {
			string result = wr.downloadHandler.text;
			//Debug.Log ("result: "+result);
			JSONObject json = SimpleAES.AES_socketDecrypt (result);

			//Debug.Log ("WWW result: " + json ["result"].str);
			if (json ["result"].str == "diff_version") {
				//link store
				StartCoroutine(openUrl());
			} else if (json ["result"].str == "success"){
				//google login
                if (!string.IsNullOrEmpty(SettingScript.login_info)) {
                    clickLogin();//loginButton.gameObject.SetActive (true);
				} else {
					
                    //        SettingScript.login_info = PlayerPrefs.GetString("token", UnityEngine.Random.Range(1, 100000000) + "");
                    //        if(!PlayerPrefs.HasKey("token"))
                    //            PlayerPrefs.SetString("token", SettingScript.login_info);
                    //		UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");

                    if (login_auth == 0){
                        loginAuthPop.SetActive(true);
                    }
                    else if (login_auth == 1)
                    {
#if UNITY_ANDROID
                        SettingScript.login_method = (int)PROTOCOL.login_method.android;
                    Social.localUser.Authenticate((bool success) => {
                        if(success){
                            //StartCoroutine(getIdToken());
                            //StartCoroutine(getServerAuthCode());
                        }else{
                            settingScript.log(LocalizationString.LOGIN_FailSocialLogin);
                            isRetry = true;
                            retry.SetActive(true);
                            login_auth = 0;
                        }
                    });

					
#elif UNITY_IOS
                        SettingScript.login_method = (int)PROTOCOL.login_method.ios;
                        _Authenticate();

                    
#endif
                    }
                    else if (login_auth == 2)
                    {
                        SettingScript.login_method = (int)PROTOCOL.login_method.guest;
                        if(PlayerPrefs.HasKey("guest_id") && PlayerPrefs.HasKey("guest_pw")){
                            SettingScript.guest_info[0] = SimpleAES.AES_decrypt(PlayerPrefs.GetString("guest_id"), SimpleAES.localKey);
                            SettingScript.guest_info[1] = SimpleAES.AES_decrypt(PlayerPrefs.GetString("guest_pw"), SimpleAES.localKey);
                            SettingScript.login_info = null;
                            clickLogin();
                        }else{
                            guestPop.SetActive(true);
                        }
                    }
				}
			}
		}

	}

	IEnumerator openUrl(){
		settingScript.log(LocalizationString.LOGIN_CheckVersion);
		yield return new WaitForSeconds (2.5f);
		string url = null;
		#if UNITY_ANDROID
		url = "market://details?id=com.familsoft.fortunecloset";
		#elif UNITY_IOS
		url = "itms-apps://itunes.apple.com/app/id1359579661";
		#endif
		if (url != null) {
			Application.OpenURL (url);
		}
	}
	#if UNITY_ANDROID
	//private IEnumerator getIdToken(){
 //       string token = null;
 //       while (string.IsNullOrEmpty(token)) {
 //           token = ((PlayGamesLocalUser)Social.localUser).GetIdToken();
	//		yield return null;
	//	}
 //       SettingScript.login_info = token;
 //       clickLogin();//loginButton.gameObject.SetActive (true);

	//}
	//private IEnumerator getServerAuthCode(){
	//	yield return new WaitUntil(() => { 
	//		return PlayGamesPlatform.Instance.IsAuthenticated(); 
	//	});

	//	GooglePlayGames.OurUtils.PlayGamesHelperObject.RunOnGameThread(() =>
	//		{
	//			string result = PlayGamesPlatform.Instance.GetServerAuthCode();

	//			if (!string.IsNullOrEmpty(result)) {
	//				//					string id = PlayGamesPlatform.Instance.GetUserId();
	//				SettingScript.login_info = result;
 //                   clickLogin();//loginButton.gameObject.SetActive (true);
	//			} else {
	//				settingScript.log(LocalizationString.LOGIN_FailSocialLogin);
	//				isRetry = true;
	//				retry.SetActive(true);
 //                   login_auth = 0;
	//			}
	//		});
	//}
	#endif
}
