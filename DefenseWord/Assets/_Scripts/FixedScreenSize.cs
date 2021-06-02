using UnityEngine;
using System.Collections;

public class FixedScreenSize : MonoBehaviour {
	void Awake () {
		Screen.SetResolution (700, 1200, true);
		Application.targetFrameRate = 60;
		Input.multiTouchEnabled = true;

	}
}
