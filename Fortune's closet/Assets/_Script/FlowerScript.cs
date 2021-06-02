using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class FlowerScript : MonoBehaviour {
	public int value;
	bool isWaiting;
	public DateTime waitingTime;
	Text remainTime;
	public int flowerNum;
	void OnTriggerEnter2D(Collider2D c){
		if (!isWaiting && c.gameObject.name == SettingScript.nick) {
			//서버 소켓으로 이벤트 보내기
			SettingScript.socketScript.flower(flowerNum);
		}
	}

	public void success(){
		//서버 소켓에서 맞다고 답이온다면
		GetComponent<Animator>().Play("GemUp");
		waitingTime = DateTime.UtcNow + new TimeSpan (0,value,1);

		//			waitingTime = new DateTime(1970, 1, 1).AddMilliseconds((DateTime.UtcNow + new TimeSpan (0,value,0)).ToUniversalTime ().Subtract (
		//				new DateTime (1970, 1, 1, 0, 0, 0, DateTimeKind.Utc)
		//			).TotalMilliseconds);
		//Debug.Log (waitingTime.ToString());

		PlayerPrefs.SetString ("flower" + flowerNum, waitingTime.ToUniversalTime ().Subtract (
			new DateTime (1970, 1, 1, 0, 0, 0, DateTimeKind.Utc)
		).TotalMilliseconds.ToString()); //로그인 할때마다 서버에서 가져올지 클라이언트에 저장해놓고 자체적으로 가져올지
		//(클라이언트 데이터지우는 경우가 그렇게 많지 않으니 서버에 부담주지말고 클라이언트에 저장
		setRemainTime (true);
	}
	public void notyet(string respawn_time){
		//서버 소켓에서 틀리다고 답이온다면
		waitingTime = DateTime.Parse(respawn_time);
		PlayerPrefs.SetString ("flower" + flowerNum, waitingTime.ToUniversalTime ().Subtract (
			new DateTime (1970, 1, 1, 0, 0, 0, DateTimeKind.Utc)
		).TotalMilliseconds.ToString());
		setRemainTime(true);
	}
	public void setRemainTime(bool isTrue){
		isWaiting = isTrue;
		remainTime.gameObject.SetActive (isTrue);
	}
	void Awake(){
		//Debug.Log ("test"+flowerNum);
		remainTime = transform.GetChild (1).GetComponent<Text>();
	}
	void Update(){
		if (isWaiting) {
			TimeSpan diff = waitingTime - DateTime.UtcNow;
			if (diff.Milliseconds < 0) {
				PlayerPrefs.DeleteKey("flower" + flowerNum);
				setRemainTime (false);
			} else {
				remainTime.text = diff.Minutes.ToString("D2") + ":" + diff.Seconds.ToString("D2");
			}
		}
	}
}
