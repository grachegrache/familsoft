using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Package {
	public int packageCode;
	public int stageNum;
	public Stage[] stages;
	public string[] words;

	public Package(int code, string[] words, int stageNum, params Stage[] stages){
		packageCode = code;
		this.words = words;
		this.stageNum = stageNum;
		this.stages = new Stage[stages.Length];
		for (int i = 0; i < stages.Length; i++) {
			this.stages [i] = stages [i];
		}

	}

	public class Stage{
		public GameScript.GamePattern pattern;
		public GameScript.GameLevel wordLevel;
		public int maxTime;
		public float speed;
		public float deltaSpeed;
		public float minRespawn;

		public Stage(GameScript.GamePattern p, GameScript.GameLevel l, int t, float s, float ds, float mr){
			pattern = p;
			wordLevel = l;
			maxTime = t;
			speed = s;
			deltaSpeed = ds;
			minRespawn = mr;
		}

		public void setPlayinfo(PlayInfo playinfo){
			playinfo.pattern = pattern;
			playinfo.wordLevel = wordLevel;
			playinfo.maxTime = maxTime;
			playinfo.speed = speed;
			playinfo.deltaSpeed = deltaSpeed;
			playinfo.minRespawn = minRespawn;

		}
	}
}
