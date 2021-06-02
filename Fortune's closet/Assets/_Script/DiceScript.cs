/*
 * [호빈]
 * 
 * "추가"를 Ctrl+F 해서 보면 추가된 부분을 한번에 체크할 수 있습니다.
 * (추가된 내용은 어디서부터 어다까지 추가되었는지 주석으로 체크해두었습니다.)
 * 
 * "제거"를 Ctrl+F 해서 보면 제거된 부분을 한번에 체크할 수 있습니다.
 * 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DiceScript : MonoBehaviour {
	SettingScript settingScript;

	public Sprite[] diceImage;
	public GameObject Snake_obj_long, Snake_obj_short;

	public Transform movable;
	public Transform snakeParent;
	public Text leftTime;
	public GameObject exitButton;
    public GameObject dicePopup;
    public GameObject resultPopup;

	public static List<Line> line_list;

	float remainTime;
    
	void Awake(){
		settingScript = GameObject.Find("SettingManager").GetComponent<SettingScript>();
		SettingScript.socketScript.diceScript = this;
		settingScript.movable = movable;
        settingScript.isSceneLoading = false;
		settingScript.setButtonsActive (false);
        settingScript.setChatingActive(true);
        settingScript.setCashShopActive(false);

		if (settingScript.data == null) {
			settingScript.openMessagePopup ("data null error", true, () => {
				SettingScript.isLoaded = false;
				Destroy (settingScript.gameObject);
				UnityEngine.SceneManagement.SceneManager.LoadScene("LoginScene");
			});
            return;
		}
		remainTime = settingScript.data ["leftTime"].n;
		leftTime.text = (int)remainTime + "";

		//line list init
		if (line_list == null) {
			line_list = new List<Line> ();

			Vector2[] corner_spots = { 
				new Vector2 (-267f, -405f),
				new Vector2 (267f, -405f),
				new Vector2 (267f, -202f),
				new Vector2 (-267f, -202f),
				new Vector2 (-267f, 0f),
				new Vector2 (267f, 0f), 
				new Vector2 (267f, 202f),
				new Vector2 (-267f, 202f), 
				new Vector2 (-267f, 405f),
				new Vector2 (267f, 405f),
			};

			for (int i = 0; i < corner_spots.Length - 1; i++) {
				if (i % 2 == 0)
					line_list.Add (new Line (corner_spots [i], corner_spots [i + 1], 5));
				else
					line_list.Add (new Line (corner_spots [i], corner_spots [i + 1], 2));
			}

		}

		// make board from dice data
		// make characters
		CharacterScript ch = settingScript.createSelf (movable, line_list[0].get_start());
//		new Vector2 (81f, 196f)
		init (ch, 0);
		//add dice image
		GameObject dice = new GameObject("dice");
		dice.AddComponent<Image> ();
		dice.transform.SetParent(ch.transform);
		RectTransform diceRect = dice.GetComponent<RectTransform> ();
		Vector2 dicePos = new Vector3 (0, 117f, 0);
		Vector2 diceSize = new Vector2 (42f, 42f);
		diceRect.anchoredPosition = dicePos;
		diceRect.sizeDelta = diceSize;
		dice.SetActive (false);

		if (settingScript.data.HasField ("userDatas")) {
			for (int i = 0; i < settingScript.data ["userDatas"].Count; i++) {
				ch = settingScript.createCharacter (settingScript.data ["userDatas"] [i], movable);
				string nickname = settingScript.data ["userDatas"] [i] ["nickname"].str;
                if (settingScript.data["locList"].HasField(nickname))
                {
                    init(ch, (int)settingScript.data["locList"][nickname].n);
                }
                else
                {
                    init(ch, 0);
                }
				ch.setPos (line_list [ch.line_num].get_loc_info (ch.left_line));

				//add dice image
				dice = new GameObject("dice");
				dice.AddComponent<Image> ();
				dice.transform.SetParent(ch.transform);
				diceRect = dice.GetComponent<RectTransform> ();
				diceRect.anchoredPosition = dicePos;
				diceRect.sizeDelta = diceSize;
				dice.SetActive (false);
			}
		}

		// make snakes
		float[] SNAKE_LOC_X = new float[] { -162f, -56f, 48f, 154f },
		SNAKE_LOC_Y = new float[] { -200f, 13f, 221f, 428f },//////수정중
		SNAKE_LONG_ROT = new float[] { 232.3f, 241.2f, 254.5f, -90f, -74.5f, -61.2f, -52.3f },
		SNAKE_LONG_SCALE = new float[] { 0.8f, 0.85f, 0.9f, 1f },
		SNAKE_SHORT_ROT = new float[] { 210f, 224f, 243.5f, -90f, -63.5f, -44f, -30f },
		SNAKE_SHORT_SCALE = new float[] { 0.7f, 0.7f, 0.9f, 1.1f };

		int[,] snakes_head_loc = new int[3, 2];//뱀 머리랑 꼬리 위치 저장할 변수
		int long_snake_loc = -1;
		int minI, maxI, index=0;
		//int minIndex;
		foreach (string key in settingScript.data["snake"].keys) {
			int headIndex = (int)settingScript.data ["snake"] [key].n;
			int tailIndex = int.Parse (key);
			minI = tailIndex / 7;
			if (long_snake_loc < 0 && Mathf.Abs (headIndex - tailIndex) > 10) {
				long_snake_loc = minI;
			}

//			if (headIndex == minIndex) {
//				headIndex = tailIndex;
//				tailIndex = minIndex;
//			}
			maxI = headIndex / 7;
			headIndex = headIndex % 7 - 1;
			tailIndex = tailIndex % 7 - 1;

			if (minI % 2 == 1) {
				tailIndex = 3 - tailIndex;
			}
			if (maxI % 2 == 1) {
				headIndex = 3 - headIndex;
			}

			if (long_snake_loc >= 0 && index > long_snake_loc) {
				snakes_head_loc [minI - 1, 0] = headIndex;
				snakes_head_loc [minI - 1, 1] = tailIndex;
			} else {
				snakes_head_loc [minI, 0] = headIndex;
				snakes_head_loc [minI, 1] = tailIndex;
			}
			index++;
		}

		for (int i = 0; i < 3; i++) {
			GameObject snake_obj;
			int snake_state = snakes_head_loc[i, 1] - snakes_head_loc[i, 0];
			if (i == long_snake_loc)// 긴 뱀
			{
				snake_obj = Instantiate(Snake_obj_long);
				snake_obj.SetActive(true);
                snake_obj.transform.SetParent(snakeParent);

				RectTransform trans = snake_obj.GetComponent<RectTransform>();
				trans.localPosition = new Vector3(SNAKE_LOC_X[snakes_head_loc[i, 0]], SNAKE_LOC_Y[i+1], 0f);
				trans.Rotate(new Vector3(0f, 0f, SNAKE_LONG_ROT[3 + snake_state]));
				if (snake_state <= 0)
					trans.localScale = new Vector3(SNAKE_LONG_SCALE[snake_state * (-1)], -1f, 1f);
				else
					trans.localScale = new Vector3(SNAKE_LONG_SCALE[snake_state], 1f, 1f);
			}
			else// 짧은 뱀
			{
				snake_obj = Instantiate(Snake_obj_short);
				snake_obj.SetActive(true);
                snake_obj.transform.SetParent(snakeParent);

				RectTransform trans = snake_obj.GetComponent<RectTransform>();
				if (i > long_snake_loc)
					trans.localPosition = new Vector3(SNAKE_LOC_X[snakes_head_loc[i, 0]], SNAKE_LOC_Y[i + 1], 0f);
				else
					trans.localPosition = new Vector3(SNAKE_LOC_X[snakes_head_loc[i, 0]], SNAKE_LOC_Y[i], 0f);
				trans.Rotate(new Vector3(0f, 0f, SNAKE_SHORT_ROT[3 + snake_state]));
				if (snake_state <= 0)
					trans.localScale = new Vector3(SNAKE_SHORT_SCALE[snake_state * (-1)], -1f, 1f);
				else
					trans.localScale = new Vector3(SNAKE_SHORT_SCALE[snake_state], 1f, 1f);
			}
		}

		settingScript.data = null;

        //localize
        resultPopup.transform.GetChild(0).GetChild(0).GetComponent<Text>().text = LocalizationString.Result;

		settingScript.playBGM (2);
	}

    void OnDestroy(){
		settingScript.movable = null;
        if (SettingScript.socketScript != null) {
            SettingScript.socketScript.diceScript = null;
        }
    }

	void Update () {
		if (leftTime.gameObject.activeSelf) {
			if (remainTime - Time.deltaTime >= 0) {
				remainTime -= Time.deltaTime;
				leftTime.text = (int)remainTime + "";
			}
		}
	}

	public void onDice(JSONObject data){
		if (data["result"].str == "turn_end") {
			remainTime = data ["leftTime"].n;
			leftTime.text = (int)remainTime + "";

            int diceNum = (int)data ["diceData"] [SettingScript.nick] [0].n;

			dicePopup.transform.GetChild(0).gameObject.SetActive (false);
			Image dice_image = dicePopup.transform.GetChild (1).GetComponent<Image> ();
			dice_image.sprite = diceImage [diceNum - 1];
			dice_image.gameObject.SetActive (true);
			dicePopup.SetActive (true);
			LeanTween.delayedCall (1.5f, () => {
                if (dicePopup == null)
                    return;
				dicePopup.SetActive(false);
				dicePopup.transform.GetChild(0).gameObject.SetActive (true);
				dicePopup.transform.GetChild(1).gameObject.SetActive(false);

				foreach (string nickname in data["diceData"].keys) {
                    Transform chTrs = movable.Find(nickname);
                    if(chTrs != null){
                        CharacterScript ch = chTrs.GetComponent<CharacterScript>();

                        int dice = (int)data["diceData"][nickname][0].n;
                        Image ch_dice = ch.transform.Find("dice").GetComponent<Image>();
                        ch_dice.sprite = diceImage[dice - 1];
                        ch_dice.gameObject.SetActive(true);

                        move(ch, dice);

                        int lastIndex = (int)data["diceData"][nickname][1].n;
                        if (lastIndex == 33)
                        {
                            if (ch.name != SettingScript.nick)
                            {
                                ch.setOnStopAction(() => {
                                    Destroy(ch.gameObject);
                                });
                            }
                        }
                        else
                        {
                            setPosFromIndex(ch, lastIndex);
                        }
                    }
				}
			});


		} else if (data ["result"].str == "enter") {
            Debug.Log(data);
            Transform user = movable.Find(data["userData"]["nickname"].str);
            if(user != null){
                Destroy(user.gameObject);
            }
			CharacterScript ch = settingScript.createCharacter (data ["userData"], movable);
			init (ch, 0);
			ch.setPos (line_list[0].get_start());

			GameObject dice = new GameObject("dice");
			dice.AddComponent<Image> ();
			dice.transform.SetParent(ch.transform);
			RectTransform diceRect = dice.GetComponent<RectTransform> ();
			Vector2 dicePos = new Vector3 (0, 117f, 0);
			Vector2 diceSize = new Vector2 (42f, 42f);
			diceRect.anchoredPosition = dicePos;
			diceRect.sizeDelta = diceSize;
			dice.SetActive (false);

		} else if (data ["result"].str == "end") {
			SettingScript.room = null;
			leftTime.gameObject.SetActive (false);
			exitButton.SetActive (false);

			long score = (long)data ["score"].n;
            long cashValue;
            if (long.TryParse(settingScript.getChData()["userData"]["cash"].str, out cashValue)) {
                cashValue += score;
                settingScript.getChData()["userData"]["cash"].str = cashValue + "";
                settingScript.cash.transform.GetComponentInChildren<Text>().text = cashValue + "";
            }

            resultPopup.transform.GetChild(0).GetChild(1).GetComponent<Text>().text
                       = string.Format(LocalizationString.MINIGAME_scoreMessage, score);
			CharacterScript ch = movable.Find (SettingScript.nick).GetComponent<CharacterScript> ();
			ch.setOnStopAction (() => {
                resultPopup.SetActive(true);
			});

		} else if (data ["result"].str == "leave") {
			Transform t = movable.Find (data ["nickname"].str);
			if (t != null)
				Destroy (t.gameObject);
		} else if (data ["result"].str == "fail") {
			
		} else {
		}
	}

	public void onHome(JSONObject data){
		if (data.HasField ("result")) {
			if (data ["result"].str.Equals ("success")) {
				SettingScript.room = null;
                settingScript.data = null;
				UnityEngine.SceneManagement.SceneManager.LoadScene ("MainScene");
				settingScript.setButtonsActive (true);
                settingScript.setCashShopActive(true);
			} else {

			}
		} else {
			Transform t = movable.Find(data["nickname"].str);
			if(t != null)
				Destroy(t.gameObject);
		}
	}

    public void retryClick(){
        SettingScript.socketScript.goTo("dice");
		settingScript.playSound (0);
    }

    public void backClick(){
        UnityEngine.SceneManagement.SceneManager.LoadScene("MainScene");
        settingScript.setButtonsActive(true);
        settingScript.setCashShopActive(true);
		settingScript.playSound (0);
    }

	public void exitClick(){
		settingScript.openMessagePopup(LocalizationString.MINIGAME_exitMessage, false, () => {
			SettingScript.socketScript.goTo("home");
			settingScript.messagePopup.SetActive(false);
			settingScript.playSound (0);
		});
		settingScript.playSound (1);

	}

	void init(CharacterScript ch, int loc){
		int line_num=0;
		for(int i=0,spot_num=5; loc >= spot_num; spot_num = ++i % 2 == 0 ? 5 : 2){
			loc -= spot_num;
			line_num++;
		}
		ch.line_num = line_num;
		ch.left_line = line_list[line_num].get_spot_num() - loc;
	}

	/*
     * TODO : 나중에 플레이어 이동중에는 주사위 못돌리게 구현하기
     */

	void move(CharacterScript chScript, int dice_num)
	{
		chScript.isIdle = false;

		do
		{
			if (chScript.left_line > dice_num)
			{
				chScript.left_line -= dice_num;

				Line line_info = line_list[chScript.line_num];
				chScript.addPath(line_list[chScript.line_num].get_loc_info(chScript.left_line));
				break;
			}
			else
			{
				dice_num -= chScript.left_line;

				Line line_info = line_list[chScript.line_num];
				chScript.addPath(line_info.get_end());
				if (chScript.line_num != line_list.Count - 1)
					chScript.left_line = line_list[++chScript.line_num].get_spot_num();
				else
					break;//캐릭터 끝지점까지 도착!
			}
		} while (dice_num > 0);
	}

	void setPosFromIndex(CharacterScript ch, int index){
		int line_num=0;
		for(int i=0,spot_num=5; index >= spot_num; spot_num = ++i % 2 == 0 ? 5 : 2){
			index -= spot_num;
			line_num++;
		}
		int left_line = line_list [line_num].get_spot_num () - index;
		Vector2 pos = line_list [line_num].get_loc_info (left_line);
		if (ch.path[ch.path.Count-1] != pos) {
			ch.line_num = line_num;
			ch.left_line = left_line;
			ch.addPath(pos);

		}
	}
}

/* 
 * TODO
 * 추가 : Line 클래스
 * 클래스내용 : 시작위치부터 끝위치까지의 정보를 저장
 * constructor : 시작위치 좌표값, 끝위치 좌표값, 해당 라인에서 건너야하는 갯수값
 *              : 시작점(start) ~ 끝점(end) 사이에 있는 구간의 좌표값도 미리 저장됨
 * 사용예 : 전체 맵에서의 직선정보를 해당 클래스객체로 List에 저장할 수 있다
 */
//-------------여기서부터
public class Line
{
    Vector2 start, end;
    int spot_num;
    List<Vector2> loc_list = new List<Vector2>();//start~end 사이에 있는 칸 좌표 저장할 변수

    public Line(Vector2 start, Vector2 end, int spot_num)
    {
        this.start = start;
        this.end = end;
        this.spot_num = spot_num;

        //// 시작점과 끝점 사이에 있는 구간 좌표값 미리 구해서 list에 추가하기
        for (int i = 1; i < spot_num; i++)
        {
            float x, y;
            x = start.x + (end.x - start.x) * i / spot_num;
            y = start.y + (end.y - start.y) * i / spot_num;
            loc_list.Add(new Vector2(x, y));
            //Debug.Log(start + "~" + end + "의 " + i + "번째 좌표 : " + x + "," + y);//test
        }
    }
    /*
    //test용
    public string get_info(){
        return start + "~" + end + " : " + spot_num;
    }
     */
    public Vector2 get_start() { return start; }
    public Vector2 get_end() { return end; }
    public int get_spot_num() { return spot_num; }
    public Vector2 get_loc_info(int left_line) {
		if (left_line == spot_num) {
			return start;
		}
		return loc_list[spot_num - left_line-1];
	}
}
//---------------여기까지
