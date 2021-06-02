using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MiddleScript : MonoBehaviour {
	public GameObject LoadImage;

	PlayInfo playinfo;

	// Use this for initialization
	void Start () {
		playinfo = PlayInfo.instance;
		if (playinfo.loadScene.Equals (Constant.GameScene)) {
			LoadImage.SetActive (true);
		}
		SceneManager.LoadScene (PlayInfo.instance.loadScene);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
