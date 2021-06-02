using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FixedScreen : MonoBehaviour {
	void Awake () {
		Screen.SetResolution (700, 1200, true);
		Application.targetFrameRate = 60;
		Input.multiTouchEnabled = false;
	}
}
