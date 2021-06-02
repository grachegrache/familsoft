using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopScript : MonoBehaviour {
	public RectTransform FadeImage;
	public GameObject PanelItem;
	public GameObject PanelPackage;
	public Text TextKey;
	public Text TextRemainTime;
	public Text TextCatMessage;

	PlayInfo playinfo;
	List<Text> ListItemTextMoney;
	List<Text> ListPackageTextMoney;

	void Start () {
		//initialize
		playinfo = PlayInfo.instance;
		ListItemTextMoney = new List<Text> ();
		ListPackageTextMoney = new List<Text> ();

		LeanTween.alpha (FadeImage, 0f, 0.7f);

		playinfo.CurrentTextKey = TextKey;
		playinfo.CurrentTextRemainTime = TextRemainTime;
		playinfo.CurrentTextKey.text = playinfo.PlayerKey.ToString ();

		foreach (Transform child in PanelItem.transform.GetChild(0).GetChild(0)) {
			int index = int.Parse (child.name.Substring (6));

			child.GetComponent<Button> ().onClick.AddListener (
				delegate {
					Item(index);
				}
			);
			foreach (Transform text in child) {
				if (text.name.Equals ("TextTitle")) {
					text.GetComponent<Text> ().text = Constant.StringShopItemButtonTitle [index];

				} else if (text.name.Equals ("TextMoney")) {
					Text money = text.GetComponent<Text> ();
					ListItemTextMoney.Add (money);

					if (index == 1) {
						money.text = Constant.StringShopItemButton1Money;

					} else if (index == 8) {
						if (playinfo.CanRemoveAd) {
							money.text = Constant.StringShopButtonPurchased;
							money.transform.GetChild (0).gameObject.SetActive (false);
						}
					}
				} else if (text.name.Equals ("TextExplain")) {
					if (index == 8) {
						text.GetComponent<Text> ().text = Constant.StringShopItemButton8Explain;
					}
				}
			}
		}

		foreach (Transform child in PanelPackage.transform.GetChild(0).GetChild(0)) {
			int index = int.Parse (child.name.Substring (6));

			child.GetComponent<Button> ().onClick.AddListener (
				delegate {
					Package(index);
				}
			);
			foreach (Transform text in child) {
				if (text.name.Equals ("TextTitle")) {
					text.GetComponent<Text> ().text = Constant.StringShopPackageButtonTitle [index];

				} else if (text.name.Equals("TextMoney")){
					Text money = text.GetComponent<Text> ();
					ListPackageTextMoney.Add(money);

					if (playinfo.PackageLimit.Contains (index + 1)) {
						money.text = Constant.StringShopButtonPurchased;
						money.transform.GetChild (0).gameObject.SetActive (false);
					}
				}
			}
		}

		TextCatMessage.text = Constant.StringShopCatMessage;

		// set fonts
		PlayInfo.FontIndex font;
		if (Application.systemLanguage.Equals (SystemLanguage.Japanese)) {
			font = PlayInfo.FontIndex.kachannomemo_1;
		} else {
			font = PlayInfo.FontIndex.BMJUA_ttf;
		}
		playinfo.setFonts(font);

	}
	
	// Update is called once per frame
	void Update () {
		// get cancel key
		#if UNITY_ANDROID
		if(Input.GetKeyUp(KeyCode.Escape))
		{
			goBack ();
		}
		#endif
	}

	void OnApplicationPause(bool pauseStatus)
	{
		if (!pauseStatus && PlayInfo.instance.isPaused) {
			// set the key
			playinfo.CurrentTextKey = TextKey;
			playinfo.CurrentTextRemainTime = TextRemainTime;
			playinfo.CurrentTextKey.text = playinfo.PlayerKey.ToString ();
			PlayInfo.instance.isPaused = false;
		}
	}

	public void tapItem(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		if (!PanelItem.activeSelf) {
			PanelItem.SetActive (true);
			PanelPackage.SetActive (false);
		}
	}

	public void tapPackage(){
		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		if (!PanelPackage.activeSelf) {
			PanelItem.SetActive (false);
			PanelPackage.SetActive (true);
		}
	}

	public void goBack(){
		//set values
		playinfo.CurrentTextKey = null;
		playinfo.CurrentTextRemainTime = null;

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		//white fade
		LeanTween.alpha (FadeImage, 1f, 0.4f).setOnComplete (() => {
			UnityEngine.SceneManagement.SceneManager.LoadSceneAsync (playinfo.prevShop);
		});
	}

	public void Item(int index){
		bool isAd = false;
		bool isRemoveAd = false;
		bool isSuccess = false;
		float cash = 0;
		int[] item = {0,0,0,0,0,0};

		switch (index) {
		case 0:
			cash = 1f;
			item[0] = 10;
			break;
		case 1:
			isAd = true;
			item[0] = 1;
			break;
		case 2:
			cash = 1f;
			item[1] = 10;
			break;
		case 3:
			cash = 1f;
			item[2] = 10;
			break;
		case 4:
			cash = 1f;
			item[3] = 10;
			break;
		case 5:
			cash = 1f;
			item[4] = 10;
			break;
		case 6:
			cash = 1.5f;
			item[5] = 10;
			break;
		case 7:
			cash = 1.7f;
			item [1] = 10;
			item [2] = 10;
			break;
		case 8:
			if (playinfo.CanRemoveAd)
				return;
			cash = 8.9f;
			isRemoveAd = true;
			break;
		default:
			return;
		}

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		if (isAd) {
			// ad
			isSuccess = Ad();
		} else {
			// purchase cash
			isSuccess = Purchase(cash);
		}

		if (isSuccess) {
			if (isRemoveAd) {
				playinfo.CanRemoveAd = true;
				playinfo.RemoveAd = true;
				PlayerPrefs.SetInt (Constant.CanRemoveAd, 1);
				PlayerPrefs.SetInt (Constant.RemoveAd, 1);

				ListItemTextMoney [index].text = Constant.StringShopButtonPurchased;
				ListItemTextMoney [index].transform.GetChild (0).gameObject.SetActive (false);

			} else {
				playinfo.PlayerKey += item [0];
				PlayerPrefs.SetInt (Constant.playerKey, playinfo.PlayerKey);
				for (int i = 1; i < 6; i++) {
					playinfo.PlayerItem [i - 1] += item [i];
					PlayerPrefs.SetInt (Constant.playerItem [i - 1], playinfo.PlayerItem [i - 1]);
				}

				if (playinfo.PlayerKey >= 10) {
					playinfo.isKeyUsed = false;
					PlayerPrefs.SetInt (Constant.isKeyUsed, 0);
//					playinfo.isNoLimitKey = true;
				}
				playinfo.CurrentTextKey.text = playinfo.PlayerKey.ToString ();
			}
		}
	}

	public void Package(int index){
		bool isSuccess = false;
		float cash = 0;

		if (playinfo.PackageLimit.Contains (index + 1))
			return;
		switch (index) {
		case 0:
			cash = 1.1f;
			break;
		case 1:
			cash = 1.1f;
			break;
		default:
			return;
		}

		playinfo.playClip (PlayInfo.AudioIndex.SFX_check);

		// purchase cash
		isSuccess = Purchase(cash);

		if (isSuccess) {
			playinfo.PackageLimit.Add (index + 1);
			playinfo.SetPackageLimit ();

			ListPackageTextMoney [index].text = Constant.StringShopButtonPurchased;
			ListPackageTextMoney [index].transform.GetChild (0).gameObject.SetActive (false);
		}
	}

	public static bool Purchase(float cash){

		return true;
	}

	public static bool Ad(){

		return true;
	}
}
