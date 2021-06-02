using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemScript{
	public enum ItemType{
		removeLast = 0,
		removeAll,
		stoping,
		healing,
		dodgeBomb,
		bomb,
		end,
	}
	public ItemType type;

	// for result item
	public ItemScript(GameScript.GamePattern p){
		if (Random.value > 0.5f) {
			if (p >= GameScript.GamePattern.item) {
				type = (ItemType)Random.Range (0, (int)ItemType.dodgeBomb);
			} else if (p >= GameScript.GamePattern.bombItem) {
				type = (ItemType)Random.Range (0, (int)ItemType.bomb);
			}
		} else
			type = ItemType.end;
	}

	public ItemScript(ItemType t){
		this.type = t;
	}

}
