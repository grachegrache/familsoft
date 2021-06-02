using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.IO;
using System;
//using UnityEngine.Purchasing;
using System.Data;
#if UNITY_IOS
//using System.Runtime.InteropServices;
#endif
public class SettingScript : MonoBehaviour//, IStoreListener
{
	public static string ip;
	public static string port;
	public static bool isLoaded;
	public static string appVersion;
	public static SystemLanguage language;
	public static int login_method;
	public static string login_info;
    public static string[] guest_info = new string[2];
	public static string nick;
	public static string room;
    public static PROTOCOL.gender gender = PROTOCOL.gender.female;
	public static bool isMasterLeave;
    //private bool isQuit;

	public static SQLiteScript sqliteScript;
	public static SocketScript socketScript;

	public GameObject socketPref;
	public GameObject characterPref;
	public GameObject userMemberPref;
	public GameObject msgMemberPref;
	public GameObject chatMemberPref;
	public GameObject friendMemberPref;
	public GameObject furnitureMemberPref;
	public GameObject clothMemberPref;
	public GameObject goodsPref;
    public GameObject dollPref;
    public GameObject boxPref;
    public GameObject postPref;
    public GameObject guestPostPref;
    public GameObject postReplyPref;

	public static string[] clothIndex = { "skin", "shoes", "hair", "face", "bottom", "top", "hairac" };
	public static string[] furnitureType = { "bed", "chair", "etc", "frame", "plant", "rug", "table", "window" };

	public static clothIconFilter[] clothIconFilter = {
		new clothIconFilter (85f * 5f / 3f, 5f / 3f),
		new clothIconFilter (-25f * 5f / 6f, 5f / 6f),
		new clothIconFilter (-25f * 5f / 3f, 5f / 3f),
		new clothIconFilter (108f, 2f),
		new clothIconFilter (23f * 1.25f, 1.25f),
		new clothIconFilter (-40f, 5f / 6f)
	};
	public Sprite[][] clothes = new Sprite[clothIndex.Length][];

    int[] slot_value = { 100, 300, 500, 700, 900, 1100 };

	public Sprite[] floor_thumb;
	public Sprite[] wall_thumb;
	public Sprite[][] furniture_thumb = new Sprite[furnitureType.Length][];

	public Text logText;
	public GameObject progressBack;
	public GameObject UI;
	public GameObject cash;
	public GameObject folderButton;
	public Transform movable;
	public Text chatingText;
	public InputField chatingInput;
	public GameObject userListPopup;
	public GameObject relationshipPopup;
	public GameObject postPopup;
	public GameObject profilePopup;
	public GameObject profileEditPopup;
	public GameObject profileChPopup;
	public GameObject chatPopup;
	public GameObject shopPopup;
	public GameObject shopItemPopup;
	public GameObject messagePopup;
	public GameObject reportPopup;
	public GameObject clothEdit;
	public GameObject itemBuyPopup;
	public GameObject optionPopup;
    public GameObject minigamePopup;
    public GameObject slotPopup;
    public GameObject slotCharacterPopup;
    public GameObject diaryPopup;
    public GameObject diaryEditPopup;
	public GameObject adoptPopup;
	public GameObject adoptCharacterPopup;

	public JSONObject data;
	public JSONObject currentChData;

	AudioSource audioSource;
	public AudioClip[] bgm;
	public AudioClip[] sound;
	JSONObject chData;
	JSONObject clothData;

	string currentChat;
	relationship currentRelationship;
	post currentPost;
    int currentDiaryPage;

    public bool isSceneLoading;

    private Dictionary<SystemLanguage, string> lanCode = new Dictionary<SystemLanguage, string>();

	enum relationship
	{
		nothing = -1,
		friendList = 0,
		blockList = 1
	}

	enum post
	{
		nothing = -1,
		msg = 0,
		friendRequest = 1
	}

	enum cashamount
	{
		onegem = 5000,
		twogem = 11000,
		threegem = 17000,
		fourgem = 23000,
		fivegem = 29000,
		sixgem = 35000,
		sevengem = 42500,
		eightgem = 50000,
		ninegem = 60000,
		tengem = 75000
	}
	//private static IStoreController m_StoreController;             // Reference to the Purchasing system.
	//private static IExtensionProvider m_StoreExtensionProvider;    // Reference to store-specific Purchasing subsystems.

    #if UNITY_IOS
    [DllImport("__Internal")]
    private static extern void ttsSpeak(string code, string txt);
    #endif
 //   public void Awake ()
	//{
	//	// If we haven't set up the Unity Purchasing reference
	//	if (m_StoreController == null)
	//	{
	//	// Begin to configure our connection to Purchasing
	//		InitializePurchasing();
	//	}
	//}

	public void init ()
	{
		ip = "172.30.1.42";//"127.0.0.1";//"218.38.121.97";//"fortunecloset.cafe24.com";
		port = "7000";
		appVersion = "21";
		room = null;
		language = Application.systemLanguage;
		sqliteScript = GetComponent<SQLiteScript> ();

		loadImages ();
        setLanCode();
		// localize
		if (!LocalizationString.isInitailized)
			LocalizationString.initialize ();

		userListPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.UserList;
		relationshipPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Relationship;
		postPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Post;
		profileEditPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.MAINGAME_ProfileEditMessage;
		shopPopup.transform.GetChild (1).GetComponentInChildren<Text> ().text = LocalizationString.Item;
		shopPopup.transform.GetChild (2).GetComponentInChildren<Text> ().text = LocalizationString.Gem;
        shopPopup.transform.GetChild(3).GetChild(0).GetChild(0).GetChild(0).GetComponentInChildren<Text>().text = "1 " + LocalizationString.Random + " " + LocalizationString.Cloth + " " + LocalizationString.Item;
        shopPopup.transform.GetChild(3).GetChild(0).GetChild(0).GetChild(1).GetComponentInChildren<Text>().text = "1 " + LocalizationString.Random + " " + LocalizationString.Furniture + " " + LocalizationString.Item;
        shopPopup.transform.GetChild(3).GetChild(0).GetChild(0).GetChild(2).GetComponentInChildren<Text>().text = "3 " + LocalizationString.Random + " " + LocalizationString.Cloth + " " + LocalizationString.Item;
        shopPopup.transform.GetChild(3).GetChild(0).GetChild(0).GetChild(3).GetComponentInChildren<Text>().text = "3 " + LocalizationString.Random + " " + LocalizationString.Furniture + " " + LocalizationString.Item;
        shopPopup.transform.GetChild(3).GetChild(0).GetChild(0).GetChild(4).GetComponentInChildren<Text>().text = "5 " + LocalizationString.Random + " " + LocalizationString.Cloth + " " + LocalizationString.Item;
        shopPopup.transform.GetChild(3).GetChild(0).GetChild(0).GetChild(5).GetComponentInChildren<Text>().text = "5 " + LocalizationString.Random + " " + LocalizationString.Furniture + " " + LocalizationString.Item;
        foreach (Transform item in shopPopup.transform.GetChild(4).GetChild(0).GetChild(0)) {
			Text itemText = item.GetComponentInChildren<Text> ();
			itemText.text = itemText.text.Replace ("Gem", LocalizationString.Gem);
		}
		shopPopup.transform.GetChild (5).GetComponentInChildren<Text> ().text = LocalizationString.SHOP_msg1;
		shopPopup.transform.GetChild (6).GetComponentInChildren<Text> ().text = LocalizationString.SHOP_msg2;
		shopItemPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Random + " " + LocalizationString.Item;
		optionPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Option;
		optionPopup.transform.GetChild (0).GetChild (1).GetChild (1).GetComponent<Text> ().text = LocalizationString.OPTION_FashionshowView;
		optionPopup.transform.GetChild (0).GetChild (2).GetChild (1).GetComponent<Text> ().text = LocalizationString.OPTION_Report;
		optionPopup.transform.GetChild (0).GetChild (3).GetChild (1).GetComponent<Text> ().text = LocalizationString.OPTION_BGM;
		optionPopup.transform.GetChild (0).GetChild (4).GetChild (1).GetComponent<Text> ().text = LocalizationString.OPTION_SE;
        optionPopup.transform.GetChild(0).GetChild(5).GetChild(1).GetComponent<Text>().text = LocalizationString.OPTION_Speak;
        optionPopup.transform.GetChild(0).GetChild(6).GetChild(1).GetComponent<Text>().text = LocalizationString.OPTION_friendRequest;
        optionPopup.transform.GetChild(0).GetChild(7).GetChild(1).GetComponent<Text>().text = LocalizationString.OPTION_visitRequest;
		reportPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Report;

        minigamePopup.transform.GetChild(0).GetChild(1).GetComponentInChildren<Text>().text = LocalizationString.DiceGame;
        minigamePopup.transform.GetChild(0).GetChild(2).GetComponentInChildren<Text>().text = LocalizationString.FootholdGame;
        minigamePopup.transform.GetChild(0).GetChild(3).GetComponentInChildren<Text>().text = LocalizationString.FishingCafe;
        minigamePopup.transform.GetChild(0).GetChild(4).GetComponentInChildren<Text>().text = LocalizationString.PianoRoom;
        minigamePopup.transform.GetChild(0).GetChild(5).GetComponentInChildren<Text>().text = LocalizationString.HangmanGame;
        minigamePopup.transform.GetChild(0).GetChild(6).GetComponentInChildren<Text>().text = LocalizationString.Running;

        slotPopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = LocalizationString.Slot;
        for (int i = 2; i < 8; i++){
            slotPopup.transform.GetChild(0).GetChild(i).GetChild(0).GetChild(1).GetComponentInChildren<Text>().text = LocalizationString.Save;
            slotPopup.transform.GetChild(0).GetChild(i).GetChild(0).GetChild(2).GetComponentInChildren<Text>().text = LocalizationString.Load;
        }

        slotCharacterPopup.transform.GetChild(0).GetChild(0).GetChild(1).GetComponentInChildren<Text>().text = LocalizationString.Save;
        slotCharacterPopup.transform.GetChild(0).GetChild(0).GetChild(2).GetComponentInChildren<Text>().text = LocalizationString.Load;

        diaryPopup.transform.GetChild (3).GetComponentInChildren<Text> ().text = LocalizationString.Write;
        diaryEditPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Diary + " " + LocalizationString.Edit;
        List<Dropdown.OptionData> options = diaryEditPopup.transform.GetChild (0).GetChild (3).GetComponent<Dropdown> ().options;
        for (int i = 0; i < options.Count; i++){
            options [i].text = LocalizationString.access_level[i];
        }
        diaryEditPopup.transform.GetChild (0).GetChild (4).GetComponentInChildren<Text> ().text = LocalizationString.Cancel;
        diaryEditPopup.transform.GetChild (0).GetChild (5).GetComponentInChildren<Text> ().text = LocalizationString.Confirm;
        diaryEditPopup.transform.GetChild (1).GetChild (0).GetComponent<Text> ().text = LocalizationString.GuestBook + " " + LocalizationString.Edit;
        diaryEditPopup.transform.GetChild (1).GetChild (2).GetComponentInChildren<Text> ().text = LocalizationString.Cancel;
        diaryEditPopup.transform.GetChild (1).GetChild (3).GetComponentInChildren<Text> ().text = LocalizationString.Confirm;

		adoptPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Adopt;
		Transform adoptStatus = adoptCharacterPopup.transform.GetChild (0).GetChild (3);
		adoptStatus.GetChild (0).GetChild (0).GetComponent<Text> ().text = LocalizationString.Stamina;
		adoptStatus.GetChild (1).GetChild (0).GetComponent<Text> ().text = LocalizationString.Running+" "+LocalizationString.Speed;
		adoptStatus.GetChild (2).GetChild (0).GetComponent<Text> ().text = LocalizationString.Running+" "+LocalizationString.Record;
		//if (!Advertisement.isInitialized) {
		//	Debug.Log ("unity ads not initial");
		//	if (Application.platform == RuntimePlatform.Android) {
  //              Advertisement.Initialize ("1787080");
  //              Debug.Log("Android");
		//	} else if (Application.platform == RuntimePlatform.IPhonePlayer) {
  //              Advertisement.Initialize ("1787081");
  //              Debug.Log("IPhonePlayer");
		//	} else {
  //              Advertisement.Initialize ("1787080");
  //              Debug.Log("else");
		//	}
		//} else {
		//	Debug.Log ("unity ads initialized");
		//}

		audioSource = GetComponent<AudioSource> ();

		isLoaded = true;
	}

    void setLanCode(){
        lanCode.Add(SystemLanguage.Afrikaans, "af");
        lanCode.Add(SystemLanguage.Arabic, "ar");
        //lanCode.Add(SystemLanguage.Basque.ToString(), ""); // not support
        lanCode.Add(SystemLanguage.Belarusian, "be");
        lanCode.Add(SystemLanguage.Bulgarian, "bg");
        lanCode.Add(SystemLanguage.Catalan, "ca");
        lanCode.Add(SystemLanguage.Chinese, "zh");
        lanCode.Add(SystemLanguage.Czech, "cs");
        lanCode.Add(SystemLanguage.Danish, "da");
        lanCode.Add(SystemLanguage.Dutch, "nl");
        lanCode.Add(SystemLanguage.English, "en");
        lanCode.Add(SystemLanguage.Estonian, "et");
        lanCode.Add(SystemLanguage.Faroese, "fo");
        lanCode.Add(SystemLanguage.Finnish, "fi");
        lanCode.Add(SystemLanguage.French, "fr");
        lanCode.Add(SystemLanguage.German, "de");
        lanCode.Add(SystemLanguage.Greek, "el");
        lanCode.Add(SystemLanguage.Hebrew, "he");
        lanCode.Add(SystemLanguage.Hungarian, "hu");
        lanCode.Add(SystemLanguage.Icelandic, "is");
        lanCode.Add(SystemLanguage.Indonesian, "id");
        lanCode.Add(SystemLanguage.Italian, "it");
        lanCode.Add(SystemLanguage.Japanese, "ja");
        lanCode.Add(SystemLanguage.Korean, "ko");
        lanCode.Add(SystemLanguage.Latvian, "lv");
        lanCode.Add(SystemLanguage.Lithuanian, "lt");
        lanCode.Add(SystemLanguage.Norwegian, "no");
        lanCode.Add(SystemLanguage.Polish, "pl");
        lanCode.Add(SystemLanguage.Portuguese, "pt");
        lanCode.Add(SystemLanguage.Romanian, "ro");
        lanCode.Add(SystemLanguage.Russian, "ru");
        lanCode.Add(SystemLanguage.SerboCroatian, "hr");
        lanCode.Add(SystemLanguage.Slovak, "sk");
        lanCode.Add(SystemLanguage.Slovenian, "sl");
        lanCode.Add(SystemLanguage.Spanish, "es");
        lanCode.Add(SystemLanguage.Swedish, "sv");
        lanCode.Add(SystemLanguage.Thai, "th");
        lanCode.Add(SystemLanguage.Turkish, "tr");
        lanCode.Add(SystemLanguage.Ukrainian, "uk");
        lanCode.Add(SystemLanguage.Vietnamese, "vi");
        lanCode.Add(SystemLanguage.ChineseSimplified, "zh-Hans");
        lanCode.Add(SystemLanguage.ChineseTraditional, "zh-Hant");
        #if UNITY_EDITOR

        #elif UNITY_ANDROID
        using (AndroidJavaClass jc = new AndroidJavaClass("com.familsoft.fortunecloset.TTSUtils"))
        {
            jc.CallStatic("initialize");
        }
        #elif UNITY_IOS
            ttsSpeak("en", " ");
        #endif
    }
	void OnApplicationPause (bool pause)
	{
//		if (pause) {
//			//idle packet
//			if (socketScript != null) {
//				socketScript.sendIdle(pause);
//			}
//		} else {
//			//return packet
//			if (socketScript != null) {
//				socketScript.sendIdle(pause);
//			}
//		}
        if (socketScript != null){// && !isQuit){
			socketScript.sendIdle(pause);
		}
	}

	void Update ()
	{
		#if UNITY_ANDROID
		if (Application.platform == RuntimePlatform.Android) {
			if (Input.GetKeyUp (KeyCode.Escape)) {
				openMessagePopup (LocalizationString.MSG_Quit, false, () => {
					//Application.Quit ();

                    //AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
                    //AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject>("currentActivity");
                    //jo.Call("finish");

                    //AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
                    //AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject>("currentActivity");
                    //if(jo.Call<bool>("moveTaskToBack",true)){
                    //    isQuit = true;
                    //    if (socketScript != null)
                    //    {
                    //        socketScript.sendQuit();
                    //    }
                    //    SettingScript.login_info = null;
                    //    isLoaded = false;
                    //    Destroy(gameObject);
                    //    UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
                    //} else {
                    //    Application.Quit();
                    //}

                    AndroidJavaClass jc = new AndroidJavaClass("java.lang.System");
                    //jc.CallStatic("runFinalization");
                    jc.CallStatic("exit",0);
				});
			}
		}
		#endif
	}

	public void OnDestroy()
	{
#if UNITY_EDITOR

#elif UNITY_ANDROID
        using (AndroidJavaClass jc = new AndroidJavaClass("com.familsoft.fortunecloset.TTSUtils"))
        {
            jc.CallStatic("destroy");
        }
#endif
		Debug.Log ("setting manager on destroy");
	}
	//public void ShowRewardedAd ()
	//{
 //       Debug.Log("isInitialized" +Advertisement.isInitialized);
 //       Debug.Log("isSupported" + Advertisement.isSupported);
 //       Debug.Log("IsReady"+Advertisement.IsReady("rewardedVideo"));
	//	if (Advertisement.IsReady ("rewardedVideo")) {
	//		var options = new ShowOptions { resultCallback = HandleShowResult };
	//		Advertisement.Show ("rewardedVideo", options);
 //       } else {
 //           SettingScript.socketScript.fashionshow("ad_end");
 //       }
	//}
	//private void HandleShowResult (ShowResult result)
	//{
	//	switch (result) {
	//	case ShowResult.Finished:
	//		Debug.Log ("The ad was successfully shown.");
	//		SettingScript.socketScript.fashionshow ("ad_end");
	//		break;

	//	case ShowResult.Skipped:
	//		log (LocalizationString.MSG_FailToWatchMessage);
 //               SettingScript.socketScript.fashionshow("ad_skip");
	//		break;

	//	case ShowResult.Failed:
 //               SettingScript.socketScript.fashionshow("ad_end");
	//		break;
	//	}
	//}

	public void loadImages ()
	{
		for (int i = 0; i < clothIndex.Length; i++) {
			clothes [i] = Resources.LoadAll<Sprite> (clothIndex [i]);
		}

		Sprite[] allFurnitureThumb = Resources.LoadAll<Sprite> ("furniture_thumbnail");
		List<Sprite> tmpList = new List<Sprite> ();

		for (int j = 0; j < allFurnitureThumb.Length; j++) {
			if (allFurnitureThumb [j].name.Contains ("floor")) {
				tmpList.Add (allFurnitureThumb [j]);
			}
		}
		floor_thumb = tmpList.ToArray ();
		tmpList.Clear ();

		for (int j = 0; j < allFurnitureThumb.Length; j++) {
			if (allFurnitureThumb [j].name.Contains ("wall")) {
				tmpList.Add (allFurnitureThumb [j]);
			}
		}
		wall_thumb = tmpList.ToArray ();
		tmpList.Clear ();

		for (int i = 0; i < furnitureType.Length; i++) {
			for (int j = 0; j < allFurnitureThumb.Length; j++) {
				if (allFurnitureThumb [j].name.Contains (furnitureType [i])) {
					tmpList.Add (allFurnitureThumb [j]);
				}
			}
			furniture_thumb [i] = tmpList.ToArray ();
			tmpList.Clear ();
		}
        
	}

	public void setSocketActive (bool isActive)
	{
		if (isActive) {
			Transform s = transform.Find ("SocketManager");
			if (s == null) {
				GameObject socketInstance = Instantiate (socketPref, transform);
				socketInstance.name = "SocketManager";
				socketScript = socketInstance.GetComponent<SocketScript> ();

			}
		} else {
			if (socketScript != null) {
				Destroy (socketScript.gameObject);
				socketScript = null;
			}
		}
	}

	public void log (string msg)
	{
		logText.text = msg;
		logText.transform.parent.gameObject.SetActive (true);
		CancelInvoke ("deactiveLog");
		Invoke ("deactiveLog", 3f);
	}

	void deactiveLog ()
	{
		logText.transform.parent.gameObject.SetActive (false);
	}

	public void setProgressBackActive (bool active)
	{
		progressBack.SetActive (active);
	}

	public void setUIActive (bool active)
	{
		UI.SetActive (active);
	}

	public void setChatingActive (bool active)
	{
		chatingText.transform.parent.parent.parent.parent.gameObject.SetActive (active);
	}

	public void setButtonsActive (bool active)
	{
		folderButton.SetActive (active);
		
	}

	public void setCashActive (bool active)
	{
		cash.SetActive (active);
	}

	public void setCashShopActive (bool active)
	{
		cash.transform.GetChild (1).gameObject.SetActive (active);
	}

	public void hidePopups ()
	{
        chatPopup.SetActive(false);
        postPopup.SetActive(false);
        shopPopup.SetActive(false);
        reportPopup.SetActive(false);
        itemBuyPopup.SetActive(false);
        messagePopup.SetActive(false);
        profilePopup.SetActive(false);
        shopItemPopup.SetActive(false);
        userListPopup.SetActive(false);
        profileEditPopup.SetActive(false);
        relationshipPopup.SetActive(false);
        slotPopup.SetActive(false);
        optionPopup.SetActive(false);
        minigamePopup.SetActive(false);
        profileChPopup.SetActive(false);
        slotCharacterPopup.SetActive(false);
        diaryPopup.SetActive(false);
        diaryEditPopup.SetActive(false);
		adoptPopup.SetActive (false);
		adoptCharacterPopup.SetActive (false);
	}

	public void openMessagePopup (string msg)
	{
		messagePopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = msg;
		Button confirm = messagePopup.transform.GetChild (0).GetChild (1).GetComponent<Button> ();
		confirm.onClick.RemoveAllListeners ();
		confirm.onClick.AddListener (() => {
			messagePopup.SetActive (false);
		});
		confirm.gameObject.SetActive (true);
		messagePopup.transform.GetChild (0).GetChild (2).gameObject.SetActive (false);
		messagePopup.transform.GetChild (0).GetChild (3).gameObject.SetActive (false);
		messagePopup.SetActive (true);
	}

	public void openMessagePopup (string msg, bool isConfirm, UnityEngine.Events.UnityAction func)
	{
		messagePopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = msg;
		if (func == null) {
			messagePopup.transform.GetChild (0).GetChild (1).gameObject.SetActive (true);
			messagePopup.transform.GetChild (0).GetChild (2).gameObject.SetActive (false);
			messagePopup.transform.GetChild (0).GetChild (3).gameObject.SetActive (false);
		} else {
			if (isConfirm) {
				Button confirm = messagePopup.transform.GetChild (0).GetChild (1).GetComponent<Button> ();
				confirm.onClick.RemoveAllListeners ();
				confirm.onClick.AddListener (func);
				confirm.gameObject.SetActive (true);
				messagePopup.transform.GetChild (0).GetChild (2).gameObject.SetActive (false);
				messagePopup.transform.GetChild (0).GetChild (3).gameObject.SetActive (false);
			} else {
				messagePopup.transform.GetChild (0).GetChild (1).gameObject.SetActive (false);
				Button yes = messagePopup.transform.GetChild (0).GetChild (2).GetComponent<Button> ();
				yes.onClick.RemoveAllListeners ();
				yes.onClick.AddListener (func);
				yes.gameObject.SetActive (true);
				messagePopup.transform.GetChild (0).GetChild (3).gameObject.SetActive (true);
			}
		}

		messagePopup.SetActive (true);
	}

	public void playBGM (int index)
	{
        if (!bgm[index].Equals(audioSource.clip)){
            audioSource.clip = bgm[index];
            if (PlayerPrefs.GetInt("bgm", 1) == 1)
            {
                audioSource.Play();
            }
        }
	}

	public void playSound (int index)
	{
		if (PlayerPrefs.GetInt ("se", 1) == 1) {
			audioSource.PlayOneShot (sound [index]);
		}
	}

	public JSONObject getChData ()
	{
		return chData;
	}

	public void setChData (JSONObject data)
	{
		chData = data;
	}

	public CharacterScript createSelf (Transform parent)
	{
		CharacterScript chScript = null;
		if (chData) {
			GameObject ch = Instantiate (characterPref, parent);
			ch.name = nick;

			chScript = ch.GetComponent<CharacterScript> ();
			for (int i = 0; i < clothIndex.Length; i++) {
				int index = (int)chData ["userData"] [clothIndex [i]].n;
				chScript.setClothIndex (i, index);
			}
			RectTransform chRect = ch.GetComponent<RectTransform> ();
			chRect.anchoredPosition = Vector3.zero;
			chScript.setNickname (ch.name);

		}

		return chScript;
	}

	public CharacterScript createSelf (Transform parent, Vector2 loc)
	{
		CharacterScript chScript = null;
		if (chData) {
			GameObject ch = Instantiate (characterPref, parent);
			ch.name = nick;

			chScript = ch.GetComponent<CharacterScript> ();
			for (int i = 0; i < clothIndex.Length; i++) {
				int index = (int)chData ["userData"] [clothIndex [i]].n;
				chScript.setClothIndex (i, index);
			}
			RectTransform chRect = ch.GetComponent<RectTransform> ();
			chRect.anchoredPosition = loc;
			chScript.setNickname (ch.name);
		}

		return chScript;
	}

	public CharacterScript createCharacter (JSONObject data, Transform parent)
	{
		GameObject ch = Instantiate (characterPref, parent);
		ch.name = data ["nickname"].str;

		CharacterScript chScript = ch.GetComponent<CharacterScript> ();
		for (int j = 0; j < clothIndex.Length; j++) {
			int index = (int)data [clothIndex [j]].n;
			chScript.setClothIndex (j, index);
		}
		if (data.HasFields (new string[]{ "x", "y" })) {
			RectTransform chRect = ch.GetComponent<RectTransform> ();
			chRect.anchoredPosition =
			new Vector2 (data ["x"].f, data ["y"].f);
		}
		chScript.setNickname (ch.name);

		return chScript;
	}

	public void setCharacter (JSONObject data, CharacterScript ch)
	{
        if (!ch.isInit)
            ch.Awake();
        
		for (int i = 0; i < clothIndex.Length; i++) {
			int num = (int)data [clothIndex [i]].n;
			ch.setClothIndex (i, num);
			Image part = ch.transform.Find ("body").Find (clothIndex [i]).GetComponent<Image> ();
			Color c = part.color;
			if (num >= 0) {
				int index = num;
				if (clothIndex [i].Equals ("hair") || clothIndex [i].Equals ("face") || clothIndex [i].Equals ("hairac")) {
					index *= 3;
				} else {
					index *= 4;
				}
				part.sprite = clothes [i] [index];
				c.a = 1f;
			} else {
				part.sprite = null;
				c.a = 0;
			}
			part.color = c;
		}
	}

	public void setProfileCharacter (JSONObject data, Transform parent)
	{
		if (data == null) {
			return;
		}
		foreach (Transform child in parent) {
			int type = Array.IndexOf (clothIndex, child.name);
			int index = (int)data [child.name].n;

			Image part = child.GetComponent<Image> ();
			Color c = part.color;
			if (index >= 0) {
				Sprite cloth;
				if (child.name.Equals ("hair") || child.name.Equals ("face") || child.name.Equals ("hairac")) {
					cloth = clothes [type] [index * 3];
				} else {
					cloth = clothes [type] [index * 4];
				}
				part.sprite = cloth;
				c.a = 1f;
			} else {
				part.sprite = null;
				c.a = 0;
			}
			part.color = c;
		}
	}

    public DollScript createDoll(JSONObject data, Transform parent)
    {
        GameObject doll = Instantiate(dollPref, parent);
        doll.name = "@"+data["nickname"].str;

        DollScript dollScript = doll.GetComponent<DollScript>();
        for (int j = 0; j < clothIndex.Length; j++)
        {
            int index = (int)data[clothIndex[j]].n;
            dollScript.setClothIndex(j, index);
        }
        if (data.HasFields(new string[] { "x", "y" }))
        {
            RectTransform chRect = doll.GetComponent<RectTransform>();
            chRect.anchoredPosition = new Vector2(data["x"].f, data["y"].f);
        }
        
        if(data.HasField("slotNum")){
        	dollScript.setNickname(LocalizationString.Slot + " " + ((int)data["slotNum"].n + 1));
        }else if(data.HasField("nickname")){
			dollScript.setNickname (data ["nickname"].str);
        }
        
        return dollScript;
    }

    Transform findUser(string nickname)
    {
        Transform user = null;
        if (socketScript.fishingScript)
        {
            user = socketScript.fishingScript.seat_back.Find(nickname);
            if (user == null)
            {
                user = socketScript.fishingScript.seat_front.Find(nickname);
            }
        }
        else if (movable != null)
        {
            user = movable.Find(nickname);
        }

        return user;
    }

	//--------------------------------------------------------------------------//
	//user list

	public void userListClick ()
	{
		socketScript.getUserList ();
		setProgressBackActive (true);
		playSound (1);
	}

    public void userListQuery(){
        string query = userListPopup.transform.GetChild(0).GetChild(3).GetComponent<InputField>().text;
        socketScript.searchUser(query);
        playSound(1);
    }

	public void onUserList (JSONObject data)
	{
		if (data ["result"].str.Equals ("success")) {
			Transform contents = userListPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
			addUserMembers (data, contents, "userList");
			userListPopup.SetActive (true);
		} else if (data ["result"].str.Equals ("fail")) {
		} else {
		}

		setProgressBackActive (false);
	}

	void addUserMembers (JSONObject data, Transform contents, string list)
	{
		destroyChilds (contents);

		for (int i = 0; i < data [list].Count; i++) {
			string nickname = data [list] [i] ["nickname"].str;
			if (nickname != null) {
				Transform userMem = GameObject.Instantiate (userMemberPref, contents).transform;

				userMem.GetComponent<Button> ().onClick.AddListener (() => {
					socketScript.profile (nickname);
					setProgressBackActive (true);
					playSound (1);
				});
				userMem.GetChild (0).GetComponent<Text> ().text = nickname;
				setProfileCharacter (data [list] [i], userMem.GetChild (1).GetChild (0));
				userMem.GetChild (2).GetComponent<Text> ().text = ((SystemLanguage)data [list] [i] ["language"].n).ToString ();
			}
		}
	}

	//--------------------------------------------------------------------------//
	//msg

	public void msgClick ()
	{
		List<string> userList = sqliteScript.getUsersFromChat ();
		Transform contents = postPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);

		if (userList.Count == 0) {
			currentPost = post.msg;
			destroyChilds (contents);

			postPopup.transform.GetChild (0).GetChild (3).GetChild (0).gameObject.SetActive (false);

			JSONObject msgData = sqliteScript.getUnreadedChat (PROTOCOL.message_type.friend);
			if (msgData == null || msgData.Count <= 0) {
				postPopup.transform.GetChild (0).GetChild (4).GetChild (0).gameObject.SetActive (false);
			} else {
				postPopup.transform.GetChild (0).GetChild (4).GetChild (0).GetComponentInChildren<Text> ().text = msgData.Count + "";
				postPopup.transform.GetChild (0).GetChild (4).GetChild (0).gameObject.SetActive (true);
			}
			postPopup.SetActive (true);
			profilePopup.SetActive (false);
		} else {
			socketScript.getUserDatas (userList, "msg");
			setProgressBackActive (true);
		}
		playSound (0);
	}

	class MsgComparer : Comparer<JSONObject>
	{
		public override int Compare (JSONObject a, JSONObject b)
		{
			DateTime aDateTime = DateTime.Parse (a ["sendTime"].str);
			DateTime bDateTime = DateTime.Parse (b ["sendTime"].str);
			return aDateTime.CompareTo (bDateTime);
		}
	}

	//for msg user datas
    public void onGetUserDatasTypeMsg (JSONObject res)
	{
		setProgressBackActive (false);

		currentPost = post.msg;
		Transform contents = postPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
		destroyChilds (contents);

		// create dictionary with nicknames
		JSONObject msgData;
		List<JSONObject> msgList = new List<JSONObject> ();
		List<string> userList = sqliteScript.getUsersFromChat ();
		foreach (string user in userList) {
			JSONObject value;
			msgData = sqliteScript.getUnreadedChat (user);
			if (msgData == null || msgData.Count <= 0) {
				msgData = sqliteScript.getRecentChat (user, 1);
				//Debug.Log ("recent chat " + msgData);
				if (msgData == null || msgData.Count <= 0)
					continue;

				value = msgData [0];
			} else {
				msgData [msgData.Count - 1].SetField ("readed", msgData.Count);
				value = msgData [msgData.Count - 1];
			}
			//Debug.Log ("value " + value);
			msgList.Add (value);

		}

		// sort list as send time
		msgList.Sort (new MsgComparer ());

		// add msg members and calculate total readed
		string sendTime;
		int totalReaded = 0;
		DateTime newDateTime;
		foreach (JSONObject msg in msgList) {
			totalReaded += (int)msg ["readed"].n;

			string user;
			if (msg ["from"].str != nick) {
				user = msg ["from"].str;
			} else {
				user = msg ["to"].str;
			}

			Transform msgMem = GameObject.Instantiate (msgMemberPref, contents).transform;
			setProfileCharacter (res ["userDatas"] [user], msgMem.GetChild (0).GetChild (0));
			msgMem.GetChild (1).GetComponent<Text> ().text = user;
			msgMem.GetChild (2).GetComponent<Text> ().text = msg ["msg"].str;
			if ((int)msg ["readed"].n > 0) {
				msgMem.GetChild (3).GetComponentInChildren<Text> ().text = (int)msg ["readed"].n + "";
			} else {
				msgMem.GetChild (3).gameObject.SetActive (false);
			}

			newDateTime = DateTime.Parse (msg ["sendTime"].str);
			newDateTime = newDateTime.ToLocalTime ();
			//Debug.Log (newDateTime);
			sendTime = newDateTime.ToShortTimeString ();
			if (newDateTime.Date != DateTime.Today) {
				sendTime = newDateTime.ToString ("yyyy-MM-dd") + " " + sendTime;
			}
			msgMem.GetChild (4).GetComponent<Text> ().text = sendTime;

			msgMem.GetComponent<Button> ().onClick.AddListener (() => {
				chatClick (res ["userDatas"] [user]);
			});
		}

		if (totalReaded > 0) {
			postPopup.transform.GetChild (0).GetChild (3).GetChild (0).GetComponentInChildren<Text> ().text = totalReaded + "";
			postPopup.transform.GetChild (0).GetChild (3).GetChild (0).gameObject.SetActive (true);
		} else {
			postPopup.transform.GetChild (0).GetChild (3).GetChild (0).gameObject.SetActive (false);
		}

		msgData = sqliteScript.getUnreadedChat (PROTOCOL.message_type.friend);
		if (msgData == null || msgData.Count <= 0) {
			postPopup.transform.GetChild (0).GetChild (4).GetChild (0).gameObject.SetActive (false);
		} else {
			postPopup.transform.GetChild (0).GetChild (4).GetChild (0).GetComponentInChildren<Text> ().text = msgData.Count + "";
			postPopup.transform.GetChild (0).GetChild (4).GetChild (0).gameObject.SetActive (true);
		}

		postPopup.SetActive (true);
		profilePopup.SetActive (false);

	}

	//--------------------------------------------------------------------------//
	//relationship

	public void postBackClick ()
	{
		currentPost = post.nothing;
		postPopup.SetActive (false);
		playSound (2);
	}

	public void friendListClick ()
	{
		socketScript.getFriendList ();
		profilePopup.SetActive (false);
		setProgressBackActive (true);
		playSound (0);
	}

	public void relationshipBackClick ()
	{
		currentRelationship = relationship.nothing;
		relationshipPopup.SetActive (false);
		playSound (2);
	}

	public void friendRequestClick ()
	{
		currentPost = post.friendRequest;
		Transform contents = postPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
		destroyChilds (contents);

		JSONObject data = sqliteScript.getChat (PROTOCOL.message_type.friend);
		if (data != null) {
			for (int i = 0; i < data.Count; i++) {
				if (data [i] ["msg"].str == "request") {
					if (data [i] ["to"].str == nick) {
						JSONObject msg = data [i];
						Transform mem = addChat (msg, contents);

						mem.GetChild (1).GetComponent<Button> ().onClick.AddListener (() => {
							socketScript.friend (msg ["from"].str, "refuse");
							sqliteScript.deleteChat (msg);
							Destroy (mem.gameObject);
						});
						mem.GetChild (2).GetComponent<Button> ().onClick.AddListener (() => {
							socketScript.friend (msg ["from"].str, "accept");
							sqliteScript.deleteChat (msg);
							Destroy (mem.gameObject);
						});

					}
				} else {
					addChat (data [i], contents);
				}
				sqliteScript.updateChat (data [i]);
			}
		}
		postPopup.transform.GetChild (0).GetChild (4).GetChild (0).gameObject.SetActive (false);
		postPopup.SetActive (true);
		playSound (0);

        ScrollRect scrollRect = postPopup.transform.GetChild(0).GetChild(2).GetComponent<ScrollRect>();
        scrollRect.verticalNormalizedPosition = 0;
        Canvas.ForceUpdateCanvases();
	}

	public void blockListClick ()
	{
		currentRelationship = relationship.blockList;
		Transform contents = relationshipPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
		addUserMembers (getChData (), contents, "blockList");
		relationshipPopup.SetActive (true);
		playSound (0);
	}

	public void onFriendList (JSONObject data)
	{
		currentRelationship = relationship.friendList;
		if (data ["result"].str == "success") {
			Transform contents = relationshipPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
			addUserMembers (data, contents, "friendList");
			relationshipPopup.SetActive (true);
		} else if (data ["result"].str == "fail") {
			log (LocalizationString.MAINGAME_FriendListFail);
		}
		setProgressBackActive (false);
	}

	public void onBlock (JSONObject data)
	{
		if (data ["result"].str == "success") {
			getChData () ["blockList"].Add (data ["userData"]);

			profilePopup.transform.GetChild (0).GetChild (5).GetChild (4).gameObject.SetActive (false);
			Button unblock = profilePopup.transform.GetChild (0).GetChild (5).GetChild (5).GetComponent<Button> ();
			unblock.onClick.RemoveAllListeners ();
			unblock.onClick.AddListener (() => {
				openMessagePopup (LocalizationString.MAINGAME_UnblockMessage, false,
					() => {
						socketScript.unblock (data ["nickname"].str);
						setProgressBackActive (true);
						playSound (0);
					});
				playSound (1);
			});
			unblock.gameObject.SetActive (true);

			if (currentRelationship == relationship.blockList) {
				Transform contents = relationshipPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
				addUserMembers (getChData (), contents, "blockList");

			}
		} else if (data ["result"].str == "fail") {
		} else {
		}
		messagePopup.SetActive (false);
		setProgressBackActive (false);
	}

	public void onUnblock (JSONObject data)
	{
		if (data ["result"].str == "success") {
			List<JSONObject> blockList = getChData () ["blockList"].list;
			foreach (JSONObject r in blockList) {
				if (r ["nickname"].str == data ["nickname"].str) {
					blockList.Remove (r);
					break;
				}
			}
			
			Button block = profilePopup.transform.GetChild (0).GetChild (5).GetChild (4).GetComponent<Button> ();
			block.onClick.RemoveAllListeners ();
			block.onClick.AddListener (() => {
				openMessagePopup (LocalizationString.MAINGAME_BlockMessage, false,
					() => {
						socketScript.block (data ["nickname"].str);
						setProgressBackActive (true);
						playSound (0);
					});
				playSound (1);
			});
			block.gameObject.SetActive (true);
			profilePopup.transform.GetChild (0).GetChild (5).GetChild (5).gameObject.SetActive (false);

			if (currentRelationship == relationship.blockList) {
				Transform contents = relationshipPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
				addUserMembers (getChData (), contents, "blockList");

			}
		} else if (data ["result"].str == "fail") {
		} else {
		}
		messagePopup.SetActive (false);
		setProgressBackActive (false);
	}

	//--------------------------------------------------------------------------//
	//profile

	public void profileClick ()
	{
		socketScript.profile (nick);
		setProgressBackActive (true);
		playSound (1);
	}

	public void onProfile (JSONObject data)
	{
		setProgressBackActive (false);
        profilePopup.transform.GetChild(0).GetChild(1).GetComponent<Button>().onClick.RemoveAllListeners();
		profilePopup.transform.GetChild (0).GetChild (1).GetComponent<Button> ().onClick.AddListener (() => {
			profileChPopup.SetActive (true);
			setCharacter (data ["userData"], profileChPopup.transform.GetChild (0).GetChild (1).GetComponent<CharacterScript> ());
			playSound (0);
		});
		setProfileCharacter (data ["userData"], profilePopup.transform.GetChild (0).GetChild (1).GetChild (0));
		profilePopup.transform.GetChild (0).GetChild (2).GetComponentInChildren<Text> ().text = data ["userData"] ["nickname"].str;
		profilePopup.transform.GetChild (0).GetChild (3).GetComponentInChildren<Text> ().text = data ["userData"] ["profile"].str;
        if(data["userData"]["profile"].str == null || data["userData"]["profile"].str.Trim() == ""){
            profilePopup.transform.GetChild(0).GetChild(3).gameObject.SetActive(false);
        }else{
            profilePopup.transform.GetChild(0).GetChild(3).gameObject.SetActive(true);
        }

		Transform act;
		if (data ["userData"] ["nickname"].str.Equals (nick)) {
			act = profilePopup.transform.GetChild (0).GetChild (4);

			JSONObject msgData = sqliteScript.getUnreadedChat ();
			if (msgData == null || msgData.Count <= 0) {
				act.GetChild (2).GetChild (0).gameObject.SetActive (false);
			} else {
				act.GetChild (2).GetChild (0).GetComponentInChildren<Text> ().text = msgData.Count + "";
				act.GetChild (2).GetChild (0).gameObject.SetActive (true);
			}

            Button diary = act.GetChild(5).GetComponent<Button>();
            diary.onClick.RemoveAllListeners();
            diary.onClick.AddListener(() =>
            {
                diaryClick(data);
            });

			Button adopt = act.GetChild (6).GetComponent<Button> ();
			adopt.onClick.RemoveAllListeners ();
			adopt.onClick.AddListener (() => {
				adoptClick ();
			});
			
			act.gameObject.SetActive (true);
			profilePopup.transform.GetChild (0).GetChild (5).gameObject.SetActive (false);

		} else {
			act = profilePopup.transform.GetChild (0).GetChild (5);
			Button friendAdd = act.GetChild (0).GetComponent<Button> ();
			Button friendRemove = act.GetChild (1).GetComponent<Button> ();

			if (data ["isFriend"].b) {
				friendRemove.onClick.RemoveAllListeners ();
				friendRemove.onClick.AddListener (() => {
					openMessagePopup (LocalizationString.MAINGAME_FriendRemoveMessage, false,
						() => {
							socketScript.friend (data ["userData"] ["nickname"].str, "delete");
							setProgressBackActive (true);
							messagePopup.SetActive (false);
							playSound (0);
						});
					playSound (1);
				});
				friendAdd.gameObject.SetActive (false);
				friendRemove.gameObject.SetActive (true);
			} else {
				friendAdd.onClick.RemoveAllListeners ();
				friendAdd.onClick.AddListener (() => {
					openMessagePopup (LocalizationString.MAINGAME_FriendAddMessage, false,
						() => {
							socketScript.friend (data ["userData"] ["nickname"].str, "request");
							setProgressBackActive (true);
							messagePopup.SetActive (false);
							playSound (0);
						});
					playSound (1);
				});
				friendAdd.gameObject.SetActive (true);
				friendRemove.gameObject.SetActive (false);
			}
			Button chat = act.GetChild (2).GetComponent<Button> ();
			chat.onClick.RemoveAllListeners ();
			chat.onClick.AddListener (() => {
				chatClick (data ["userData"]);
				profilePopup.SetActive (false);
				playSound (0);
			});

			Button visit = act.GetChild (3).GetComponent<Button> ();
			visit.onClick.RemoveAllListeners ();
			visit.onClick.AddListener (() => {
                if (room == data["userData"]["nickname"].str)
                    return;
                foreach (JSONObject blockMem in getChData()["blockList"].list)
                {
                    if (blockMem["nickname"].str == data["userData"]["nickname"].str)
                    {
                        return;
                    }
                }
				visitClick (data ["userData"] ["nickname"].str);
				profilePopup.SetActive (false);
				
			});

            bool isBlocked = false;
            foreach (JSONObject blockMem in getChData()["blockList"].list)
            {
                if (blockMem["nickname"].str == data["userData"]["nickname"].str)
                {
                    isBlocked = true;
                    break;
                }
            }

			Button block = act.GetChild (4).GetComponent<Button> ();
			Button unblock = act.GetChild (5).GetComponent<Button> ();
			
			if (isBlocked) {
				unblock.onClick.RemoveAllListeners ();
				unblock.onClick.AddListener (() => {
					openMessagePopup (LocalizationString.MAINGAME_UnblockMessage, false,
						() => {
							socketScript.unblock (data ["userData"] ["nickname"].str);
							setProgressBackActive (true);
							playSound (0);
						});
					playSound (1);
				});
				block.gameObject.SetActive (false);
				unblock.gameObject.SetActive (true);
			} else {
				block.onClick.RemoveAllListeners ();
				block.onClick.AddListener (() => {
					openMessagePopup (LocalizationString.MAINGAME_BlockMessage, false,
						() => {
							socketScript.block (data ["userData"] ["nickname"].str);
							setProgressBackActive (true);
							playSound (0);
						});
					playSound (1);
				});
				block.gameObject.SetActive (true);
				unblock.gameObject.SetActive (false);
			}

            Button slot = act.GetChild(6).GetComponent<Button>();
            slot.onClick.RemoveAllListeners();
            slot.onClick.AddListener(() =>
            {
                slotClick(data["userData"]["nickname"].str);
            });

            Button diary = act.GetChild(7).GetComponent<Button>();
            diary.onClick.RemoveAllListeners();
            diary.onClick.AddListener(() =>
            {
                diaryClick(data);
            });

			Button adopt = act.GetChild (8).GetComponent<Button> ();
			adopt.onClick.RemoveAllListeners ();
			adopt.onClick.AddListener (() => {
				adoptClick (data ["userData"] ["nickname"].str);
			});

			act.gameObject.SetActive (true);
			profilePopup.transform.GetChild (0).GetChild (4).gameObject.SetActive (false);
		}

		profilePopup.transform.GetChild (0).GetChild (6).GetComponent<Text> ().text = ((SystemLanguage)data ["userData"] ["language"].n).ToString ();

        int totalHaveItem = 0;
        int[] itemSum = { 0, 0, 0 };
        int currentSum = -1;
        for (int i = 0; i < data["haveItemData"].Count; i++)
        {
            for (int j = 0; j < data["haveItemData"][i].Count; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                Transform txtTrasform = null;
                int lastLen = (int)data["haveItemData"][i][j].n;
                if (i == 0)
                {
                    lastLen += 4;
                }
                else if(i == 1)
                {
                    lastLen += 1;
                }
                totalHaveItem += lastLen;
                if (i < 2)
                {
                    txtTrasform = profilePopup.transform.GetChild(1).GetChild(0).Find(i + "_" + j);
                    if (txtTrasform != null)
                    {
                        txtTrasform.GetComponent<Text>().text = lastLen + " / ";
                    }
                }
                else
                {
                    switch (j)
                    {
                        case 0:
                            currentSum = 0;
                            break;
                        case 1:
                            currentSum = 0;
                            txtTrasform = profilePopup.transform.GetChild(1).GetChild(0).GetChild(9);
                            break;
                        case 2:
                        case 4:
                            currentSum = 1;
                            break;
                        case 5:
                            currentSum = 1;
                            txtTrasform = profilePopup.transform.GetChild(1).GetChild(0).GetChild(10);
                            break;
                        case 3:
                            currentSum = 2;
                            break;
                        case 7:
                            currentSum = 2;
                            txtTrasform = profilePopup.transform.GetChild(1).GetChild(0).GetChild(11);
                            break;
                        case 6:
                            currentSum = -1;
                            profilePopup.transform.GetChild(1).GetChild(0).GetChild(8).GetComponent<Text>().text = (int)data["haveItemData"][i][j].n + " / ";
                            break;
                        default:
                            break;
                    }
                    if (currentSum >= 0)
                    {
                        itemSum[currentSum] += (int)data["haveItemData"][i][j].n;
                    }
                    if (txtTrasform != null)
                    {
                        txtTrasform.GetComponent<Text>().text = itemSum[currentSum] + " / ";
                    }
                }

            }
        }

        int totalItem = 0;
        itemSum[0] = 0;
        itemSum[1] = 0;
        itemSum[2] = 0;
        currentSum = -1;
        for (int i = 0; i < data["itemData"].Count; i++)
        {
            for (int j = 0; j < data["itemData"][i].Count; j++)
            {
                Transform txtTrasform = null;
                totalItem += (int)data["itemData"][i][j].n;
                if (i < 2)
                {
                    txtTrasform = profilePopup.transform.GetChild(1).GetChild(0).Find(i + "_" + j);
                    if (txtTrasform != null)
                    {
                        txtTrasform.GetComponent<Text>().text += (int)data["itemData"][i][j].n + "";
                    }
                }
                else
                {
                    switch (j)
                    {
                        case 0:
                            currentSum = 0;
                            break;
                        case 1:
                            currentSum = 0;
                            txtTrasform = profilePopup.transform.GetChild(1).GetChild(0).GetChild(9);
                            break;
                        case 2:
                        case 4:
                            currentSum = 1;
                            break;
                        case 5:
                            currentSum = 1;
                            txtTrasform = profilePopup.transform.GetChild(1).GetChild(0).GetChild(10);
                            break;
                        case 3:
                            currentSum = 2;
                            break;
                        case 7:
                            currentSum = 2;
                            txtTrasform = profilePopup.transform.GetChild(1).GetChild(0).GetChild(11);
                            break;
                        case 6:
                            currentSum = -1;
                            profilePopup.transform.GetChild(1).GetChild(0).GetChild(8).GetComponent<Text>().text += (int)data["itemData"][i][j].n + "";
                            break;
                        default:
                            break;
                    }
                    if (currentSum >= 0)
                    {
                        itemSum[currentSum] += (int)data["itemData"][i][j].n;
                    }
                    if (txtTrasform != null)
                    {
                        txtTrasform.GetComponent<Text>().text += itemSum[currentSum] + "";
                    }
                }
            }
        }
        profilePopup.transform.GetChild(0).GetChild(7).GetComponentInChildren<Text>().text = totalHaveItem + " / " + totalItem;
		profilePopup.SetActive (true);
	}

    void diaryClick(JSONObject data)
    {
        this.data = data;
        if (data.HasField("isFriend"))
        {
            Transform act = profilePopup.transform.GetChild(0).GetChild(5);
            data.SetField("isFriend", act.GetChild(1).gameObject.activeSelf);
        }

        socketScript.getDiary(true, data["userData"]["nickname"].str);
        setProgressBackActive(true);
        playSound(0);
    }

	public void profileEditClick ()
	{
		InputField profileInput = profileEditPopup.transform.GetChild (0).GetChild (1).GetComponent<InputField> ();
		profileInput.text = getChData () ["userData"] ["profile"].str;
		profileEditPopup.SetActive (true);
		playSound (1);
	}

	public void profileEditYesClick ()
	{
		string profileMessage = profileEditPopup.transform.GetChild (0).GetChild (1).GetComponent<InputField> ().text;
		socketScript.setProfile (profileMessage);
		setProgressBackActive (true);
		profileEditPopup.SetActive (false);
		playSound (0);
	}

	public void onSetProfile (JSONObject data)
	{
		setProgressBackActive (false);

		if (data ["result"].str.Equals ("success")) {
			getChData () ["userData"] ["profile"].str = data ["profile"].str;
			string nickname = profilePopup.transform.GetChild (0).GetChild (2).GetComponentInChildren<Text> ().text;
			if (profilePopup.activeSelf && nickname.Equals (nick)) {
				profilePopup.transform.GetChild (0).GetChild (3).GetComponentInChildren<Text> ().text = data ["profile"].str;
                if(data["profile"].str == null || data["profile"].str.Trim() == ""){
                    profilePopup.transform.GetChild(0).GetChild(3).gameObject.SetActive(false);
                }else{
                    profilePopup.transform.GetChild(0).GetChild(3).gameObject.SetActive(true);
                }
			}
		} else if (data ["result"].str.Equals ("fail")) {
		} else {
		}
		
	}

	//--------------------------------------------------------------------------//
	//chat popup

	void chatClick (JSONObject userData)
	{
		currentChat = userData ["nickname"].str;
		chatPopup.transform.GetChild (0).GetChild (0).GetComponent<Text> ().text = userData ["nickname"].str;
		setProfileCharacter (userData, chatPopup.transform.GetChild (0).GetChild (1).GetChild (0));

		Transform contents = chatPopup.transform.GetChild (0).GetChild (3).GetChild (0).GetChild (0);
		destroyChilds (contents);

		chatPopup.SetActive (true);
		JSONObject data = sqliteScript.getRecentChat (userData ["nickname"].str, 100);
		int updatedMsg = 0;
		for (int i = data.Count-1; i >= 0; i--) {
			addChat (data [i], contents);
			if ((int)data [i] ["readed"].n == 1) {
				sqliteScript.updateChat (data [i]);
				updatedMsg++;
			}
		}

		if (currentPost == post.msg) {
			Transform postContents = postPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
			foreach (Transform msgMem in postContents) {
				if (msgMem.GetChild (1).GetComponent<Text> ().text == userData ["nickname"].str) {
					msgMem.GetChild (3).gameObject.SetActive (false);
					break;
				}
			}

			Text readed = postPopup.transform.GetChild (0).GetChild (3).GetChild (0).GetComponentInChildren<Text> ();
			int currentReaded = int.Parse (readed.text);
			if (currentReaded <= updatedMsg) {
				readed.transform.parent.gameObject.SetActive (false);
			} else {
				readed.text = (currentReaded - updatedMsg) + "";
			}
		}

		InputField input = chatPopup.transform.GetChild (0).GetChild (4).GetComponent<InputField> ();
		input.onEndEdit.RemoveAllListeners ();
		input.onEndEdit.AddListener ((string text) => {
			socketScript.chat (userData ["nickname"].str, text);
			input.text = "";
			
		});
		
        ScrollRect scrollRect = chatPopup.transform.GetChild(0).GetChild(3).GetComponent<ScrollRect>();
        scrollRect.verticalNormalizedPosition = 0;
        Canvas.ForceUpdateCanvases();
	}

	public void chatScrollOnValueChanged (Vector2 v)
	{
		//Debug.Log (v);
		ScrollRect scrollRect = chatPopup.transform.GetChild (0).GetChild (3).GetComponent<ScrollRect> ();
		//Debug.Log (scrollRect.verticalNormalizedPosition);

	}

	public void chatBackClick ()
	{
		currentChat = null;
		chatPopup.SetActive (false);
		playSound (2);
	}

    public void chatExitclick()
    {
        if (string.IsNullOrEmpty(currentChat))
        {
            return;
        }

        openMessagePopup(LocalizationString.MSG_ExitChatMessage, false, () => {
            sqliteScript.deleteChat(currentChat);
            if (currentPost == post.msg)
            {
                Transform postContents = postPopup.transform.GetChild(0).GetChild(2).GetChild(0).GetChild(0);
                foreach (Transform msgMem in postContents)
                {
                    if (msgMem.GetChild(1).GetComponent<Text>().text == currentChat)
                    {
                        Destroy(msgMem.gameObject);
                        break;
                    }
                }
            }
            currentChat = null;
            chatPopup.SetActive(false);
            playSound(2);
            messagePopup.SetActive(false);
        });
        playSound(1);
    }

	//--------------------------------------------------------------------------//
	//visit

	void visitClick (string nickname)
	{
		openMessagePopup (string.Format (LocalizationString.MAINGAME_VisitMessage, nickname), false,
			() => {
				socketScript.visit (nickname, "request");
				messagePopup.SetActive (false);
				playSound (0);
			});
		playSound (1);
	}

	public void onVisit (JSONObject data)
	{

//		if (data ["msg"].str.Equals ("request")) {
//			if (data ["to"].str == nick) {
//				if (room == null) {
//					openMessagePopup (string.Format (LocalizationString.MAINGAME_VisitantMessage, data ["from"].str), false,
//						() => {
//							if (movable != null) {
//								Vector2 pos = movable.Find (nick).GetComponent<RectTransform> ().localPosition;
//								socketScript.visitAccept (data ["from"].str, pos);
//							}
//							messagePopup.SetActive (false);
//						});
//				} else if (room == nick) {
//					openMessagePopup (string.Format (LocalizationString.MAINGAME_VisitantMessage, data ["from"].str), false,
//						() => {
//							socketScript.visit (data ["from"].str, "accept");
//							messagePopup.SetActive (false);
//						});
//
//				} else {
//					data.AddField ("message_type", (int)PROTOCOL.message_type.chat);
//					data ["msg"].str = string.Format (LocalizationString.MSG_VisitRequestMessage, data ["from"].str);
//
//					sqliteScript.addChat (data);
//				}
//			}
//			
//		} else if (data ["msg"].str.Equals ("accept")) {
//			setProgressBackActive (false);
//			room = data ["master"].str;
//			
//			if (data.HasField ("furnitureData")) {
//				this.data = data;
//				UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
//				hidePopups ();
//			} else {
//				bool isFurnitureEditing = false;
//				if (socketScript.mainScript) {
//					isFurnitureEditing = socketScript.mainScript.furnitureEdit.activeSelf;
//				}
//
//				if (movable != null) {
//					CharacterScript ch = createCharacter (data ["userData"], movable);
//					if (isFurnitureEditing) {
//						ch.gameObject.SetActive (false);
//					}
//				}
//				if (!isFurnitureEditing) {
//					setChatingActive (true);
//				}
//			}
		if (data ["msg"].str.Equals ("request")) {
            foreach (JSONObject blockMem in getChData()["blockList"].list)
            {
                if (blockMem["nickname"].str == data["from"].str)
                {
                    return;
                }
            }

            if (PlayerPrefs.GetInt("visitRequest", 1) == 0)
            {
                return;
            }

			if(data["to"].str == nick){
                if(room == null || !room.Contains("@") && room != nick){
					openMessagePopup(string.Format(LocalizationString.MAINGAME_VisitantMessage, data["from"].str), false,
						() => {
							if (movable != null) {
								Vector2 pos = movable.Find(nick).GetComponent<RectTransform>().localPosition;
								socketScript.visitAccept(data["from"].str, pos);
							}
							messagePopup.SetActive(false);
						});
				}else if (room == nick) {
					openMessagePopup(string.Format(LocalizationString.MAINGAME_VisitantMessage, data["from"].str), false,
						() => {
							socketScript.visit(data["from"].str, "accept");
							messagePopup.SetActive(false);
						});
				} else {
					if (socketScript.squareScript != null){
                        CharacterScript character = findUser(nick).GetComponent<CharacterScript>();
                        if(socketScript.squareScript.waitList.Contains(character)){
							data.AddField("message_type", (int)PROTOCOL.message_type.chat);
							data["msg"].str = string.Format(LocalizationString.MSG_VisitRequestMessage, data["from"].str);

							sqliteScript.addChat(data);
							return;
						}
					}

					openMessagePopup(string.Format(LocalizationString.MAINGAME_VisitantMessage, data["from"].str), false,
						() => {
							socketScript.visit(data["from"].str, "accept");
							messagePopup.SetActive(false);
						});
				}
			}

		} else if (data ["msg"].str.Equals ("accept")) {
			setProgressBackActive(false);
			if(room != data["master"].str && (socketScript.mainScript == null || room != null && room != nick)){
				this.data = data;
				hidePopups();
				UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene");
			}else{
				if (data.HasField("furnitureData")) {
					this.data = data;
					hidePopups();
					UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene");
				} else {
                    if(isSceneLoading){
                        isMasterLeave = false;
                        this.data = data;
                        room = data["master"].str;
                        return;
                    }
					bool isFurnitureEditing = false;
					if (socketScript.mainScript) {
						isFurnitureEditing = socketScript.mainScript.furnitureEdit.activeSelf;
					}

					if (movable != null) {
						CharacterScript ch = createCharacter(data["userData"], movable);
						if (isFurnitureEditing) {
							ch.gameObject.SetActive(false);
						}
					}
					if (!isFurnitureEditing) {
						setChatingActive(true);
					}
				}
			}
			room = data["master"].str;
		} else if (data ["msg"].str.Equals ("leave")) {
			if (data ["nickname"].str != nick) {
				//Debug.Log (room);
				if (data.HasField ("isSolo")) {                      // master(me) is solo
					Debug.Log ("master(me) is solo");
					room = null;
					setChatingActive (false);

				} else if (room == data ["nickname"].str) {           // master leave
					//Debug.Log ("master leave");
					room = null;
					isMasterLeave = true;
                    isSceneLoading = true;
                    hidePopups();
                    this.data = null;
					UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
					return;
				}

				if (movable != null) {                              // other guest leave
					Transform t = movable.Find (data ["nickname"].str);
					if (t != null)
						Destroy (t.gameObject);
				}
			}
		} else if (data ["msg"].str.Equals ("busy")) {
			if (data ["to"].str == nick) {
				setProgressBackActive (false);
				openMessagePopup (LocalizationString.MAINGAME_GuestBusy + "\n" + data ["from"].str);
			}
		}
	}

    public void onSquare(JSONObject data)
    {
        setProgressBackActive(false);
        if (isSceneLoading)
        {
            if (data["result"].str.Equals("success"))
            {
                if (!this.data.HasField("userData"))
                {
                    this.data.AddField("userData", new JSONObject());
                }
                this.data["userData"].Add(data["userData"]);

            }
            else if (data["result"].str.Equals("leave"))
            {
                if (this.data.HasField("userData"))
                {
                    foreach (JSONObject member in this.data["userData"].list)
                    {
                        if (member["nickname"].str == data["nickname"].str)
                        {
                            this.data["userData"].list.Remove(member);
                            break;
                        }
                    }

                    if (this.data["userData"].list.Count == 0)
                        this.data.RemoveField("userData");
                }
            }
        }
        else
        {
            if (data["result"].str.Equals("success"))
            {
                if (data.HasField("room"))
                {
                    room = data["room"].str;
                    this.data = data;
                    isSceneLoading = true;
                    UnityEngine.SceneManagement.SceneManager.LoadScene("SquareScene");
                }
                else
                {
                    if (movable != null)
                        createCharacter(data["userData"], movable);
                }
            }
            else if (data["result"].str.Equals("fail"))
            {
                log("fail");
            }
            else if (data["result"].str.Equals("leave"))
            {
                Transform t = findUser(data["nickname"].str);
                if (t != null)
                    Destroy(t.gameObject);

            }
            else
            {

            }
        }

    }

    public void minigameClick(){
        minigamePopup.SetActive(true);
        playSound(1);
    }

	//--------------------------------------------------------------------------//
	//chat and friend

	public void onChat (JSONObject data)
	{
		setProgressBackActive (false);

		foreach (JSONObject block in getChData () ["blockList"].list) {
			if (block ["nickname"].str == data ["from"].str) {
				return;
			}
		}

		if (!data.HasField ("to")) {
			if (data ["from"].str == "@server") {
				log (LocalizationString.MSG_Update);
				return;
			}
			ScrollRect scroll = chatingText.transform.parent.parent.parent.GetComponent<ScrollRect> ();
			float vPos = scroll.verticalNormalizedPosition;

			string[] sub = chatingText.text.Split ('\n');
			if (sub.Length > 30) {
				chatingText.text = chatingText.text.Substring (chatingText.text.IndexOf ("\n") + 1) + data ["from"].str + ":" + data ["msg"].str + "\n";
			} else {
				chatingText.text += data ["from"].str + ":" + data ["msg"].str + "\n";
			}

			if (vPos <= 0.1f) {
				Canvas.ForceUpdateCanvases ();
				scroll.verticalNormalizedPosition = 0f;
				Canvas.ForceUpdateCanvases ();
			}

            Transform user = findUser(data["from"].str);
            if (user != null)
            {
                user.GetComponent<CharacterScript>().chat(data["msg"].str);
            }

            if(PlayerPrefs.GetInt("speak", 1) == 1){
                SystemLanguage sl = (SystemLanguage)data["language"].n;
                if (lanCode.ContainsKey(sl))
                {
                    string code = lanCode[sl];
                    #if UNITY_EDITOR

#elif UNITY_ANDROID
                using (AndroidJavaClass jc = new AndroidJavaClass("com.familsoft.fortunecloset.TTSUtils"))
                {
                    jc.CallStatic("speak", new object[] { code, data["msg"].str });
                }
#elif UNITY_IOS
                    ttsSpeak(code, data["msg"].str);
#endif
                
                }
            }

		} else {
			//Debug.Log (data);
			Transform contents = null;
            ScrollRect scroll = null;
			bool isSave = true;
            float vPos = 0;

			if ((int)data ["message_type"].n == (int)PROTOCOL.message_type.chat) {
				if (data.HasField ("result")) {
					if (data ["result"].str == "no_user") {
						log (LocalizationString.MAINGAME_NoUserMessage);
						return;
					}
                } else {
                    if ((nick == data["to"].str && currentChat == data["from"].str)
                                      || (nick == data["from"].str && currentChat == data["to"].str))
                    {
                        contents = chatPopup.transform.GetChild(0).GetChild(3).GetChild(0).GetChild(0);
                        scroll = contents.transform.parent.parent.GetComponent<ScrollRect>();
                        vPos = scroll.verticalNormalizedPosition;
                        addChat(data, contents);
                    }else if(nick != data["from"].str){
                        log(string.Format(LocalizationString.MSG_MsgAccepted, data["from"].str));
                    }
				}
			} else if ((int)data ["message_type"].n == (int)PROTOCOL.message_type.friend) {
                if (PlayerPrefs.GetInt("friendRequest", 1) == 0)
                {
                    return;
                }

				if (currentPost == post.friendRequest && (nick == data ["to"].str || nick == data ["from"].str)) {
					contents = postPopup.transform.GetChild (0).GetChild (2).GetChild (0).GetChild (0);
                    scroll = contents.transform.parent.parent.GetComponent<ScrollRect>();
                    vPos = scroll.verticalNormalizedPosition;
				}

				if (data ["msg"].str == "no_user") {
					log (LocalizationString.MAINGAME_NoUserMessage);
					return;

				} else if (data ["msg"].str == "request") {
					if (data ["to"].str == nick) {
						if (sqliteScript.isFriendRequested (data ["from"].str)) {
							return;
						}

						log (string.Format (LocalizationString.MSG_FriendRequestReceived, data ["from"].str));
						if (contents != null) {
							Transform mem = addChat (data, contents);
                            mem.GetChild(1).GetComponent<Button>().onClick.RemoveAllListeners();
							mem.GetChild (1).GetComponent<Button> ().onClick.AddListener (() => {
								socketScript.friend (data ["from"].str, "refuse");
								sqliteScript.deleteChat (data);
								Destroy (mem.gameObject);
							});
                            mem.GetChild(2).GetComponent<Button>().onClick.RemoveAllListeners();
							mem.GetChild (2).GetComponent<Button> ().onClick.AddListener (() => {
								socketScript.friend (data ["from"].str, "accept");
								sqliteScript.deleteChat (data);
								Destroy (mem.gameObject);
							});
						}

					} else {
						log (string.Format (LocalizationString.MSG_FriendRequestSended, data ["to"].str));
						isSave = false;
					}

				} else if (data ["msg"].str == "limit_of_friend_number") {
					openMessagePopup (LocalizationString.MAINGAME_FriendLimitMessage);

				} else if (data ["msg"].str == "duple_friend") {
					log (LocalizationString.MSG_FriendDupleMessage);
				} else if (data ["msg"].str == "fail_to_request") {
					log (LocalizationString.MSG_FriendFailToRequestMessage);
				} else if (data ["msg"].str == "fail_to_accept") {
					log (LocalizationString.MSG_FriendFailToAcceptMessage);
				} else {
					if (data ["msg"].str == "accept") {
						log (string.Format (LocalizationString.MSG_FriendAcceptMessage, data ["from"].str, data ["to"].str));

						if (profilePopup.activeSelf) {
							if (profilePopup.transform.GetChild (0).GetChild (2).GetComponentInChildren<Text> ().text == data ["from"].str) {
								profilePopup.transform.GetChild (0).GetChild (5).GetChild (0).gameObject.SetActive (false);
								Button friendRemove = profilePopup.transform.GetChild (0).GetChild (5).GetChild (1).GetComponent<Button> ();
								friendRemove.onClick.RemoveAllListeners ();
								friendRemove.onClick.AddListener (() => {
									openMessagePopup (LocalizationString.MAINGAME_FriendRemoveMessage, false,
										() => {
											socketScript.friend (data ["from"].str, "delete");
											setProgressBackActive (true);
											messagePopup.SetActive (false);
										});
								});
								friendRemove.gameObject.SetActive (true);
							}
						}
                        if (diaryPopup.activeSelf)
                        {
                            if (this.data != null && (this.data["userData"]["nickname"].str == data["from"].str || this.data["userData"]["nickname"].str == data["to"].str))
                            {
                                this.data.SetField("isFriend", true);
                            }
                        }
					} else if (data ["msg"].str == "refuse") {
						log (string.Format (LocalizationString.MSG_FriendRefuseMessage, data ["from"].str, data ["to"].str));

					} else if (data ["msg"].str == "delete") {
						log (string.Format (LocalizationString.MSG_FriendDeleteMessage, data ["from"].str, data ["to"].str));

						if (profilePopup.activeSelf) {
							string profileNick = profilePopup.transform.GetChild (0).GetChild (2).GetComponentInChildren<Text> ().text;
							if (profileNick == data ["from"].str || profileNick == data ["to"].str) {
								Button friendAdd = profilePopup.transform.GetChild (0).GetChild (5).GetChild (0).GetComponent<Button> ();
								friendAdd.onClick.RemoveAllListeners ();
								friendAdd.onClick.AddListener (() => {
									openMessagePopup (LocalizationString.MAINGAME_FriendAddMessage, false,
										() => {
											socketScript.friend (data ["from"].str, "request");
											setProgressBackActive (true);
											messagePopup.SetActive (false);
										});
								});
								friendAdd.gameObject.SetActive (true);
								profilePopup.transform.GetChild (0).GetChild (5).GetChild (1).gameObject.SetActive (false);

							}
						}
                        if (diaryPopup.activeSelf)
                        {
                            if (this.data != null && (this.data["userData"]["nickname"].str == data["from"].str || this.data["userData"]["nickname"].str == data["to"].str))
                            {
                                this.data.SetField("isFriend", false);
                            }
                        }
					}

					if (contents != null) {
						addChat (data, contents);
					}
				}
			}

            if (scroll != null && vPos <= 0.1f)
            {
                Canvas.ForceUpdateCanvases();
                scroll.verticalNormalizedPosition = 0f;
                Canvas.ForceUpdateCanvases();
            }

			if (isSave) {
				sqliteScript.addChat (data);
				if (contents != null) {
					sqliteScript.updateChat (data);
				}
			}
		}
	}

//	public void chatClick (BaseEventData e)
//	{
//		chatingInput.ActivateInputField ();
//		chatingInput.Select ();
//	}

	public void chatOnEndEdit (string text)
	{
		if (room != null && socketScript != null) {
			socketScript.chat (text);
		}
		chatingInput.text = "";
	}

	public Transform addChat (JSONObject data, Transform chatContent)
	{
		Transform mem = null;
		ScrollRect scroll = chatContent.parent.parent.GetComponent<ScrollRect> ();
		float vPos = scroll.verticalNormalizedPosition;

		if ((int)data ["message_type"].n == (int)PROTOCOL.message_type.friend && data ["msg"].str.Equals ("request")) {
			mem = GameObject.Instantiate (friendMemberPref, chatContent).transform;
			Text txt = mem.GetChild (0).GetComponent<Text> ();
			txt.text = string.Format (LocalizationString.MSG_FriendRequestMessage, data ["from"].str);
			mem.GetChild (1).GetComponentInChildren<Text> ().text = LocalizationString.Refuse;
			mem.GetChild (2).GetComponentInChildren<Text> ().text = LocalizationString.Accept;
		} else {
			string msg = data ["msg"].str;
			if (msg.Equals ("accept")) {
				msg = string.Format (LocalizationString.MSG_FriendAcceptMessage, data ["from"].str, data ["to"].str);
			} else if (msg.Equals ("refuse")) {
				msg = string.Format (LocalizationString.MSG_FriendRefuseMessage, data ["from"].str, data ["to"].str);
			} else if (msg.Equals ("delete")) {
				msg = string.Format (LocalizationString.MSG_FriendDeleteMessage, data ["from"].str, data ["to"].str);
			}

			mem = GameObject.Instantiate (chatMemberPref, chatContent).transform;
			Text txt = mem.GetChild (0).GetComponentInChildren<Text> ();
			txt.text = msg;

			RectTransform rect = mem.GetChild (0).GetComponent<RectTransform> ();
			if (nick != data ["from"].str) {
				Vector2 anchor = new Vector2 (0, 1f);
				rect.anchorMin = anchor;
				rect.anchorMax = anchor;

				rect.anchoredPosition = new Vector2 (10f, 0);
				rect.Rotate (0, 180f, 0);

				txt.GetComponent<RectTransform> ().Rotate (0, 180f, 0);
			}


			setPreferredSize (mem.GetComponent<RectTransform> (), rect);
		}

		if (vPos == 0) {
			scroll.verticalNormalizedPosition = 0f;
			Canvas.ForceUpdateCanvases ();
		}

		return mem;
	}

	void setPreferredSize (RectTransform parent, RectTransform child)
	{
		setPreferredText (child);

		Vector2 size = new Vector2 (parent.rect.width, child.rect.height);
		parent.sizeDelta = size;
	}

	public void setPreferredText (RectTransform txtParent)
	{
		setPreferredText (txtParent, 400f);
	}

	public void setPreferredText (RectTransform txtParent, float width)
	{
		Canvas.ForceUpdateCanvases ();

		float widthRate = width / txtParent.rect.width;
		if (widthRate < 1f) {
			Text childText = txtParent.GetComponentInChildren<Text> ();
			string msg = childText.text;
			int maxTxtLength = (int)(msg.Length * widthRate);
			string result = "";
			for (int i = 0, startIndex = 0; startIndex < msg.Length; startIndex = ++i * maxTxtLength) {
				if (msg.Length - startIndex < maxTxtLength) {
					result += msg.Substring (startIndex);
				} else {
					result += msg.Substring (startIndex, maxTxtLength) + "\n";
				}
			}
			childText.text = result;
			Canvas.ForceUpdateCanvases ();
		}
	}

	public void destroyChilds (Transform contents)
	{
		for (int i = 0; i < contents.childCount; i++) {
			Destroy (contents.GetChild (i).gameObject);
		}
	}

	public void setSiblings (Transform movable)
	{
		ArrayList infos = new ArrayList ();
		for (int i = 0; i < movable.childCount; i++) {
			infos.Add (movable.GetChild (i));
		}
		infos.Sort (new WalkSortCompare ());
		for (int i = 0; i < infos.Count; i++) {
			((Transform)infos [i]).SetAsLastSibling ();
		}
	}

	public class WalkSortCompare : IComparer
	{
		int IComparer.Compare (object a, object b)
		{
			Transform transformA = (Transform)a;
			Transform transformB = (Transform)b;
			float aSrc = transformA.localPosition.y;
			float bSrc = transformB.localPosition.y;
			float re = bSrc - aSrc;
			if (re > 0f) {
				return 1;
			} else if (re < 0f) {
				return -1;
			} else {
				if (transformB.GetSiblingIndex () < transformA.GetSiblingIndex ())
					return 1;
				else if (transformB.GetSiblingIndex () > transformA.GetSiblingIndex ())
					return -1;
				else
					return 0;
			}
		}
	}

    public void onGetUserDatas(JSONObject res)
    {
        Debug.Log("onGetUserDatas: " + res.ToString());
        setProgressBackActive(false);

        if (res["result"].str == "success")
        {
            if (res["type"].str == "msg")
            {
                onGetUserDatasTypeMsg(res);
            }
            else if (res["type"].str == "diary")
            {
                onGetUserDatasTypeDiary(res);
            }
            else
            {

            }
        }
        else if (res["result"].str == "fail")
        {

        }
        else
        {

        }
    }

	//--------------------------------------------------------------------------//
	//option

	public void optionClick ()
	{
		optionPopup.transform.GetChild (0).GetChild (1).GetComponent<Toggle> ().isOn = PlayerPrefs.GetInt ("fashionshow", 1) == 1 ? true : false;
		optionPopup.transform.GetChild (0).GetChild (3).GetComponent<Toggle> ().isOn = PlayerPrefs.GetInt ("bgm", 1) == 1 ? true : false;
		optionPopup.transform.GetChild (0).GetChild (4).GetComponent<Toggle> ().isOn = PlayerPrefs.GetInt ("se", 1) == 1 ? true : false;
        optionPopup.transform.GetChild(0).GetChild(5).GetComponent<Toggle>().isOn = PlayerPrefs.GetInt("speak", 1) == 1 ? true : false;
        optionPopup.transform.GetChild (0).GetChild (6).GetComponent<Toggle> ().isOn = PlayerPrefs.GetInt ("friendRequest", 1) == 1;
        optionPopup.transform.GetChild (0).GetChild (7).GetComponent<Toggle> ().isOn = PlayerPrefs.GetInt ("visitRequest", 1) == 1;
		optionPopup.SetActive (true);
		playSound (1);
	}

	public void toggleFashionshow (bool active)
	{
		PlayerPrefs.SetInt ("fashionshow", active ? 1 : 0);
		playSound (0);
	}

	public void toggleBGM(bool active){
		if (active) {
			PlayerPrefs.SetInt ("bgm", 1);
			audioSource.Play ();
		} else {
			PlayerPrefs.SetInt ("bgm", 0);
			audioSource.Stop ();
		}
		playSound (0);
	}

	public void toggleSE(bool active){
		PlayerPrefs.SetInt ("se", active ? 1 : 0);
		playSound (0);
	}

    public void toggleSpeak(bool active)
    {
        PlayerPrefs.SetInt("speak", active ? 1 : 0);
        playSound(0);
    }

    public void toggleFriendRequest(bool active)
    {
        PlayerPrefs.SetInt("friendRequest", active ? 1 : 0);
        playSound(0);
    }

    public void toggleVisitRequest(bool active)
    {
        PlayerPrefs.SetInt("visitRequest", active ? 1 : 0);
        playSound(0);
    }

	public void onScreenshot (JSONObject data)
	{
        Debug.Log("on screenshot "+data);
		if (data ["result"].str == "success") {
			openMessagePopup (LocalizationString.OPTION_ReportSuccessMessage);
		} else if (data ["result"].str == "limit") {
			openMessagePopup (LocalizationString.OPTION_ReportLimitMessage);
		} else if (data ["result"].str == "fail") {
			
		} else {
			
		}
	}

	public void screenshotClick ()
	{
		optionPopup.SetActive (false);
		StartCoroutine (screenshot ());
		playSound (0);
	}

	IEnumerator screenshot ()
	{
		yield return new WaitForEndOfFrame ();
//		byte[] imageByte;	//스크린샷을 Byte로 저장.Texture2D use
		Texture2D tex = new Texture2D (Screen.width, Screen.height, TextureFormat.RGB24, true); 
		//2d texture객체를 만드는대.. 스크린의 넓이, 높이를 선택하고 텍스쳐 포멧은 스크린샷을 찍기 위해서는 이렇게 해야 한다더군요.
		tex.ReadPixels (new Rect (0, 0, Screen.width, Screen.height), 0, 0, true); 
		//말 그대로입니다. 현제 화면을 픽셀 단위로 읽어 드립니다.
		tex.Apply (); 
		//읽어 들인것을 적용.

		Image img = reportPopup.transform.GetChild (0).GetChild (1).GetComponent<Image> ();
		Rect rect = new Rect (0, 0, tex.width, tex.height);
		img.sprite = Sprite.Create (tex, rect, new Vector2 (0.5f, 0.5f));
		reportPopup.transform.GetChild (0).GetChild (2).GetComponent<InputField> ().text = "";
		reportPopup.SetActive (true);
	}

	public void screenshotYesClick ()
	{
		Image img = reportPopup.transform.GetChild (0).GetChild (1).GetComponent<Image> ();
		string contents = reportPopup.transform.GetChild (0).GetChild (2).GetComponent<InputField> ().text;

		if (string.IsNullOrEmpty (contents.Trim ())) {
			log ("input user name and contents");
		} else {
			byte[] imageByte = img.sprite.texture.EncodeToPNG ();
			socketScript.report (contents, imageByte);
			reportPopup.SetActive (false);
		}
		playSound (0);
	}

	//--------------------------------------------------------------------------//
	//login

	public void onLogin (JSONObject data)
	{
		setProgressBackActive (false);

		if (data ["result"].str.Equals ("success")) {
            if(login_method == (int)PROTOCOL.login_method.guest){
                PlayerPrefs.SetInt("login_auth", 2);
                PlayerPrefs.SetString("guest_id", SimpleAES.AES_encrypt(guest_info[0], SimpleAES.localKey));
                PlayerPrefs.SetString("guest_pw", SimpleAES.AES_encrypt(guest_info[1], SimpleAES.localKey));
            }else{
                PlayerPrefs.SetInt("login_auth", 1);
            }
			nick = data ["userData"] ["nickname"].str;
			cash.transform.GetComponentInChildren<Text> ().text = data ["userData"] ["cash"].str;
			setChData (data);

			if (socketScript.mainScript != null) {
				destroyChilds (socketScript.mainScript.touch_floor);
				destroyChilds (socketScript.mainScript.touch_wall);
				socketScript.mainScript.initRoom (data);
				socketScript.mainScript.addAdoptCharacters (data ["adoptData"]);
				socketScript.mainScript.nickPopup.SetActive (false);

				socketScript.mainScript.furnitureEdit.SetActive (false);
				socketScript.mainScript.WaitingBack.SetActive (false);
			} else {
                this.data = null;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
			}

			setButtonsActive (true);
			setCashActive (true);
			setChatingActive (false);
			clothEdit.SetActive (false);
			hidePopups ();


//			foreach(string receipt in sqliteScript.getReceipt()){
//				#if UNITY_ANDROID
//				socketScript.androidInapp(receipt);
//				#elif UNITY_IOS
//				socketScript.iosInapp(receipt);
//				#endif
//			}


		} else if (data ["result"].str.Equals ("need_nick")) {
			if (socketScript.mainScript != null) {
				socketScript.mainScript.nickPopup.SetActive (true);
			}
		} else if (data ["result"].str.Equals ("duple_nick")) {
			log (LocalizationString.LOGIN_NicknameDuple);
			if (socketScript.mainScript != null) {
				socketScript.mainScript.nickPopup.SetActive (true);
			}
		} else if (data ["result"].str.Equals ("duple_login")) {
			openMessagePopup (LocalizationString.LOGIN_LoginDuple, true,
				() => {
					isLoaded = false;
					Destroy (gameObject);
					UnityEngine.SceneManagement.SceneManager.LoadScene ("LoginScene");
				});

		} else if (data ["result"].str.Equals ("block")) {
			string blockDate = DateTime.Parse (data ["block_date"].str).ToLocalTime ().ToShortDateString ();
			openMessagePopup (string.Format (LocalizationString.LOGIN_Block, blockDate), true, () => {
				isLoaded = false;
				Destroy (gameObject);
				UnityEngine.SceneManagement.SceneManager.LoadScene ("LoginScene");
			});
		} else if (data ["result"].str.Equals ("google_login_error")) {
            openMessagePopup(LocalizationString.LOGIN_LoginExpiredFail, true,
                () => {
                    login_info = null;
                    isLoaded = false;
                    Destroy(gameObject);
                    UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
                });
        } else if(data["result"].str.Equals("diff_pw")){
            openMessagePopup(LocalizationString.LOGIN_DiffPwMessage, true,
                () => {
                    login_info = null;
                    isLoaded = false;
                    Destroy(gameObject);
                    UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
                });
        }else if (data ["result"].str.Equals ("fail")) {
            openMessagePopup(LocalizationString.LOGIN_LoginFail, true,
                () => {
                    login_info = null;
                    isLoaded = false;
                    Destroy(gameObject);
                    UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
                });
		}
	}

	public void onWrong (JSONObject data)
	{
		setProgressBackActive (false);

		openMessagePopup (LocalizationString.MAINGAME_WrongOccured + "\n" + data ["reason"].str, true,
			() => {
				isLoaded = false;
				Destroy (gameObject);
				UnityEngine.SceneManagement.SceneManager.LoadScene ("LoginScene");
			});
		
	}

	//--------------------------------------------------------------------------//
	//minigames

	public void blindDateClick ()
	{
		openMessagePopup (LocalizationString.MINIGAME_BlindDateEnterMessage, false, () => {
			socketScript.goTo ("blinddate");
			messagePopup.SetActive (false);
			playSound (0);
		});
		playSound (1);
	}

	public void diceClick ()
	{
        
		openMessagePopup (LocalizationString.MINIGAME_DiceGameEnterMessage, false, () => {
			socketScript.goTo ("dice");
			messagePopup.SetActive (false);
            minigamePopup.SetActive(false);
			playSound (0);
		});
		playSound (1);
	}

	public void footholdClick ()
	{
		openMessagePopup (LocalizationString.MINIGAME_FootholdGameEnterMessage, false, () => {
			socketScript.goTo ("foothold");
			messagePopup.SetActive (false);
            minigamePopup.SetActive(false);
			playSound (0);
		});
		playSound (1);
	}

    public void fishingClick()
    {
        openMessagePopup(LocalizationString.MAINGAME_FishingGameEnterMessage, false, () => {
            socketScript.fishing("enter");
            messagePopup.SetActive(false);
            minigamePopup.SetActive(false);
            playSound(0);
        });
        playSound(1);
    }
    
    public void pianoClick(){
    	openMessagePopup(LocalizationString.MAINGAME_GoPianoMessage, false, () => {
			socketScript.goTo ("piano");
            messagePopup.SetActive(false);
            minigamePopup.SetActive(false);
            playSound(0);
        });
        playSound(1);
    }
    
    public void hangmanClick(){
    	openMessagePopup(LocalizationString.MAINGAME_HangmanGameEnterMessage, false, () => {
			socketScript.hangmanEnter ();
            messagePopup.SetActive(false);
            minigamePopup.SetActive(false);
            playSound(0);
        });
        playSound(1);
    }
    
    public void runningclick(){
    	openMessagePopup(LocalizationString.MINIGAME_RunningEnterMessage, false, () => {
			socketScript.running("enter");
            messagePopup.SetActive(false);
            minigamePopup.SetActive(false);
            playSound(0);
        });
        playSound(1);
    }

	public void folderClick (bool isFold)
	{
		folderButton.transform.GetChild (0).gameObject.SetActive (!isFold);
		playSound (0);
	}

	//--------------------------------------------------------------------------//
	//shop

	public void shopClick (int index)
	{
		shopPopup.SetActive (true);
		shopTabClick (index);
        socketScript.getSlot();
        setProgressBackActive(true);
        playSound(1);
	}

	//public void onAddCash (JSONObject data)
	//{
	//	setProgressBackActive (false);
	//	if(data["result"].str == "success"){
	//		Product product = m_StoreController.products.WithID (data["productId"].str);
	//		m_StoreController.ConfirmPendingPurchase(product);

	////		sqliteScript.deleteReceipt(data["receipt"].str);
	//		chData ["userData"] ["cash"].str = data ["cash"].str;
	//		cash.transform.GetComponentInChildren<Text> ().text = data ["cash"].str;

	//		openMessagePopup (string.Format (LocalizationString.SHOP_GemEarnedMessage, data ["cash"].str));
	//	}else if(data["result"].str == "duple"){
	//		log (LocalizationString.SHOP_DupleReceipt);
	//	}else if(data["result"].str == "not_validated"){
	//		log (LocalizationString.SHOP_InvalidReceipt);
	//	}else if(data["result"].str == "fail"){
	//		log (LocalizationString.SHOP_FailToReceipt);
	//	}
	//}

    public void onRandomCloth(JSONObject data)
    {
        setProgressBackActive(false);

        if (data["result"].str.Equals("success"))
        {
            chData["userData"]["cash"].str = data["cash"].str;
            cash.transform.GetComponentInChildren<Text>().text = data["cash"].str;

            List<Vector2> box_pos = new List<Vector2>();
            Vector2 popup_size = new Vector2(600f, 400f);
            if (data["itemData"].Count == 1)
            {
                box_pos.Add(Vector2.zero);

            }
            else if (data["itemData"].Count == 3)
            {
                box_pos.Add(new Vector2(-180f, 0));
                box_pos.Add(Vector2.zero);
                box_pos.Add(new Vector2(180f, 0));

            }
            else if (data["itemData"].Count == 5)
            {
                box_pos.Add(new Vector2(-180f, 80f));
                box_pos.Add(new Vector2(0, 80f));
                box_pos.Add(new Vector2(180f, 80f));
                box_pos.Add(new Vector2(-90f, -80f));
                box_pos.Add(new Vector2(90f, -80f));

                popup_size.y = 500f;
            }

            shopItemPopup.transform.GetChild(0).GetComponent<RectTransform>().sizeDelta = popup_size;

            for (int i = 0; i < data["itemData"].Count; i++)
            {
                Transform box = addBox(data["itemData"][i]);
                box.localPosition = box_pos[i];
            }

            shopItemPopup.SetActive(true);

        }
        else if (data["result"].str.Equals("not_enough_cash"))
        {
            openMessagePopup(LocalizationString.MAINGAME_NotEnoughGem);
        }
        else if (data["result"].str.Equals("full_item"))
        {
            openMessagePopup(LocalizationString.SHOP_FullItemMessage);
        }
        else if (data["result"].str.Equals("less_item"))
        {
            openMessagePopup(LocalizationString.SHOP_LessItemMessage);
        }
        else if (data["result"].str.Equals("fail"))
        {
        }
        else
        {
        }

    }

    public void onRandomFurniture(JSONObject data)
    {
        setProgressBackActive(false);

        if (data["result"].str.Equals("success"))
        {
            chData["userData"]["cash"].str = data["cash"].str;
            cash.transform.GetComponentInChildren<Text>().text = data["cash"].str;

            List<Vector2> box_pos = new List<Vector2>();
            Vector2 popup_size = new Vector2(600f, 400f);
            if (data["itemData"].Count == 1)
            {
                box_pos.Add(Vector2.zero);

            }
            else if (data["itemData"].Count == 3)
            {
                box_pos.Add(new Vector2(-180f, 0));
                box_pos.Add(Vector2.zero);
                box_pos.Add(new Vector2(180f, 0));

            }
            else if (data["itemData"].Count == 5)
            {
                box_pos.Add(new Vector2(-180f, 80f));
                box_pos.Add(new Vector2(0, 80f));
                box_pos.Add(new Vector2(180f, 80f));
                box_pos.Add(new Vector2(-90f, -80f));
                box_pos.Add(new Vector2(90f, -80f));

                popup_size.y = 500f;
            }

            shopItemPopup.transform.GetChild(0).GetComponent<RectTransform>().sizeDelta = popup_size;

            for (int i = 0; i < data["itemData"].Count; i++)
            {
                Transform box = addBox(data["itemData"][i]);
                box.localPosition = box_pos[i];
            }

            shopItemPopup.SetActive(true);

        }
        else if (data["result"].str.Equals("not_enough_cash"))
        {
            openMessagePopup(LocalizationString.MAINGAME_NotEnoughGem);
        }
        else if (data["result"].str.Equals("full_item"))
        {
            openMessagePopup(LocalizationString.SHOP_FullItemMessage);
        }
        else if (data["result"].str.Equals("less_item"))
        {
            openMessagePopup(LocalizationString.SHOP_LessItemMessage);
        }
        else if (data["result"].str.Equals("fail"))
        {
        }
        else
        {
        }

    }

    Transform addBox(JSONObject data)
    {
        Transform boxes = shopItemPopup.transform.GetChild(0).GetChild(1);
        Transform box = Instantiate(boxPref, boxes).transform;

        if (data.HasField("table_num"))
        {
            Sprite[] imageList = null;
            int table_num = (int)data["table_num"].n;
            int type = (int)data["type"].n;
            int num = (int)data["num"].n;
            if (table_num == 1)
            {
                if (type == 0)
                {
                    imageList = floor_thumb;
                }
                else if (type == 1)
                {
                    imageList = wall_thumb;
                }
            }
            else if (table_num == 2)
            {
                imageList = furniture_thumb[type];
            }

            if (imageList != null)
            {
                Transform furnitureMem = box.GetChild(2).GetChild(1);
                furnitureMem.gameObject.SetActive(true);
                furnitureMem.name = type + "_" + num;
                furnitureMem.GetComponent<Image>().sprite = imageList[num];
            }

            box.GetChild(2).GetChild(0).gameObject.SetActive(false);
            box.GetChild(0).gameObject.SetActive(false);
            box.GetChild(1).gameObject.SetActive(true);

        }
        else
        {
            int type = (int)data["type"].n;
            int num = (int)data["num"].n;
            int multiply;
            if (clothIndex[type].Equals("hair")
             || clothIndex[type].Equals("face")
             || clothIndex[type].Equals("hairac"))
            {
                multiply = 3;
            }
            else
            {
                multiply = 4;
            }

            int index = num * multiply;
            Transform clothMem = box.GetChild(2).GetChild(0);
            clothMem.gameObject.SetActive(true);
            clothMem.name = type + "_" + num;
            Image image = clothMem.GetChild(0).GetComponent<Image>();
            image.sprite = clothes[type][index];
            if (type == 0)
            {
                image.rectTransform.sizeDelta = new Vector2(100f, 100f);
            }
            else
            {
                Vector2 scale = image.rectTransform.localScale;
                scale.x = clothIconFilter[type - 1].scale;
                scale.y = clothIconFilter[type - 1].scale;
                image.rectTransform.localScale = scale;

                Vector3 pos = Vector3.zero;
                if (type > 0)
                    pos.y = clothIconFilter[type - 1].y;
                image.rectTransform.anchoredPosition = pos;
            }

            box.GetChild(2).GetChild(1).gameObject.SetActive(false);
            box.GetChild(0).gameObject.SetActive(true);
            box.GetChild(1).gameObject.SetActive(false);
        }

        return box;
    }

	//public void addCashClick (int amount)
	//{
	//	string name = "fortunecloset." + System.Enum.GetName (typeof(cashamount), amount);
	//	openMessagePopup (string.Format (LocalizationString.SHOP_GemMessage, amount), false,
	//		() => {
	//			BuyProductID(name);
	//			messagePopup.SetActive (false);
	//		});
	//	playSound (1);
	//}

    public void randomClothClick(int num)
    {
        openMessagePopup(string.Format(LocalizationString.SHOP_RandomClothMessage, num * 300, num), false,
            () => {
                socketScript.randomCloth(num);
                setProgressBackActive(true);
                messagePopup.SetActive(false);
                playSound(0);
            });
        playSound(1);
    }

    public void randomFurnitureClick(int num)
    {
        openMessagePopup(string.Format(LocalizationString.SHOP_RandomFurnitureMessage, num * 700, num), false,
            () => {
                socketScript.randomFurniture(num);
                setProgressBackActive(true);
                messagePopup.SetActive(false);
                playSound(0);
            });
        playSound(1);
    }

	public void shopTabClick (int category)
	{
		switch (category) {
		case 0: // box
			shopPopup.transform.GetChild (3).gameObject.SetActive (true);
			shopPopup.transform.GetChild (4).gameObject.SetActive (false);
			break;
		case 1: // gem
			shopPopup.transform.GetChild (3).gameObject.SetActive (false);
			shopPopup.transform.GetChild (4).gameObject.SetActive (true);
			break;
		default:
			return;
		}
		playSound (0);
	}

	//--------------------------------------------------------------------------//
	//cloth

	public void onGetClothes (JSONObject data)
	{
		setProgressBackActive (false);

		if (data ["result"].str.Equals ("success")) {
			currentChData = getChData () ["userData"].Copy ();
			clothData = data ["clothData"];

			Transform ch = clothEdit.transform.GetChild (0);
			for (int i = 0; i < clothIndex.Length; i++) {
				if (clothIndex [i].Equals ("skin")) {
					for (int j = 0; j < clothes [i].Length; j++) {
						JSONObject row = new JSONObject ();
						row.AddField ("cloth_type", i);
						row.AddField ("cloth_num", j);
						clothData.Add (row);
					}
				} else {
					for (int j = 0; j < 4; j++) {
						JSONObject row = new JSONObject ();
						row.AddField ("cloth_type", i);
						row.AddField ("cloth_num", j);
						clothData.Add (row);
					}
				}


				Image part = ch.Find (clothIndex [i]).GetComponent<Image> ();
				Color c = part.color;
				int num = (int)currentChData [clothIndex [i]].n;
				if (num >= 0) {
					if (clothIndex [i].Equals ("hair")
					                   || clothIndex [i].Equals ("face")
					                   || clothIndex [i].Equals ("hairac")) {
						num *= 3;
					} else {
						num *= 4;
					}

					part.sprite = clothes [i] [num];
					c.a = 1f;
				} else {
					part.sprite = null;
					c.a = 0;
				}
				part.color = c;
			}

			clothEditCategoryClick (0);
			clothEdit.SetActive (true);
			if (socketScript.mainScript) {
				foreach (GameObject icon in socketScript.mainScript.menuIcons) {
					icon.SetActive (false);
				}
			} else if (socketScript.squareScript) {
				socketScript.squareScript.homeButton.SetActive (false);
			}

			setCashActive (false);
			if (room == null || room == nick || room.Contains ("@channel")) {
				setButtonsActive (false);
			}
			if (room != null) {
				setChatingActive (false);
			}
		} else if (data ["result"].str.Equals ("fail")) {
		} else {
		}
	}

	public void onAddClothes (JSONObject data)
	{
		if (data ["result"].str.Equals ("success")) {
			getChData () ["userData"] ["cash"].str = data ["cash"].str;
			cash.transform.GetComponentInChildren<Text> ().text = data ["cash"].str;

			Transform contents = clothEdit.transform.GetChild (2).GetChild (0).GetChild (0);
			for (int i = 0; i < data ["clothData"].Count; i++) {
				int type = (int)data ["clothData"] [i] ["cloth_type"].n;
				int num = (int)data ["clothData"] [i] ["cloth_num"].n;
				clothData.Add (data ["clothData"] [i]);

				Transform clothMem = contents.Find (type + "_" + num);
				if (clothMem != null) {
					clothMem.GetChild (1).gameObject.SetActive (false);
				}
			}

			openMessagePopup (LocalizationString.MAINGAME_SuccessToBuy);
		} else if (data ["result"].str.Equals ("fail")) {
		} else if (data ["result"].str.Equals ("have_item")) {
			log (LocalizationString.SHOP_HaveItemMessage);
		} else if (data ["result"].str.Equals ("not_enough_cash")) {
			openMessagePopup (LocalizationString.MAINGAME_NotEnoughGem);
		} else {
		}
		setProgressBackActive (false);
	}

	public void onSetClothes (JSONObject data)
	{
		setProgressBackActive (false);

		if (data ["result"].str.Equals ("success")) {
			if (data ["nickname"].str == nick) {
				for (int i = 0; i < clothIndex.Length; i++) {
					chData ["userData"].SetField (clothIndex [i], (int)data [clothIndex [i]].n);
				}
				clothEdit.SetActive (false);

				if (socketScript.mainScript) {
					foreach (GameObject icon in socketScript.mainScript.menuIcons) {
						icon.SetActive (true);
					}
				} else if (socketScript.squareScript) {
					socketScript.squareScript.homeButton.SetActive (true);
				}

				setCashActive (true);
				if (room == null || room == nick || room.Contains ("@channel")) {
					setButtonsActive (true);
				}
				if (room != null) {
					setChatingActive (true);
				}

			}

            Transform ch = findUser(data["nickname"].str);
            if (ch != null)
            {
                setCharacter(data, ch.GetComponent<CharacterScript>());
            }

		} else if (data ["result"].str.Equals ("fail")) {
		}


	}

	public void clothEditClick ()
	{
		socketScript.getClothes ();
		setProgressBackActive (true);
		profilePopup.SetActive (false);
		playSound (0);
	}

	public void clothEditConfirmClick ()
	{
		JSONObject toBuy = getToBuyItems ();
		if (toBuy.Count > 0) {
			socketScript.getItemPrice (toBuy);
		} else {
			socketScript.setClothes (currentChData);
		}
		setProgressBackActive (true);
		playSound (0);
	}

	public void clothEditCancelClick ()
	{
		clothEdit.SetActive (false);
		if (socketScript.mainScript) {
			foreach (GameObject icon in socketScript.mainScript.menuIcons) {
				icon.SetActive (true);
			}
		} else if (socketScript.squareScript) {
			socketScript.squareScript.homeButton.SetActive (true);
		}

        setCashActive(true);
        if (room == null || room == nick || room.Contains("@channel"))
        {
            setButtonsActive(true);
        }
        if (room != null)
        {
            setChatingActive(true);
        }
        
		playSound (2);
	}

	JSONObject getToBuyItems ()
	{
		JSONObject toBuy = new JSONObject ();
		JSONObject row, indexValue;

		for (int i = 0; i < clothIndex.Length; i++) {
			indexValue = currentChData [clothIndex [i]];
			int index = -1;
			if (indexValue != null)
				index = (int)indexValue.n;
			if (index >= 0) {
				row = getClothRow (i, index, clothData);
				if (row == null) {
					row = new JSONObject ();
					row.AddField ("table_num", (int)PROTOCOL.table_num.closet);
					row.AddField ("type", i);
					row.AddField ("num", index);
					toBuy.Add (row);
				}
			}
		}

		return toBuy;
	}

	JSONObject getClothRow (int type, int num, JSONObject array)
	{
		for (int i = 0; i < array.Count; i++) {
			if (type == (int)array [i] ["cloth_type"].n && num == (int)array [i] ["cloth_num"].n) {
				return array [i];
			}
		}
                    return null;//--------------------------------------------------------------------------//
                    //cloth
	}

	public void clothEditCategoryClick (int index)
	{
		Transform contents = clothEdit.transform.GetChild (2).GetChild (0).GetChild (0);
		destroyChilds (contents);
		List<int> list = getClothNumList (index, clothData);
		addClothMembers (index, list, contents);
	}

	List<int> getClothNumList (int type, JSONObject array)
	{
		List<int> list = new List<int> ();
		for (int i = 0; i < array.Count; i++) {
			if (type == (int)array [i] ["cloth_type"].n) {
				list.Add ((int)array [i] ["cloth_num"].n);
			}
		}

		return list;
	}

	void addClothMembers (int type, List<int> list, Transform parent)
	{
		Vector2 size = new Vector2 (100f, 100f);
		Vector3 pos = Vector3.zero;
		if (type > 0)
			pos.y = clothIconFilter [type - 1].y;

		if (type > 0 && type != 3) {
			Button emptyButton = GameObject.Instantiate (furnitureMemberPref, parent).GetComponent<Button> ();
			emptyButton.onClick.AddListener (() => {
				clothEditItemClick (type, -1, -1);
			});
		}

		int multiply;
		if (clothIndex [type].Equals ("hair")
		          || clothIndex [type].Equals ("face")
		          || clothIndex [type].Equals ("hairac")) {
			multiply = 3;
		} else {
			multiply = 4;
		}

		for (int i = 0; i < clothes [type].Length / multiply; i++) {
			int num = i;
			int index = i * multiply;
			Transform clothMem = GameObject.Instantiate (clothMemberPref, parent).transform;
			clothMem.name = type + "_" + num;
			Image image = clothMem.GetChild (0).GetComponent<Image> ();
			image.sprite = clothes [type] [index];
			if (type == 0) {
				image.rectTransform.sizeDelta = size;
			} else {
				Vector2 scale = image.rectTransform.localScale;
				scale.x = clothIconFilter [type - 1].scale;
				scale.y = clothIconFilter [type - 1].scale;
				image.rectTransform.localScale = scale;

				image.rectTransform.anchoredPosition = pos;
			}

			if (!list.Contains (num)) {
				clothMem.GetChild (1).gameObject.SetActive (true);
			}

			clothMem.GetComponent<Button> ().onClick.AddListener (() => {
				clothEditItemClick (type, num, index);
			});
		}
	}

	void clothEditItemClick (int type, int num, int index)
	{
		if (num == (int)currentChData [clothIndex [type]].n) {
			return;
		}

		currentChData.SetField (clothIndex [type], num);
		Transform ch = clothEdit.transform.GetChild (0);
		Image part = ch.Find (clothIndex [type]).GetComponent<Image> ();
		//Debug.Log (part.name + "/" + type + "," + index);
		Color c = part.color;
		if (num >= 0) {
			part.sprite = clothes [type] [index];
			c.a = 1f;
		} else {
			part.sprite = null;
			c.a = 0;
		}
		part.color = c;
	}

	public void onGetItemPrice (JSONObject data)
	{
		setProgressBackActive (false);

		if (data ["item_price"].Count == 0) {
			log ("no item price");
			return;
		}

		bool isCloth;
		if ((int)data ["item_price"] [0] ["table_num"].n == (int)PROTOCOL.table_num.closet) {
			isCloth = true;
		} else {
			isCloth = false;
		}

		JSONObject clothData = new JSONObject ();
		JSONObject row;
		int multiply;
		long total = 0;
		Vector3 pos = Vector3.zero;
//        Vector2 size = new Vector2(150f, 150f);
		Transform contents = itemBuyPopup.transform.GetChild (0).GetChild (0).GetChild (0).GetChild (0);
		destroyChilds (contents);
		for (int i = 0; i < data ["item_price"].Count; i++) {
			int table_num = (int)data ["item_price"] [i] ["table_num"].n;
			int type = (int)data ["item_price"] [i] ["type"].n;
			int num = (int)data ["item_price"] [i] ["num"].n;
			long cashValue = (long)data ["item_price"] [i] ["cash"].n;
			total += cashValue;

			Sprite image = null;
			if (table_num == (int)PROTOCOL.table_num.closet) {
				if (clothIndex [type].Equals ("hair")
				                || clothIndex [type].Equals ("face")
				                || clothIndex [type].Equals ("hairac")) {
					multiply = 3;
				} else {
					multiply = 4;
				}
				image = clothes [type] [num * multiply];
			} else if (table_num == (int)PROTOCOL.table_num.floorNwall) {
				if (type == 0) {
					type = -1;
					image = floor_thumb [num];
				} else if (type == 1) {
					type = -2;
					image = wall_thumb [num];
				}
			} else if (table_num == (int)PROTOCOL.table_num.house) {
				image = furniture_thumb [type] [num];
			}

			Transform goods = GameObject.Instantiate (goodsPref, contents).transform;
			Image imageGoods = goods.GetChild (0).GetComponentInChildren<Image> ();
			imageGoods.sprite = image;

			if (isCloth) {
				imageGoods.SetNativeSize ();

				Vector2 scale = imageGoods.rectTransform.localScale;
				scale.x = clothIconFilter [type - 1].scale;
				scale.y = clothIconFilter [type - 1].scale;
				imageGoods.rectTransform.localScale = scale;

				pos.y = clothIconFilter [type - 1].y;
				imageGoods.rectTransform.anchoredPosition = pos;

				row = new JSONObject ();
				row.AddField ("cloth_type", type);
				row.AddField ("cloth_num", num);
				clothData.Add (row);
			}

			goods.GetChild (2).GetComponent<Text> ().text = cashValue + "";
		}

		Button yes = itemBuyPopup.transform.GetChild (0).GetChild (2).GetComponent<Button> ();
		yes.onClick.RemoveAllListeners ();
		itemBuyPopup.transform.GetChild (0).GetChild (1).GetComponent<Text> ().text
        = string.Format (LocalizationString.MAINGAME_BuyingMessage, total);
		yes.onClick.AddListener (() => {
			if (isCloth) {
				socketScript.addClothes (clothData);
			} else {
				int furniture_type = (int)data ["item_price"] [0] ["type"].n;
				if ((int)data ["item_price"] [0] ["table_num"].n == (int)PROTOCOL.table_num.floorNwall) {
					if (furniture_type == 0) {
						furniture_type = -1;
					} else if (furniture_type == 1) {
						furniture_type = -2;
					}
				}
				socketScript.addFurniture (furniture_type, (int)data ["item_price"] [0] ["num"].n);
			}
			itemBuyPopup.SetActive (false);
			setProgressBackActive (true);
			playSound (0);
		});
		itemBuyPopup.SetActive (true);
	}

    //--------------------------------------------------------------------------//
    //slot
    public void slotIconClick(){
        openMessagePopup(LocalizationString.MAINGAME_GoSlotMessage, false,
            () => {
                socketScript.goTo("slot");
                messagePopup.SetActive(false);
                playSound(0);
            });
        playSound(1);
    }
    public void slotClick(string nickname)
    {
        if(string.IsNullOrEmpty(nickname)){
            socketScript.getSlot();
        }else{
            socketScript.getSlot(nickname);
        }
        
        setProgressBackActive(true);
        playSound(1);
    }

    public void slotUnlockClick(int slotNum)
    {
        openMessagePopup(string.Format(LocalizationString.MSG_UnlockSlotMessage, slotNum+1, slot_value[slotNum]), false, () => {
            socketScript.addSlot();
            setProgressBackActive(true);
            messagePopup.SetActive(false);
            playSound(0);
        });
        playSound(1);
    }

    public void slotSaveClick(int slotNum)
    {
        openMessagePopup(string.Format(LocalizationString.MSG_SaveSlotMessage, slotNum+1), false, () => {
            socketScript.setSlot(slotNum);
            messagePopup.SetActive(false);
            playSound(0);
        });
        playSound(1);
    }

    public void onSlot(JSONObject data)
    {
        if (data["result"].str.Equals("success"))
        {
            room = null;
            this.data = data;
            UnityEngine.SceneManagement.SceneManager.LoadScene("SlotScene");
        }else if(data["result"].str.Equals("fail")){

        }
    }

    public void onAddSlot(JSONObject data)
    {
        setProgressBackActive(false);
        if (data["result"].str == "success")
        {
            chData["userData"]["cash"].str = data["cash"].str;
            cash.transform.GetComponentInChildren<Text>().text = data["cash"].str;

            int slotNum = (int)data["slotNum"].n;
            if (shopPopup.activeSelf)
            {
                setShopSlotButton(slotNum + 1);
            }
            if (slotPopup.activeSelf)
            {
                setSlot(data);

                if (slotNum + 1 < 6)
                {
                    Transform slotTrs = slotPopup.transform.GetChild(0).Find("Slot" + (slotNum + 1));
                    Button unlockButton = slotTrs.GetChild(1).GetComponent<Button>();
                    unlockButton.interactable = true;
                    unlockButton.onClick.RemoveAllListeners();
                    unlockButton.onClick.AddListener(() =>
                    {
                        slotUnlockClick(slotNum + 1);
                    });
                }
            }
            if (socketScript.slotScript)
            {
                data.AddField("nickname", "slot_character_" + slotNum);
                createDoll(data, movable).setOnClickAction(() => {
                    slotButtonClick(data);
                });
            }
        }
        else if (data["result"].str == "not_enough_cash")
        {
            log(LocalizationString.MAINGAME_NotEnoughGem);
        }
        else if (data["result"].str == "have_item")
        {
            log(LocalizationString.SHOP_HaveItemMessage);
        }
        else if (data["result"].str == "fail")
        {

        }
        else
        {

        }
    }

    void setSlot(JSONObject data)
    {
        int slotNum = (int)data["slotNum"].n;
        Transform slotTrs = slotPopup.transform.GetChild(0).Find("Slot" + slotNum);
        slotTrs.GetChild(0).gameObject.SetActive(true);
        slotTrs.GetChild(1).gameObject.SetActive(false);

        CharacterScript character = slotTrs.GetChild(0).GetChild(0).GetComponent<CharacterScript>();
        setCharacter(data, character);

        if(!data.HasField("nickname") || data["nickname"].str == nick){
            Button loadButton = slotTrs.GetChild(0).GetChild(2).GetComponent<Button>();
            loadButton.onClick.RemoveAllListeners();
            loadButton.onClick.AddListener(() => {
                openMessagePopup(string.Format(LocalizationString.MSG_LoadSlotMessage, slotNum + 1), false, () => {
                    socketScript.setClothes(data);
                    messagePopup.SetActive(false);
                    slotPopup.SetActive(false);
                });
            });

            slotTrs.GetChild(0).GetChild(1).gameObject.SetActive(true);
            slotTrs.GetChild(0).GetChild(2).gameObject.SetActive(true);
        }else{
            slotTrs.GetChild(0).GetChild(1).gameObject.SetActive(false);
            slotTrs.GetChild(0).GetChild(2).gameObject.SetActive(false);
        }

        Button slotButton = slotTrs.GetComponent<Button>();
        slotButton.onClick.RemoveAllListeners();
        slotButton.onClick.AddListener(() => {
            slotButtonClick(data);
        });
    }

    public void slotButtonClick(JSONObject data)
    {
        int slotNum = (int)data["slotNum"].n;
        CharacterScript character = slotCharacterPopup.transform.GetChild(0).GetChild(0).GetChild(0).GetComponent<CharacterScript>();
        setCharacter(data, character);

        if (!data.HasField("nickname") || data["nickname"].str == nick || data["nickname"].str.Contains("@slot_character"))
        {
            Button saveButton = slotCharacterPopup.transform.GetChild(0).GetChild(0).GetChild(1).GetComponent<Button>();
            saveButton.onClick.RemoveAllListeners();
            saveButton.onClick.AddListener(() => {
                slotSaveClick(slotNum);
                slotCharacterPopup.SetActive(false);
            });

            Button loadButton = slotCharacterPopup.transform.GetChild(0).GetChild(0).GetChild(2).GetComponent<Button>();
            loadButton.onClick.RemoveAllListeners();
            loadButton.onClick.AddListener(() => {
                openMessagePopup(string.Format(LocalizationString.MSG_LoadSlotMessage, slotNum + 1), false, () => {
                    socketScript.setClothes(data);
                    messagePopup.SetActive(false);
                    slotPopup.SetActive(false);
                    slotCharacterPopup.SetActive(false);
                    playSound(0);
                });
                playSound(1);
            });

            slotCharacterPopup.transform.GetChild(0).GetChild(0).GetChild(1).gameObject.SetActive(true);
            slotCharacterPopup.transform.GetChild(0).GetChild(0).GetChild(2).gameObject.SetActive(true);
        }
        else{
            slotCharacterPopup.transform.GetChild(0).GetChild(0).GetChild(1).gameObject.SetActive(false);
            slotCharacterPopup.transform.GetChild(0).GetChild(0).GetChild(2).gameObject.SetActive(false);
        }

        slotCharacterPopup.transform.GetChild(0).GetChild(1).GetComponent<Text>().text = LocalizationString.Slot + " " + (slotNum + 1);
        slotCharacterPopup.SetActive(true);
        playSound(1);
    }

    void setShopSlotButton(int slotNum)
    {
        Button slotButton = shopPopup.transform.GetChild(3).GetChild(0).GetChild(0).GetChild(6).GetComponent<Button>();
        if (slotNum < 6)
        {
            slotButton.GetComponentInChildren<Text>().text = string.Format(LocalizationString.SHOP_SlotMessage, slotNum + 1);
            slotButton.onClick.RemoveAllListeners();
            slotButton.onClick.AddListener(() => {
                openMessagePopup(string.Format(LocalizationString.MSG_UnlockSlotMessage, slotNum + 1, slot_value[slotNum]), false, () => {
                    socketScript.addSlot();
                    setProgressBackActive(true);
                    messagePopup.SetActive(false);
                    playSound (0);
                });
                playSound(1);
            });
            slotButton.gameObject.SetActive(true);
        }
        else
        {
            slotButton.gameObject.SetActive(false);
        }
    }
    
    void setShopAdoptButton(int adoptNum){
    	Button slotButton = shopPopup.transform.GetChild(3).GetChild(0).GetChild(0).GetChild(7).GetComponent<Button>();
        if (adoptNum < 3)
        {
            slotButton.GetComponentInChildren<Text>().text = string.Format(LocalizationString.SHOP_SlotMessage, adoptNum + 1);
            slotButton.onClick.RemoveAllListeners();
            slotButton.onClick.AddListener(() => {
                openMessagePopup(string.Format(LocalizationString.MSG_UnlockSlotMessage, adoptNum + 1, slot_value[adoptNum]), false, () => {
                    socketScript.addAdopt();
                    setProgressBackActive(true);
                    messagePopup.SetActive(false);
					playSound (0);
                });
                playSound(1);
            });
            slotButton.gameObject.SetActive(true);
        }
        else
        {
            slotButton.gameObject.SetActive(false);
        }
    }

    public void onGetSlot(JSONObject data)
    {
        setProgressBackActive(false);
        if (data["result"].str == "success")
        {
            if (shopPopup.activeSelf)
            {
                int slotNum = data["slotData"].Count;
                setShopSlotButton(slotNum);

				int adoptNum = chData ["adoptData"].Count;
				setShopAdoptButton (adoptNum);
            }
            else
            {
                int maxSlotNum = -1;
                foreach (JSONObject slotRow in data["slotData"].list)
                {
                    int slotNum = (int)slotRow["slotNum"].n;
                    if (maxSlotNum < slotNum)
                        maxSlotNum = slotNum;

                    setSlot(slotRow);
                }

                if (++maxSlotNum < 6)
                {
                    Transform slotTrs = slotPopup.transform.GetChild(0).Find("Slot" + maxSlotNum);
                    Button unlockButton = slotTrs.GetChild(1).GetComponent<Button>();
                    slotTrs.GetChild(0).gameObject.SetActive(false);
                    slotTrs.GetChild(1).gameObject.SetActive(true);
                    if (data["nickname"].str == nick)
                    {
                        unlockButton.interactable = true;
                        unlockButton.onClick.RemoveAllListeners();
                        unlockButton.onClick.AddListener(() =>
                        {
                            slotUnlockClick(maxSlotNum);
                        });
                    }else{
                        unlockButton.interactable = false;
                    }

                    for (int i = maxSlotNum+1; i < 6; i++)
                    {
                        slotTrs = slotPopup.transform.GetChild(0).Find("Slot" + i);
                        slotTrs.GetChild(0).gameObject.SetActive(false);
                        slotTrs.GetChild(1).gameObject.SetActive(true);
                        unlockButton = slotTrs.GetChild(1).GetComponent<Button>();
                        unlockButton.interactable = false;
                    }
                }
                slotPopup.SetActive(true);
            }
        }
        else if (data["result"].str == "fail")
        {

        }
    }

    public void onSetSlot(JSONObject data)
    {
        if (slotPopup.activeSelf)
        {
            setSlot(data);
        }
        if (socketScript.slotScript)
        {
            int slotNum = (int)data["slotNum"].n;
            DollScript dollScript = movable.Find("@slot_character_" + slotNum).GetComponent<DollScript>();
            setCharacter(data, dollScript);
            dollScript.setOnClickAction(() => {
                slotButtonClick(data);
            });
        }
    }

    //--------------------------------------------------------------------------//
    //diary

    public void diaryBackClick(){
        Transform contents = null;
        if(data["isDiary"].b){
            contents = diaryPopup.transform.GetChild(0).GetChild(0);
        }else{
            contents = diaryPopup.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0);
        }
        destroyChilds(contents);
        data = null;
        diaryPopup.SetActive(false);
        playSound(2);
    }

    public void diaryWriteClick(){
        if (nick == data["owner"].str)
        {
            Transform diaryBack = diaryEditPopup.transform.GetChild(0);
            diaryBack.GetChild(1).GetComponent<InputField>().text = "";
            diaryBack.GetChild(2).GetComponent<InputField>().text = "";
            diaryBack.GetChild(3).GetComponent<Dropdown>().value = 2;
            Button confirm = diaryBack.GetChild(5).GetComponent<Button>();
            confirm.onClick.RemoveAllListeners();
            confirm.onClick.AddListener(() =>
            {
                openMessagePopup(LocalizationString.MSG_DiaryAddMessage, false, () =>
                {
                    diaryWriteConfirmClick();
                    messagePopup.SetActive(false);
                });
            });
            diaryEditPopup.transform.GetChild(0).gameObject.SetActive(true);
            diaryEditPopup.transform.GetChild(1).gameObject.SetActive(false);
        }
        else
        {
            Transform diaryBack = diaryEditPopup.transform.GetChild(1);
            diaryBack.GetChild(1).GetComponent<InputField>().text = "";
            Button confirm = diaryBack.GetChild(3).GetComponent<Button>();
            confirm.onClick.RemoveAllListeners();
            confirm.onClick.AddListener(() =>
            {
                openMessagePopup(LocalizationString.MSG_DiaryAddMessage, false, () =>
                {
                    diaryWriteConfirmClick();
                    messagePopup.SetActive(false);
                });
            });
            diaryEditPopup.transform.GetChild(0).gameObject.SetActive(false);
            diaryEditPopup.transform.GetChild(1).gameObject.SetActive(true);
        }

        diaryEditPopup.SetActive(true);
    }

    void diaryWriteConfirmClick(){
        if(nick == data["owner"].str){
            Transform diaryBack = diaryEditPopup.transform.GetChild(0);
            string title = diaryBack.GetChild(1).GetComponent<InputField>().text;
            string content = diaryBack.GetChild(2).GetComponent<InputField>().text;
            PROTOCOL.access_level access_level = (PROTOCOL.access_level)diaryBack.GetChild(3).GetComponent<Dropdown>().value + 1;
            if(string.IsNullOrEmpty(title) || string.IsNullOrEmpty(content)){
                log(LocalizationString.MSG_DiaryEmptyMessage);
                return;
            }
            socketScript.addDiary(data["owner"].str, title, content, access_level);
            
        }else{
            Transform diaryBack = diaryEditPopup.transform.GetChild(1);
            string content = diaryBack.GetChild(1).GetComponent<InputField>().text;

            if (string.IsNullOrEmpty(content))
            {
                log(LocalizationString.MSG_DiaryEmptyMessage);
                return;
            }
            socketScript.addDiary(data["owner"].str, content, PROTOCOL.access_level.secret);
            
        }
        
        diaryEditPopup.SetActive(false);
        setProgressBackActive(true);
        playSound(2);
    }

    public void diarySwitchClick(){
        socketScript.getDiary(!data["isDiary"].b, data["owner"].str);
        setProgressBackActive(true);
        playSound(1);
    }

    public void diaryLeftClick(){
        Button left = diaryPopup.transform.GetChild(5).GetComponent<Button>();
        GameObject right = diaryPopup.transform.GetChild(6).gameObject;
        int nextIndex;

        if(data["isDiary"].b){
            if (currentDiaryPage > 0)
            {
                currentDiaryPage -= 1;
                addPosts();
            }

            nextIndex = (currentDiaryPage + 1) * 2;
            
        }else{
            if(currentDiaryPage > 0){
                currentDiaryPage -= 1;
                getDiaryUserDatas();
            }

            nextIndex = (currentDiaryPage + 1) * 5;
        }
        
        if (currentDiaryPage == 0)
        {
            left.gameObject.SetActive(false);
        }

        if (data["postDatas"][nextIndex])
        {
            right.SetActive(true);
        }
        else
        {
            right.SetActive(false);
        }
    }

    public void diaryRightClick(){
        GameObject left = diaryPopup.transform.GetChild(5).gameObject;
        Button right = diaryPopup.transform.GetChild(6).GetComponent<Button>();
        int maxPage, prevIndex;
        
        if(data["isDiary"].b){
            maxPage = (data["postDatas"].Count - 1) / 2;
            if (currentDiaryPage < maxPage)
            {
                currentDiaryPage += 1;
                addPosts();
            }

            prevIndex = (currentDiaryPage - 1) * 2;
            
        }else{
            maxPage = (data["postDatas"].Count - 1) / 5;
            if(currentDiaryPage < maxPage){
                currentDiaryPage += 1;
                getDiaryUserDatas();
            }

            prevIndex = (currentDiaryPage - 1) * 5;
        }

        if (currentDiaryPage == maxPage)
        {
            right.gameObject.SetActive(false);
        }

        if (prevIndex >= 0 && data["postDatas"][prevIndex])
        {
            left.SetActive(true);
        }
        else
        {
            left.SetActive(false);
        }
    }

    public void onGetDiary(JSONObject data){
        if(data["result"].str == "success"){
            bool isFriend = this.data.HasField("isFriend") ? this.data["isFriend"].b : false;
            data.AddField("userData", this.data["userData"]);
            data.AddField ("isFriend", isFriend);
            this.data = data;

            currentDiaryPage = 0;
            if (data["isDiary"].b)
            {
                setProgressBackActive(false);
                destroyChilds (diaryPopup.transform.GetChild (0).GetChild (0));
                if (data["postDatas"].Count > 0)
                {
                    addPosts();
                }

                diaryPopup.transform.GetChild(0).gameObject.SetActive(true);
                diaryPopup.transform.GetChild(1).gameObject.SetActive(false);
                if(nick == data["owner"].str){
                    diaryPopup.transform.GetChild (3).gameObject.SetActive (true);
                    diaryPopup.transform.GetChild(4).GetComponentInChildren<Text>().text = LocalizationString.GuestBook;
                    diaryPopup.transform.GetChild(4).gameObject.SetActive(true);
                }else if(isFriend){
                    diaryPopup.transform.GetChild (3).gameObject.SetActive (false);
                    diaryPopup.transform.GetChild(4).GetComponentInChildren<Text>().text = LocalizationString.GuestBook;
                    diaryPopup.transform.GetChild(4).gameObject.SetActive(true);
                }else{
                    diaryPopup.transform.GetChild (3).gameObject.SetActive (false);
                    diaryPopup.transform.GetChild(4).gameObject.SetActive(false);
                }
                
                if (data["postDatas"].Count > 2)
                {
                    diaryPopup.transform.GetChild(6).gameObject.SetActive(true);
                }
                else
                {
                    diaryPopup.transform.GetChild(6).gameObject.SetActive(false);
                }
            }
            else
            {
                
                if (data["postDatas"].Count > 0)
                {
                    getDiaryUserDatas();

                    if (data["postDatas"].Count > 5)
                    {
                        diaryPopup.transform.GetChild(6).gameObject.SetActive(true);
                    }
                    else
                    {
                        diaryPopup.transform.GetChild(6).gameObject.SetActive(false);
                    }
                }
                else
                {
                    setProgressBackActive(false);
                    destroyChilds(diaryPopup.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0));
                    diaryPopup.transform.GetChild(6).gameObject.SetActive(false);
                }

                diaryPopup.transform.GetChild(0).gameObject.SetActive(false);
                diaryPopup.transform.GetChild(1).gameObject.SetActive(true);
                diaryPopup.transform.GetChild (3).gameObject.SetActive (nick != data ["owner"].str);
                diaryPopup.transform.GetChild(4).GetComponentInChildren<Text>().text = LocalizationString.Diary;
            }
            diaryPopup.transform.GetChild(5).gameObject.SetActive(false);
            diaryPopup.SetActive(true);
        }else if(data["result"].str == "blocked"){
            setProgressBackActive(false);
            log(LocalizationString.MSG_DiaryBlockMessage);
        }else if(data["result"].str == "not_friend"){
            setProgressBackActive(false);
            log(LocalizationString.MSG_DiaryNotFriendMessage);
        }else if(data["result"].str == "fail"){
            setProgressBackActive(false);
        }else{

        }
    }

    void addPosts(){
        Transform posts = diaryPopup.transform.GetChild(0).GetChild(0);
        destroyChilds(posts);
        if (data["postDatas"].Count > currentDiaryPage * 2)
        {
            JSONObject postData = data["postDatas"][currentDiaryPage * 2];
            addPost(postData);
            if (data["postDatas"].Count > currentDiaryPage * 2 + 1)
            {
                postData = data["postDatas"][currentDiaryPage * 2 + 1];
                Transform post = addPost(postData);
                Vector3 pos = post.localPosition;
                pos.x *= -1;
                post.localPosition = pos;
            }
        }
        
    }

    Transform addPost(JSONObject postData){
        Transform posts = diaryPopup.transform.GetChild(0).GetChild(0);
        Transform post = Instantiate(postPref, posts).transform;
        post.name = (long)postData ["_id"].n + "";
        setProfileCharacter(data["userData"], post.GetChild(0).GetChild(0));
        post.GetChild(1).GetComponentInChildren<Text>().text = DateTime.Parse(postData["write_date"].str).ToLocalTime().ToString("yyyy.MM.dd\ntt h:mm");
        post.GetChild(2).GetComponentInChildren<Text>().text = postData["title"].str;
        post.GetChild(3).GetChild(0).GetChild(0).GetComponentInChildren<Text>().text = postData["content"].str;
        
        Button edit = post.GetChild (4).GetComponent<Button> ();
        Button delete = post.GetChild (5).GetComponent<Button> ();
        if (nick == postData["owner"].str)
        {
            edit.GetComponentInChildren<Text> ().text = LocalizationString.Edit;
            delete.GetComponentInChildren<Text> ().text = LocalizationString.Delete;
            edit.onClick.AddListener(() =>
            {
                diaryEditClick(postData);
            });
            delete.onClick.AddListener(() =>
            {
                diaryDeleteClick((long)postData["_id"].n);
            });
        }
        else
        {
            Destroy(edit.gameObject);
            Destroy(delete.gameObject);
        }
        Canvas.ForceUpdateCanvases ();
        return post;
    }

    void diaryEditClick(JSONObject postData){
        if(nick == postData["owner"].str){
            Transform diaryBack = diaryEditPopup.transform.GetChild(0);
            diaryBack.GetChild(1).GetComponent<InputField>().text = postData["title"].str;
            diaryBack.GetChild(2).GetComponent<InputField>().text = postData["content"].str;
            diaryBack.GetChild(3).GetComponent<Dropdown>().value = (int)postData["access_level"].n - 1;
            Button confirm = diaryBack.GetChild(5).GetComponent<Button>();
            confirm.onClick.RemoveAllListeners();
            confirm.onClick.AddListener(() =>
            {
                openMessagePopup(LocalizationString.MSG_DiaryEditMessage, false, () =>
                {
                    diaryEditConfirmClick(postData);
                    messagePopup.SetActive(false);
                });
            });
            diaryEditPopup.transform.GetChild(0).gameObject.SetActive(true);
            diaryEditPopup.transform.GetChild(1).gameObject.SetActive(false);
        }else{
            Transform diaryBack = diaryEditPopup.transform.GetChild(1);
            diaryBack.GetChild(1).GetComponent<InputField>().text = postData["content"].str;
            Button confirm = diaryBack.GetChild(3).GetComponent<Button>();
            confirm.onClick.RemoveAllListeners();
            confirm.onClick.AddListener(() =>
            {
                    openMessagePopup(LocalizationString.MSG_DiaryEditMessage, false, () =>
                {
                    diaryEditConfirmClick(postData);
                    messagePopup.SetActive(false);
                });
            });
            diaryEditPopup.transform.GetChild(0).gameObject.SetActive(false);
            diaryEditPopup.transform.GetChild(1).gameObject.SetActive(true);
        }
        
        diaryEditPopup.SetActive(true);
    }

    void diaryEditConfirmClick(JSONObject postData){
        if (nick == postData["owner"].str)
        {
            Transform diaryBack = diaryEditPopup.transform.GetChild(0);
            string title = diaryBack.GetChild(1).GetComponent<InputField>().text;
            string content = diaryBack.GetChild(2).GetComponent<InputField>().text;

            if(string.IsNullOrEmpty(title) || string.IsNullOrEmpty(content)){
                log(LocalizationString.MSG_DiaryEmptyMessage);
                return;
            }
            postData["title"].str = title;
            postData["content"].str = content;
            postData.SetField("access_level", diaryBack.GetChild(3).GetComponent<Dropdown>().value + 1);
        }else{
            Transform diaryBack = diaryEditPopup.transform.GetChild(1);

            string content = diaryBack.GetChild(1).GetComponent<InputField>().text;
            if(string.IsNullOrEmpty(content)){
                log(LocalizationString.MSG_DiaryEmptyMessage);
                return;
            }
            postData["content"].str = content;
        }
        
        socketScript.setDiary(postData);
        diaryEditPopup.SetActive(false);
        setProgressBackActive(true);
        playSound(2);
    }

    void diaryDeleteClick(long _id){
        openMessagePopup(LocalizationString.MSG_DiarDeleteMessage, false, () =>
        {
            socketScript.deleteDiary(_id);
            messagePopup.SetActive(false);
            setProgressBackActive(true);
            playSound(2);
        });
    }

    void getDiaryUserDatas(){
        List<string> nicknames = new List<string>();
        int maxIndex = (currentDiaryPage + 1) * 5;
        if(maxIndex > data["postDatas"].Count){
            maxIndex = data["postDatas"].Count;
        }
        for (int i = currentDiaryPage * 5; i < maxIndex; i++){
            nicknames.Add(data["postDatas"][i]["writer"].str);
        }
        
        socketScript.getUserDatas(nicknames, "diary");
    }

    void onGetUserDatasTypeDiary(JSONObject data){
        addGuestPosts(data["userDatas"]);
    }

    void addGuestPosts(JSONObject userDatas){
        Transform posts = diaryPopup.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0);
        destroyChilds(posts);
        int maxIndex = (currentDiaryPage + 1) * 5;
        if (maxIndex > data["postDatas"].Count)
        {
            maxIndex = data["postDatas"].Count;
        }
        JSONObject postData, userData;
        for (int i = currentDiaryPage * 5; i < maxIndex; i++){
            postData = data["postDatas"][i];
            userData = userDatas[postData["writer"].str];
            addGuestPost(postData, userData);
            if(!postData["reply"].IsNull){
                addReply(postData);
            }
        }
        
    }

    void addGuestPost(JSONObject postData, JSONObject userData){
        Transform posts = diaryPopup.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0);
        Transform post = Instantiate(guestPostPref, posts).transform;
        post.name = (long)postData ["_id"].n + "";
        setProfileCharacter(userData, post.GetChild(0).GetChild(0));
        post.GetChild(1).GetComponent<Text>().text = postData["writer"].str;
        post.GetChild(2).GetComponent<Text>().text = ((SystemLanguage)userData["language"].n).ToString();
        post.GetChild(3).GetChild(0).GetComponentInChildren<Text>().text = postData["content"].str;
        post.GetChild(4).GetComponent<Text>().text = DateTime.Parse(postData["write_date"].str).ToLocalTime().ToString("yyyy.MM.dd\ntt h:mm");
        Button edit = post.GetChild (5).GetComponent<Button> ();
        Button delete = post.GetChild (6).GetComponent<Button> ();
        
        if (nick == postData["writer"].str){
            edit.GetComponentInChildren<Text> ().text = LocalizationString.Edit;
            edit.onClick.AddListener(() =>
            {
                diaryEditClick(postData);
            });
        }else if(nick == postData["owner"].str){
            edit.GetComponentInChildren<Text> ().text = LocalizationString.Reply;
            edit.onClick.AddListener (() => {
                diaryReplyClick (postData);
            });
            if (!postData ["reply"].IsNull) {
                edit.gameObject.SetActive (false);
            }
        }else{
            Destroy(edit.gameObject);
        }

        if(nick == postData["writer"].str || nick == postData["owner"].str){
            delete.GetComponentInChildren<Text> ().text = LocalizationString.Delete;
            delete.onClick.AddListener(() =>
            {
                diaryDeleteClick((long)postData["_id"].n);
            });
        }else{
            Destroy(delete.gameObject);
        }

        LayoutRebuilder.ForceRebuildLayoutImmediate(post.GetComponent<RectTransform>());
        Canvas.ForceUpdateCanvases ();
    }

    void diaryReplyClick(JSONObject postData){
        Transform diaryBack = diaryEditPopup.transform.GetChild(1);
        diaryBack.GetChild(1).GetComponent<InputField>().text = "";
        Button confirm = diaryBack.GetChild(3).GetComponent<Button>();
        confirm.onClick.RemoveAllListeners();
        confirm.onClick.AddListener(() =>
        {
            openMessagePopup(LocalizationString.MSG_DiaryAddReplyMessage, false, () =>
            {
                diaryReplyConfirmClick(postData);
                messagePopup.SetActive(false);
            });
        });
        diaryEditPopup.transform.GetChild(0).gameObject.SetActive(false);
        diaryEditPopup.transform.GetChild(1).gameObject.SetActive(true);
        diaryEditPopup.SetActive(true);
    }

    void diaryReplyConfirmClick(JSONObject postData){
        Transform diaryBack = diaryEditPopup.transform.GetChild(1);
        string content = diaryBack.GetChild(1).GetComponent<InputField>().text;
        if(string.IsNullOrEmpty(content)){
            log(LocalizationString.MSG_DiaryEmptyMessage);
            return;
        }

        socketScript.setReply((long)postData["_id"].n, content);
        diaryEditPopup.SetActive(false);
        setProgressBackActive(true);
        playSound(2);
    }

    Transform addReply(JSONObject postData){
        Transform posts = diaryPopup.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0);
        Transform reply = Instantiate(postReplyPref, posts).transform;
        reply.name = "@" + (long)postData ["_id"].n;
        setProfileCharacter(data["userData"], reply.GetChild(0).GetChild(0));
        reply.GetChild(1).GetComponent<Text>().text = data["userData"]["nickname"].str;
        reply.GetChild(2).GetComponent<Text>().text = ((SystemLanguage)data["userData"]["language"].n).ToString();
        reply.GetChild(3).GetChild(0).GetComponentInChildren<Text>().text = postData["reply"]["content"].str;
        reply.GetChild(4).GetComponent<Text>().text = DateTime.Parse(postData["reply"]["write_date"].str).ToLocalTime().ToString("yyyy.MM.dd\ntt h:mm");
        Button edit = reply.GetChild (5).GetComponent<Button> ();
        Button delete = reply.GetChild (6).GetComponent<Button> ();
        if (nick == data["owner"].str)
        {
            edit.GetComponentInChildren<Text> ().text = LocalizationString.Edit;
            delete.GetComponentInChildren<Text> ().text = LocalizationString.Delete;
            edit.onClick.AddListener(() =>
            {
                replyEditClick(postData);
            });
            delete.onClick.AddListener(() =>
            {
                replyDeleteClick((long)postData["_id"].n);
            });
        }
        else
        {
            Destroy(edit.gameObject);
            Destroy(delete.gameObject);
        }

        LayoutRebuilder.ForceRebuildLayoutImmediate(reply.GetComponent<RectTransform>());
        Canvas.ForceUpdateCanvases ();
        return reply;
    }

    void replyEditClick(JSONObject postData){
        Transform diaryBack = diaryEditPopup.transform.GetChild(1);
        diaryBack.GetChild (1).GetComponent<InputField> ().text = postData ["reply"] ["content"].str;
        Button confirm = diaryBack.GetChild(3).GetComponent<Button>();
        confirm.onClick.RemoveAllListeners();
        confirm.onClick.AddListener(() =>
        {
            openMessagePopup(LocalizationString.MSG_DiaryEditReplyMessage, false, () =>
            {
                diaryReplyConfirmClick(postData);
                messagePopup.SetActive(false);
            });
        });
        diaryEditPopup.transform.GetChild(0).gameObject.SetActive(false);
        diaryEditPopup.transform.GetChild(1).gameObject.SetActive(true);
        diaryEditPopup.SetActive(true);
    }
    
    void replyDeleteClick(long _id){
        openMessagePopup(LocalizationString.MSG_DiaryDeleteReplyMessage, false, () =>
        {
            socketScript.deleteReply(_id);
            messagePopup.SetActive(false);
            setProgressBackActive(true);
            playSound(2);
        });
    }

    public void onAddDiary(JSONObject data)
    {
        setProgressBackActive(false);

        if(data["result"].str == "success"){
            this.data ["postDatas"].list.Insert (0, data ["postData"]);
            Transform posts = null;
            if(this.data["owner"].str == nick && this.data["isDiary"].b){
                posts = diaryPopup.transform.GetChild (0).GetChild (0);
                if(posts.parent.gameObject.activeSelf){
                    currentDiaryPage = 0;
                    addPosts ();
                    
                    diaryPopup.transform.GetChild (5).gameObject.SetActive (false);
                    if(this.data["postDatas"][2]){
                        diaryPopup.transform.GetChild (6).gameObject.SetActive (true);
                    }
                }
                
            }else if(this.data["owner"].str != nick && !this.data["isDiary"].b){
                posts = diaryPopup.transform.GetChild (1).GetChild (0).GetChild (0).GetChild (0);
                if(posts.parent.parent.parent.gameObject.activeSelf){
                    currentDiaryPage = 0;
                    getDiaryUserDatas ();
                    
                    diaryPopup.transform.GetChild (5).gameObject.SetActive (false);
                    if(this.data["postDatas"][5]){
                        diaryPopup.transform.GetChild (6).gameObject.SetActive (true);
                    }
                }
                
            }

        }else if(data["result"].str == "blocked"){
            log(LocalizationString.MSG_DiaryBlockMessage);
        }else if(data["result"].str == "not_friend"){
            log(LocalizationString.MSG_DiaryNotFriendMessage);
        }else if(data["result"].str == "fail"){

        }
    }

    public void onSetDiary(JSONObject data)
    {
        setProgressBackActive(false);

        if(data["result"].str == "success"){
            long _id = (long)data ["postData"] ["_id"].n;
            int index = findDiaryIndex(_id);
            if (index >= 0){
                this.data ["postDatas"] [index] = data ["postData"];
                Transform postTrs;
                if (this.data ["isDiary"].b) {
                    postTrs = diaryPopup.transform.GetChild (0).GetChild (0).Find (_id + "");
                    setPost (postTrs, data ["postData"]);
                } else {
                    postTrs = diaryPopup.transform.GetChild (1).GetChild (0).GetChild (0).GetChild (0).Find (_id + "");
                    setGuestPost (postTrs, data ["postData"]);
                    
                    LayoutRebuilder.ForceRebuildLayoutImmediate (postTrs.GetComponent<RectTransform>());
                }
            }
            
        }else if(data["result"].str == "blocked"){
            log (LocalizationString.MSG_DiaryBlockMessage);
        }else if(data["result"].str == "not_friend"){
            log (LocalizationString.MSG_DiaryNotFriendMessage);
        }else if(data["result"].str == "fail"){

        }else{

        }
    }

    int findDiaryIndex(long _id){
        int index;
        JSONObject postData;
        if(data["isDiary"].b){
            index = currentDiaryPage * 2;
            postData = data["postDatas"][index];
            if(postData != null && (long)postData["_id"].n != _id){
                postData = data ["postDatas"] [++index];
                if (postData != null && (long)postData ["_id"].n != _id)
                    return -1;
            }

            return index;
            
        }else{
            index = currentDiaryPage * 5;
            int maxIndex = (currentDiaryPage + 1) * 5;
            if (maxIndex > data ["postDatas"].Count)
                maxIndex = data ["postDatas"].Count;
            for (; index < maxIndex; index++){
                postData = data ["postDatas"] [index];
                if((long)postData["_id"].n == _id){
                    break;
                }
            }

            if (index < maxIndex)
                return index;
        }

        return -1;
    }
    
    void setPost(Transform post, JSONObject postData){
        post.GetChild(1).GetComponentInChildren<Text>().text = DateTime.Parse(postData["write_date"].str).ToLocalTime().ToString("yyyy.MM.dd\ntt h:mm");
        post.GetChild(2).GetComponentInChildren<Text>().text = postData["title"].str;
        post.GetChild(3).GetChild(0).GetComponentInChildren<Text>().text = postData["content"].str;

        Button edit = post.GetChild(4).GetComponent<Button>();
        edit.onClick.RemoveAllListeners();
        edit.onClick.AddListener(() =>
        {
            diaryEditClick(postData);
        });

        Canvas.ForceUpdateCanvases ();
    }
    
    void setGuestPost(Transform guestPost, JSONObject postData){
        guestPost.GetChild (3).GetChild (0).GetComponentInChildren<Text> ().text = postData ["content"].str;
        guestPost.GetChild(4).GetComponent<Text>().text = DateTime.Parse(postData["write_date"].str).ToLocalTime().ToString("yyyy.MM.dd\ntt h:mm");
        Button edit = guestPost.GetChild (5).GetComponent<Button> ();
        edit.onClick.RemoveAllListeners ();
        edit.onClick.AddListener (() => {
            diaryEditClick (postData);
        });

        Canvas.ForceUpdateCanvases ();
    }

    public void onDeleteDiary(JSONObject data)
    {
        setProgressBackActive(false);

        if (data ["result"].str == "success") {
            long _id = (long)data ["_id"].n;
            int index = findDiaryIndex (_id);
            if(index >= 0){
                this.data ["postDatas"].list.RemoveAt (index);
                Transform posts = null;
                if(this.data["isDiary"].b){
                    posts = diaryPopup.transform.GetChild (0).GetChild (0);
                    if(this.data["postDatas"][currentDiaryPage*2]){
                        addPosts ();
                    }else if(currentDiaryPage > 0){
                        currentDiaryPage -= 1;
                        addPosts ();
                        
                        if(currentDiaryPage == 0){
                            diaryPopup.transform.GetChild (5).gameObject.SetActive (false);
                        }
                    }else{
                        destroyChilds (posts);
                    }
                }else{
                    posts = diaryPopup.transform.GetChild (1).GetChild (0).GetChild (0).GetChild (0);
                    if(this.data["postDatas"][currentDiaryPage*5]){
                        getDiaryUserDatas ();
                    }else if(currentDiaryPage > 0){
                        currentDiaryPage -= 1;
                        getDiaryUserDatas ();
                        
                        if(currentDiaryPage == 0){
                            diaryPopup.transform.GetChild (5).gameObject.SetActive (false);
                        }
                    }else{
                        destroyChilds (posts);
                    }
                }
                
            }
        } else if (data ["result"].str == "fail") {

        } else {

        }
    }

    public void onSetReply(JSONObject data)
    {
        setProgressBackActive (false);

        if (data ["result"].str == "success") {
            long _id = (long)data ["_id"].n;
            int index = findDiaryIndex (_id);
            if (index >= 0) {
                this.data ["postDatas"] [index].SetField ("reply", data ["replyData"]);
                Transform reply = diaryPopup.transform.GetChild (1).GetChild (0).GetChild (0).GetChild (0).Find ("@" + _id);
                if(reply){
                    setReply (reply, this.data ["postDatas"] [index]);
                }else{
                    Transform guestPost = diaryPopup.transform.GetChild (1).GetChild (0).GetChild (0).GetChild (0).Find (_id + "");
                    guestPost.Find ("ButtonEdit").gameObject.SetActive(false);
                    reply = addReply (this.data ["postDatas"] [index]);
                    reply.SetSiblingIndex (guestPost.GetSiblingIndex () + 1);
                    
                }

                LayoutRebuilder.ForceRebuildLayoutImmediate (reply.GetComponent<RectTransform>());
                
            }
        } else if (data ["result"].str == "fail") {

        } else {

        }
    }
    
    void setReply (Transform reply, JSONObject postData)
    {
        reply.GetChild (3).GetChild (0).GetComponentInChildren<Text> ().text = postData ["reply"] ["content"].str;
        reply.GetChild (4).GetComponent<Text> ().text = DateTime.Parse (postData ["reply"] ["write_date"].str).ToLocalTime().ToString ("yyyy.MM.dd\ntt h:mm");
        Button edit = reply.GetChild (5).GetComponent<Button> ();
        edit.onClick.RemoveAllListeners ();
        edit.onClick.AddListener (() => {
            replyEditClick(postData);
        });

        Canvas.ForceUpdateCanvases ();
    }

    public void onDeleteReply(JSONObject data)
    {
        setProgressBackActive (false);

        if (data ["result"].str == "success") {
            long _id = (long)data ["_id"].n;
            int index = findDiaryIndex (_id);
            if(index >= 0){
                this.data ["postDatas"][index].SetField("reply", null);
                Transform guestPost = diaryPopup.transform.GetChild (1).GetChild (0).GetChild (0).GetChild (0).Find (_id + "");
                guestPost.Find ("ButtonEdit").gameObject.SetActive (true);
                Transform reply = diaryPopup.transform.GetChild (1).GetChild (0).GetChild (0).GetChild (0).Find ("@" + _id);
                Destroy (reply.gameObject);
            }
        } else if (data ["result"].str == "fail") {

        } else {

        }
    }


	//--------------------------------------------------------------------------//
    //adopt
    public void adoptClick(){
		adoptClick (nick);
    }
    
    void adoptClick(string nickname){
		socketScript.getAdopt (nickname);
		setProgressBackActive (true);
		playSound (0);
    }
    
    public void onAdopt(JSONObject data){
    	setProgressBackActive (false);
    	if(data["result"].str == "success"){
    		if(data["type"].str == "get"){
                foreach (JSONObject adoptRow in data["adoptData"].list)
                {
                    setAdoptSlot(adoptRow);
                }
                
                int maxSlotNum = data["adoptData"].Count;
                if (maxSlotNum < 3)
                {
                    Transform slotTrs = adoptPopup.transform.GetChild(0).Find("Slot" + maxSlotNum);
                    Button unlockButton = slotTrs.GetChild(1).GetComponent<Button>();
                    slotTrs.GetChild(0).gameObject.SetActive(false);
                    slotTrs.GetChild(1).gameObject.SetActive(true);
                    if (data["nickname"].str == nick)
                    {
                        unlockButton.interactable = true;
                        unlockButton.onClick.RemoveAllListeners();
                        unlockButton.onClick.AddListener(() =>
                        {
                            adoptSlotUnlockClick(maxSlotNum);
                        });
                    }else{
                        unlockButton.interactable = false;
                    }

                    for (int i = maxSlotNum+1; i < 3; i++)
                    {
                        slotTrs = adoptPopup.transform.GetChild(0).Find("Slot" + i);
                        slotTrs.GetChild(0).gameObject.SetActive(false);
                        slotTrs.GetChild(1).gameObject.SetActive(true);
                        unlockButton = slotTrs.GetChild(1).GetComponent<Button>();
                        unlockButton.interactable = false;
                    }
                }
				adoptPopup.transform.GetChild (0).gameObject.SetActive (true);
				adoptPopup.transform.GetChild (1).gameObject.SetActive (false);
                adoptPopup.SetActive(true);
                
    		}else if(data["type"].str == "add"){
    			int adoptNum = (int)data["adoptNum"].n;
    		
				JSONObject newAdoptData = new JSONObject ();
				newAdoptData.AddField ("nickname", nick);
				newAdoptData.AddField ("adoptNum", adoptNum);
				newAdoptData.AddField ("adoptData", JSONObject.nullJO);
				newAdoptData.AddField ("stamina", 0);
				newAdoptData.AddField ("speed", 0);
				newAdoptData.AddField ("win_count", 0);
				newAdoptData.AddField ("game_count", 0);
				chData ["adoptData"].Add (newAdoptData);
    			
    			chData["userData"]["cash"].str = data["cash"].str;
	            cash.transform.GetComponentInChildren<Text>().text = data["cash"].str;
	
	            if (shopPopup.activeSelf)
	            {
	                setShopAdoptButton(adoptNum + 1);
	            }
	            if (adoptPopup.activeSelf)
	            {
	                setAdoptSlot(data);
	
	                if (adoptNum + 1 < 3)
	                {
	                    Transform slotTrs = adoptPopup.transform.GetChild(0).Find("Slot" + (adoptNum + 1));
	                    Button unlockButton = slotTrs.GetChild(1).GetComponent<Button>();
	                    unlockButton.interactable = true;
	                    unlockButton.onClick.RemoveAllListeners();
	                    unlockButton.onClick.AddListener(() =>
	                    {
	                        adoptSlotUnlockClick(adoptNum + 1);
	                    });
	                }
	            }
    		}else if(data["type"].str == "adopt"){
				int adoptNum = (int)data ["adoptNum"].n;
				JSONObject adoptMember = null;
    			foreach(JSONObject adoptRow in chData["adoptData"].list){
    				if((int)adoptRow["adoptNum"].n == adoptNum){
						adoptMember = adoptRow;
						adoptMember.SetField ("adoptData", data ["adoptData"]);
						break;
    				}
    			}
    			
    			if (adoptPopup.activeSelf)
		        {
		            setAdoptSlot(adoptMember);
		        }
	            if (socketScript.mainScript && (room == null || room == nick))
	            {
	                createDoll(data["adoptData"], movable).setOnClickAction(() => {
	                    adoptSlotClick(adoptMember);
	                });
	            }
	            
    		}else if(data["type"].str == "delete"){
    			foreach(JSONObject adoptRow in chData["adoptData"].list){
    				if((int)adoptRow["adoptNum"].n == (int)data["adoptNum"].n){
						adoptRow.RemoveField("adoptData");
						break;
    				}
    			}
    			
    			if (adoptPopup.activeSelf)
		        {
		            setAdoptSlot(data);
		        }
		        if (socketScript.mainScript && (room == null || room == nick))
		        {
		            int adoptNum = (int)data["adoptNum"].n;
					Destroy(movable.Find ("@" + data ["nickname"].str).gameObject);
		        }

				adoptCharacterPopup.SetActive (false);
    		}else if(data["type"].str == "raise"){
				int adoptNum = (int)data ["adoptNum"].n;
				int level = (int)data ["level"].n;
				JSONObject adoptMember = null;
    			foreach(JSONObject adoptRow in chData["adoptData"].list){
    				if((int)adoptRow["adoptNum"].n == adoptNum){
						adoptMember = adoptRow;
						adoptMember.SetField (data["status"].str, level);
						break;
    				}
    			}
    			
    			chData["userData"]["cash"].str = data["cash"].str;
	            cash.transform.GetComponentInChildren<Text>().text = data["cash"].str;
    			
    			if(adoptPopup.activeSelf){
					setAdoptSlot (adoptMember);
    			}
    			if(adoptCharacterPopup.activeSelf){
					Transform status = adoptCharacterPopup.transform.GetChild (0).GetChild (3).Find(data ["status"].str);
					status.GetChild (1).GetComponent<Text> ().text = level + "";
					Button statusButton = status.GetChild (2).GetComponent<Button> ();
					int max_level = data ["status"].str == "stamina" ? 10000 : 1000;
					if(level < max_level){
						statusButton.onClick.RemoveAllListeners ();
						statusButton.onClick.AddListener (() => {
							openMessagePopup (string.Format (LocalizationString.MSG_AdoptRaiseMessage, level + 1), false, () => {
								socketScript.raiseAdopt (adoptNum, data ["status"].str);
								setProgressBackActive (true);
								playSound (0);
								messagePopup.SetActive (false);
							});
							playSound (1);
						});
						statusButton.gameObject.SetActive (true);
					}else{
						statusButton.gameObject.SetActive (false);
					}
    			}
    			if(socketScript.mainScript && (room == null || room == nick)){
					movable.Find ("@" + adoptMember["adoptData"]["nickname"].str).GetComponent<DollScript> ().setOnClickAction (() => {
						adoptSlotClick (adoptMember);
					});
    			}
    		}
    	}else if(data["result"].str == "not_enough_cash"){
			log (LocalizationString.MAINGAME_NotEnoughGem);
    	}else if(data["result"].str == "fail"){
    		
    	}
    }
    
    void setAdoptSlot(JSONObject data){
    	int adoptNum = (int)data["adoptNum"].n;
        Transform slotTrs = adoptPopup.transform.GetChild(0).Find("Slot" + adoptNum);
        slotTrs.GetChild(1).gameObject.SetActive(false);

		if(!data.HasField("adoptData") || data["adoptData"].IsNull){
			slotTrs.GetChild(0).gameObject.SetActive(false);
		}else{
			slotTrs.GetChild(0).gameObject.SetActive(true);
			CharacterScript character = slotTrs.GetChild(0).GetChild(0).GetComponent<CharacterScript>();
        	setCharacter(data["adoptData"], character);
			character.setNickname (data ["adoptData"] ["nickname"].str);
		}

        Button slotButton = slotTrs.GetComponent<Button>();
        slotButton.onClick.RemoveAllListeners();
        slotButton.onClick.AddListener(() => {
            adoptSlotClick(data);
        });
    }
    
    public void adoptSlotClick(JSONObject data){
    	int adoptNum = (int)data ["adoptNum"].n;

		if (!data.HasField ("adoptData") || data ["adoptData"].IsNull) {
			//adopt
			Transform adoptContent = adoptPopup.transform.GetChild (1);
			InputField nickname = adoptContent.GetChild (0).GetComponent<InputField> ();
			nickname.text = "";
			setCharacter (chData ["userData"], adoptContent.GetChild (2).GetChild (0).GetComponent<CharacterScript> ());

			Button yes = adoptContent.GetChild (3).GetComponent<Button> ();
			yes.onClick.RemoveAllListeners ();
			yes.onClick.AddListener (() => {
				if (nickname.text.Trim () == "") {
					log (LocalizationString.LOGIN_NicknameEmpty);
				} else if (nickname.text.Contains ("@") || nickname.text.Contains (" ") || nickname.text.Contains ("/")
					|| nickname.text.Contains ("\\") || nickname.text.Contains ("\"")) {
					log (LocalizationString.LOGIN_InvalidNickname);
				} else {
					socketScript.adopt (adoptNum, nickname.text);
					setProgressBackActive (true);
					adoptContent.gameObject.SetActive (false);
				}
				playSound (0);

			});
			adoptContent.gameObject.SetActive (true);
		} else {
			//info
			Transform slot = adoptCharacterPopup.transform.GetChild (0);
			slot.GetChild (0).GetComponent<Text> ().text = data ["adoptData"] ["nickname"].str;
			setCharacter (data ["adoptData"], slot.GetChild (2).GetChild (0).GetComponent<CharacterScript> ());

			int stamina = (int)data ["stamina"].n;
			int speed = (int)data ["speed"].n;
			Transform status = slot.GetChild (3);
			status.GetChild (0).GetChild (1).GetComponent<Text> ().text = stamina + "";
			status.GetChild (1).GetChild (1).GetComponent<Text> ().text = speed + "";
			if (data.HasField ("win_count") && data.HasField ("game_count")){
				status.GetChild (2).GetChild (1).GetComponent<Text> ().text = (long)data ["win_count"].n + "";
				status.GetChild (2).GetChild (3).GetComponent<Text> ().text = (long)data ["game_count"].n + "";
				status.GetChild (2).gameObject.SetActive (true);
			}else{
				status.GetChild (2).gameObject.SetActive (false);
			}
			if(data["adoptData"].HasField("adopt_date")){
				status.GetChild (3).GetComponent<Text> ().text = DateTime.Parse(data["adoptData"]["adopt_date"].str).ToLocalTime().ToShortDateString();
				status.GetChild (3).gameObject.SetActive (true);
			}else{
				status.GetChild (3).gameObject.SetActive (false);
			}
			
			if(nick == data ["nickname"].str){
				//parent
				Button statusButton = status.GetChild (0).GetChild (2).GetComponent<Button> ();
				if(stamina < 10000){
					statusButton.onClick.RemoveAllListeners ();
					statusButton.onClick.AddListener (() => {
						openMessagePopup (string.Format(LocalizationString.MSG_AdoptRaiseMessage, stamina+1), false, () => {
							socketScript.raiseAdopt (adoptNum, "stamina");
							setProgressBackActive (true);
							playSound (0);
							messagePopup.SetActive (false);
						});
						playSound (1);
					});
					statusButton.gameObject.SetActive (true);
				}else{
					statusButton.gameObject.SetActive (false);
				}
				
				statusButton = status.GetChild (1).GetChild (2).GetComponent<Button> ();
				
				if(speed < 1000){
					statusButton.onClick.RemoveAllListeners ();
					statusButton.onClick.AddListener (() => {
						openMessagePopup (string.Format(LocalizationString.MSG_AdoptRaiseMessage, speed+1), false, () => {
							socketScript.raiseAdopt (adoptNum, "speed");
							setProgressBackActive (true);
							playSound (0);
							messagePopup.SetActive (false);
						});
						playSound (1);
					});
					statusButton.gameObject.SetActive (true);
				}else{
					statusButton.gameObject.SetActive (false);
				}

				Button adoptX = slot.GetChild (4).GetComponent<Button> ();
				adoptX.onClick.RemoveAllListeners ();
				adoptX.onClick.AddListener (() => {
					openMessagePopup (LocalizationString.MSG_AdoptDeleteMessage, false, () => {
						socketScript.deleteAdopt (adoptNum);
						setProgressBackActive (true);
						playSound (0);
						messagePopup.SetActive (false);
					});
					playSound (1);
				});
				adoptX.gameObject.SetActive (true);
			}else{
				//not parent
				status.GetChild (0).GetChild (2).gameObject.SetActive (false);
				status.GetChild (1).GetChild (2).gameObject.SetActive (false);
				slot.GetChild (4).gameObject.SetActive (false);
			}

			adoptCharacterPopup.SetActive (true);
    	}
    	playSound (1);
    }
    
    void adoptSlotUnlockClick(int slotNum)
    {
        openMessagePopup(string.Format(LocalizationString.MSG_UnlockSlotMessage, slotNum+1, slot_value[slotNum]), false, () => {
            socketScript.addAdopt();
            setProgressBackActive(true);
            messagePopup.SetActive(false);
            playSound(0);
        });
        playSound(1);
    }
    
	//	public float GetKeyboardSize(){
	//		using (AndroidJavaClass UnityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
	//		{
	//			AndroidJavaObject View = UnityClass.GetStatic<AndroidJavaObject>("currentActivity").Get<AndroidJavaObject>("mUnityPlayer").Call<AndroidJavaObject>("getView");
	//			AndroidJavaObject matrix = UnityClass.GetStatic<AndroidJavaObject> ("currentActivity").Call<AndroidJavaObject> ("getResources").Call<AndroidJavaObject> ("getDisplayMetrics");
	//			float totalHeight = (float)matrix.Get<int> ("heightPixels");
	//
	//			using (AndroidJavaObject Rct = new AndroidJavaObject("android.graphics.Rect"))
	//			{
	//				View.Call("getWindowVisibleDisplayFrame", Rct);
	//
	//				float height = (float)Rct.Call<int>("height");
	//				return (float)Screen.height - (height/totalHeight);
	//			}
	//		}
	//	}
//	public void InitializePurchasing() 
//	{
//		// If we have already connected to Purchasing ...
//		if (IsInitialized())
//		{
//			// ... we are done here.
//			return;
//		}

//		// Create a builder, first passing in a suite of Unity provided stores.
//		var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

//		// Add a product to sell / restore by way of its identifier, associating the general identifier with its store-specific identifiers.
//		foreach (string name in System.Enum.GetNames(typeof(cashamount))) {
//			builder.AddProduct("fortunecloset."+name,ProductType.Consumable);
//		}


//		UnityPurchasing.Initialize(this, builder);
//	}


//	private bool IsInitialized()
//	{
//		// Only say we are initialized if both the Purchasing references are set.
//		return m_StoreController != null && m_StoreExtensionProvider != null;
//	}

//	// 실제 구매가 실행되는 함수. 매개변수로 상품의 프로젝트ID 를 받는다.
//	public void BuyProductID(string productId)
//	{
//		if (IsInitialized())
//		{   
//			Product product = m_StoreController.products.WithID(productId);
//			if (product != null && product.availableToPurchase)
//			{
//				//Debug.Log("Purchasing product asychronously: "+ product.definition.id);
//				m_StoreController.InitiatePurchase(product);
//			}
//			else
//			{
//				Debug.Log("BuyProductID: FAIL. Not purchasing product, either is not found or is not available for purchase");
//			}
//		}
//		else
//		{
//			Debug.Log("BuyProductID FAIL. Not initialized.");
//		}
//	}


//	// 애플로 출시할때는 이 코드를 추가해야하나봄???
//	// Restore purchases previously made by this customer. Some platforms automatically restore purchases. Apple currently requires explicit purchase restoration for IAP.
//	public void RestorePurchases()
//	{
//		// If Purchasing has not yet been set up ...
//		if (!IsInitialized())
//		{
//			// ... report the situation and stop restoring. Consider either waiting longer, or retrying initialization.
//			Debug.Log("RestorePurchases FAIL. Not initialized.");
//			return;
//		}

//		// If we are running on an Apple device ... 
//		if (Application.platform == RuntimePlatform.IPhonePlayer || 
//			Application.platform == RuntimePlatform.OSXPlayer)
//		{
//			// ... begin restoring purchases
//			Debug.Log("RestorePurchases started ...");

//			// Fetch the Apple store-specific subsystem.
//			var apple = m_StoreExtensionProvider.GetExtension<IAppleExtensions>();
//			// Begin the asynchronous process of restoring purchases. Expect a confirmation response in the Action<bool> below, and ProcessPurchase if there are previously purchased products to restore.
//			apple.RestoreTransactions((result) => {
//				// The first phase of restoration. If no more responses are received on ProcessPurchase then no purchases are available to be restored.
//				Debug.Log("RestorePurchases continuing: " + result + ". If no further messages, no purchases available to restore.");
//			});
//		}
//		// Otherwise ...
//		else
//		{
//			// We are not running on an Apple device. No work is necessary to restore purchases.
//			Debug.Log("RestorePurchases FAIL. Not supported on this platform. Current = " + Application.platform);
//		}
//	}


//	//  
//	// --- IStoreListener
//	//

//	public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
//	{
//		// Purchasing has succeeded initializing. Collect our Purchasing references.
//		Debug.Log("OnInitialized: PASS");

//		// Overall Purchasing system, configured with products for this application.
//		m_StoreController = controller;
//		// Store specific subsystem, for accessing device-specific store features.
//		m_StoreExtensionProvider = extensions;

//	}


//	public void OnInitializeFailed(InitializationFailureReason error)
//	{
//		// Purchasing set-up has not succeeded. Check error for reason. Consider sharing this reason with the user.
//		Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
//	}


//	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args) 
//	{
//		//Debug.Log (args.purchasedProduct.receipt);
//		JSONObject receipt = new JSONObject (args.purchasedProduct.receipt);
//		//Debug.Log ("< receipt >\n"+receipt.ToString());

////		sqliteScript.addReceipt (args.purchasedProduct.receipt);

	//	#if UNITY_ANDROID
	//	socketScript.androidInapp(args.purchasedProduct.receipt);
	//	#elif UNITY_IOS
	//	socketScript.iosInapp (args.purchasedProduct.receipt);
	//	#endif
	//	setProgressBackActive (true);

	//	return PurchaseProcessingResult.Pending; // 서버로 보낼 경우는 Pending, 클라이언트에서만 일경우는 Complete
	//}

	//public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
	//{
	//	//Debug.Log("OnPurchaseFailed: FAIL. Product: "+product.definition.storeSpecificId+", PurchaseFailureReason: {1}"+failureReason);

	//	if (failureReason == PurchaseFailureReason.DuplicateTransaction) {
	//		//Debug.Log ("receipt: "+product.receipt);
	//		if (product.receipt != null) {
	//			#if UNITY_ANDROID
	//			socketScript.androidInapp (product.receipt);
	//			#elif UNITY_IOS
	//			socketScript.iosInapp(product.receipt);
	//			#endif
	//		}
	//		m_StoreController.ConfirmPendingPurchase(product);


	//	}


	//}
}
