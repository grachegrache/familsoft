using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class WordScript{
	public Text text;
	public Text textExp;
	public RectTransform rect;
	public Image image;

	public ItemScript item;
	public bool isActive;
	public int exp;
	public float speed;
	public float damage;

	public WordScript(RectTransform rect, Text text){
		this.rect = rect;
		this.text = text;
	}

	public WordScript(RectTransform rect, Text text, Text textExp, float speed, float damage = 10f){
		this.rect = rect;
		this.text = text;
		this.textExp = textExp;
		this.speed = speed;
		this.damage = damage;
		image = rect.GetComponent<Image> ();
		isActive = false;
	}

	public void randomBomb(){
		if (Random.value > 0.9f) {
			item = new ItemScript (ItemScript.ItemType.bomb);
		} else {
			item = new ItemScript ((ItemScript.ItemType) Random.Range (0, (int)ItemScript.ItemType.dodgeBomb));
		}
	}

	public void setExp(GameScript.GameLevel level, int useSpeak){
		switch (level) {
		case GameScript.GameLevel.to200:
			exp = 1;
			break;
		case GameScript.GameLevel.to299:
			exp = 2;
			break;
		case GameScript.GameLevel.to343:
			exp = 3;
			break;
		default:
			break;
		}

		exp *= useSpeak + 1;

		textExp.text = "+"+exp.ToString ();
	}
}
