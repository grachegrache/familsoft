using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PROTOCOL : MonoBehaviour {
	public enum login_method{
		android = 0,
		ios = 1,
        guest = 2
	}

	public enum message_type{
		chat = 0,
		friend = 1,
	}

	public enum relationship_type{
		friend = 0,
		block = 1,
	}

	public enum gender{
		female = 0,
		male = 1,
	}

	public enum table_num{
		closet = 0,
		floorNwall = 1,
		house = 2
	}

    public enum access_level
    {
        secret = 1,
        friend_only = 2,
        full_disclosure = 3
    }
}
