using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class FortuneScript : MonoBehaviour {
	public GameObject fortuneCookiePopup;
	public Sprite pop;
	public Sprite result;

	Image fortune_back;
	Text fortune_msg;
	GameObject fortune_cookie;
    static List<string> quotes = null;

    private void Awake()
    {
        if (quotes == null)
        {
            quotes = new List<string>();
			TextAsset textAsset = Resources.Load<TextAsset> ("FortuneQuotes");
			string line = null;
			StringReader reader = new StringReader(textAsset.text);

			line = reader.ReadLine();
			while(line != null)
            {
                if (line.Substring(0, 2) != "//")
					quotes.Add(line);
				line = reader.ReadLine();
            }
        }
		fortune_back = fortuneCookiePopup.transform.GetChild (0).GetComponent<Image>();
		fortune_msg = fortune_back.transform.GetChild (1).GetComponent<Text> ();
		fortune_cookie = fortune_back.transform.GetChild (2).gameObject;
    }

	public void cookieClick(){
		string today = System.DateTime.Now.ToString ("yyyyMMdd");
		string saved_day = PlayerPrefs.GetString ("cookie_today", "");
		if (saved_day != today) {
			PlayerPrefs.DeleteKey ("cookie_today_quote");
			fortune_back.sprite = pop;
			fortune_msg.gameObject.SetActive (false);
			fortune_cookie.SetActive (true);
			fortune_cookie.GetComponent<Button> ().onClick.RemoveAllListeners ();
			fortune_cookie.GetComponent<Button>().onClick.AddListener(() => {
				openClick(today);
			});
			fortuneCookiePopup.SetActive (true);
		} else {
			openClick (today);
		}
	}
	public void openClick(string today){
		fortune_back.sprite = result;
		fortune_cookie.SetActive (false);
		string today_quote = PlayerPrefs.GetString ("cookie_today_quote", "");
		if (today_quote == "") {
			today_quote = quotes [Random.Range (0, quotes.Count)];
			PlayerPrefs.SetString ("cookie_today", today);
			PlayerPrefs.SetString ("cookie_today_quote", today_quote);
		}
		fortune_msg.text = today_quote;
		fortune_msg.gameObject.SetActive (true);
		fortuneCookiePopup.SetActive (true);
	}
}
