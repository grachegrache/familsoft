using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayInfo : MonoBehaviour {
	public static PlayInfo instance;
	public List<int> PackageLimit;
	public int[] StageLimit;
	public int[] PlayerItem;
	public int PlayerLevel;
	public int PlayerExp;
	public int PlayerKey;

	public int UseSpeak;
	public string LastPackage;
	public int LastStage;
	public int LastStageIndex;
	public string LastKeyTime;
	public bool isKeyUsed;

	public float BGM;
	public float SE;
	public bool RemoveAd;
	public bool CanRemoveAd;
	public bool SavingMode;

	public GameScript.GamePattern pattern;
	public GameScript.GameLevel wordLevel;
	public bool isFirst;
	public bool isPaused;
	public int maxTime;

	public AudioSource audio;
	public Text CurrentTextKey;
	public Text CurrentTextRemainTime;
	public Font[] font;
	public AudioClip[] audioClip;

	public Package pack;
	public float speed;
	public float deltaSpeed;
	public float minRespawn;
	public float maxLifegage;
	public string prevShop;
	public string loadScene;
	public HelpScript.HelpMode helpMode;
	public bool isBackHelp;

	void Awake(){
		//initialize
		PlayerItem = new int[5];
		PackageLimit = new List<int> ();
		DontDestroyOnLoad (this);

		// setting player infos
		if (PlayerPrefs.HasKey (Constant.isFirst) == false) {
			PlayerPrefs.SetInt (Constant.playerLevel, 1);
			PlayerPrefs.SetInt (Constant.playerExp, 0);
			PlayerPrefs.SetInt (Constant.playerKey, 10);
			for (int i = 0; i < 5; i++)
				PlayerPrefs.SetInt (Constant.playerItem [i], 0);
			PlayerPrefs.SetString (Constant.LastPackage, Constant.Package + "0");
			//			PlayerPrefs.SetInt (Constant.Package + "0" + Constant.LastStage, 0);
			//			PlayerPrefs.SetInt (Constant.Package + "0" + Constant.LastStageIndex, 0);
			PlayerPrefs.SetInt (Constant.isKeyUsed, 0);
			PlayerPrefs.SetString (Constant.PackageLimit, "0");
			PlayerPrefs.SetFloat (Constant.BGM, 1f);
			PlayerPrefs.SetFloat (Constant.SE, 1f);
			PlayerPrefs.SetInt (Constant.RemoveAd, 0);
			PlayerPrefs.SetInt (Constant.CanRemoveAd, 0);
			PlayerPrefs.SetInt (Constant.SavingMode, 0);
			LastKeyTime = null;
			isKeyUsed = false;

		} else {
			UseSpeak = PlayerPrefs.GetInt (Constant.UseSpeak);
		}

		PlayerLevel = PlayerPrefs.GetInt(Constant.playerLevel);
		PlayerExp = PlayerPrefs.GetInt (Constant.playerExp);
		PlayerKey = PlayerPrefs.GetInt (Constant.playerKey);
		for(int i=0; i<5; i++)
			PlayerItem[i] = PlayerPrefs.GetInt (Constant.playerItem[i]);
		GetPackageLimit ();
		LastPackage = PlayerPrefs.GetString (Constant.LastPackage);
//		LastStage = PlayerPrefs.GetInt (LastPackage + Constant.LastStage);
//		LastStageIndex = PlayerPrefs.GetInt (LastPackage + Constant.LastStageIndex);
		LastKeyTime = PlayerPrefs.GetString (Constant.LastKeyTime);
		isKeyUsed = PlayerPrefs.GetInt (Constant.isKeyUsed) == 1 ? true : false;
		BGM = PlayerPrefs.GetFloat (Constant.BGM);
		SE = PlayerPrefs.GetFloat (Constant.SE);
		RemoveAd = PlayerPrefs.GetInt (Constant.RemoveAd) == 1 ? true : false;
		CanRemoveAd = PlayerPrefs.GetInt (Constant.CanRemoveAd) == 1 ? true : false;
		SavingMode = PlayerPrefs.GetInt (Constant.SavingMode) == 1 ? true : false;

		StageLimit = new int[2];
		CurrentTextKey = null;
		CurrentTextRemainTime = null;
		isFirst = true;
		isPaused = false;
		isBackHelp = false;

		audio = GetComponent<AudioSource> ();
		audio.volume = BGM;
		instance = this;
	}

	void Update(){
		updateKey ();
	}

	void OnApplicationPause(bool pauseStatus)
	{
		if (pauseStatus) {
			isPaused = true;
			CurrentTextKey = null;
			CurrentTextRemainTime = null;
			PlayerPrefs.Save ();

		} else if(isKeyUsed){
			// compare times and update the key
			updateKey ();
		}
	}

	void OnDestroy(){
		PlayerPrefs.Save ();
	}

	// call at the key's used
	public void saveKeyTime(){
		isKeyUsed = true;
		LastKeyTime = DateTime.Now.ToString ();
		PlayerPrefs.SetInt (Constant.isKeyUsed, 1);
		PlayerPrefs.SetString (Constant.LastKeyTime, LastKeyTime);
	}

	public int updateKey(){
		DateTime lastKeyTime = DateTime.Now;
		TimeSpan deltaTime = TimeSpan.Zero;
		if (isKeyUsed) {
			lastKeyTime = DateTime.Parse (LastKeyTime);
			deltaTime = DateTime.Now.Subtract (lastKeyTime);
			int addKey = deltaTime.Minutes / 10;
			if (addKey > 0) {
				PlayerKey += addKey;
				if (PlayerKey >= 10) {
					PlayerKey = 10;
					isKeyUsed = false;
					PlayerPrefs.SetInt (Constant.playerKey, PlayerKey);
					PlayerPrefs.SetInt (Constant.isKeyUsed, 0);

				} else if (PlayerKey < 10) {
					LastKeyTime = lastKeyTime.Add (new TimeSpan (0, addKey * 10, 0)).ToString ();
					PlayerPrefs.SetString (Constant.LastKeyTime, LastKeyTime);
					PlayerPrefs.SetInt (Constant.playerKey, PlayerKey);
				}
			}
		}

		// set texts
		if (CurrentTextKey != null && CurrentTextRemainTime != null) {
			if (isKeyUsed) {
				CurrentTextKey.text = PlayerKey.ToString ();
				deltaTime = DateTime.Now.Subtract (lastKeyTime);
				TimeSpan remainTime = new TimeSpan (0, 10, 0).Subtract (deltaTime);
				CurrentTextRemainTime.text = string.Format ("{0:00}:{1:00}", remainTime.Minutes, remainTime.Seconds);
			} else if (CurrentTextRemainTime.gameObject.activeSelf) {
				CurrentTextRemainTime.gameObject.SetActive (false);
			}
		}

		return PlayerKey;
	}

	public void setFonts(FontIndex f){
		int index = (int)f;
		foreach (Text txt in Resources.FindObjectsOfTypeAll<Text>()) {
			txt.font = font [index];
		}
	}

	public void playClip(AudioIndex a){
		audio.PlayOneShot (audioClip [(int)a], SE);
	}

	public void GetPackageLimit(){
		if(PackageLimit.Count > 0)
			PackageLimit.Clear();

		string packageLimit = PlayerPrefs.GetString (Constant.PackageLimit);
		string[] s = packageLimit.Split (' ');
		for (int i = 0; i < s.Length; i++) {
			PackageLimit.Add (int.Parse (s [i]));
		}
	}

	public void SetPackageLimit(){
		string packageLimit = PackageLimit [0].ToString ();
		for (int i = 1; i < PackageLimit.Count; i++) {
			packageLimit += " " + PackageLimit [i].ToString ();
		}

		PlayerPrefs.SetString (Constant.PackageLimit, packageLimit);
	}

	public enum FontIndex{
		BMJUA_ttf = 0,
		kachannomemo_1,
		NotoSans_Bold,
		NotoSansCJKkr_Bold,
		NotoSansCJKjp_Bold
	}
	public enum AudioIndex{
		SFX_check = 0,
		SFX_Switch,
		Kitten_Meow,
		Rain_Ending,
		sandfall4,
		magic_sound_1,
		water_click,
		ping,
		SFX_Ready,
		SFX_Success_02,
		jazzy_chords
	}
}
