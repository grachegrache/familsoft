using System;
using System.Text;
using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine.SocialPlatforms.GameCenter;
#if UNITY_ANDROID
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.SavedGame;
using UnityEngine.SocialPlatforms;
using System.Collections.Generic;
using System.Linq;
#elif UNITY_IOS
#endif
public class SocialTool {
	public Dictionary<string, object> cloudDatas;

	DontDestroyManager dontDestroyManager;
	
	public SocialTool (DontDestroyManager dontDestroyManager)
	{
#if UNITY_ANDROID
		PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder()
        // enables saving game progress.
        .EnableSavedGames()
        .Build();

	    PlayGamesPlatform.InitializeInstance(config);
	    // recommended for debugging:
	    PlayGamesPlatform.DebugLogEnabled = true;
	    // Activate the Google Play Games platform
	    PlayGamesPlatform.Activate();
#elif UNITY_IOS
		GameCenterPlatform.ShowDefaultAchievementCompletionBanner (true);
#endif
		cloudDatas = new Dictionary<string, object> ();
		this.dontDestroyManager = dontDestroyManager;
	}

	public void socialLogin ()
	{
		Social.localUser.Authenticate ((bool authenticated) => {
		if (authenticated) {
			Debug.Log (Social.localUser.id + " logined");
#if UNITY_ANDROID
			LoadGame (() => {
				Social.LoadAchievements ((IAchievement [] achievements) => {
					foreach(IAchievement achievement in achievements){
						Debug.Log (achievement.id);
					}
					
					if(achievements.Length > 0){
						IAchievement achieve = achievements [0];
						if(!achieve.completed){
							Social.ReportProgress (achieve.id, 100.0, (bool reported) => {
								if(reported){
									int soulNum = GetInt ("_soul_num") + 100;
									PlayerPrefs.SetInt ("_soul_num", soulNum);
									SetInt ("_soul_num", soulNum);
									if(GameManager.GetInstance().GetCurrentScene() == SceneName.MainScene){
										GameObject.Find ("SceneManager").GetComponent<MainSceneManager> ().soulText.text = soulNum + "";
									}
									dontDestroyManager.blurManager.popup (LocalizeTool.localizeString.msg_achive_first_login);
								}
							});
						}
					}
					
				});
			});
				
#elif UNITY_IOS
#endif
			}
    	});
	}
	
	public int GetInt(string key){
		object value = GetValue (key);
		if(value == null){
			return 0;
		}
		return (int)value;
	}
	
	public void SetInt(string key, int value){
		SetValue (key, value);
	}
	
	public float GetFloat(string key){
		object value = GetValue (key);
		if(value == null){
			return 0f;
		}
		return (int)value;
	}
	
	public void SetFloat(string key, float value){
		SetValue (key, value);
	}
	
	public string GetString(string key){
		object value = GetValue (key);
		if(value == null){
			value = "";
		}
		return (string)value;
	}
	
	public void SetString(string key, string value){
		SetValue (key, value);
	}
	
	public object GetValue(string key){
		if(cloudDatas.ContainsKey(key)){
			return cloudDatas [key];
		}
		return null;
	}
	
	public void SetValue(string key, object value){
		cloudDatas [key] = value;
	}
	
	public void syncWithCloudData(){
		foreach(string key in cloudDatas.Keys){
			if(cloudDatas[key] is int){
				PlayerPrefs.SetInt (key, (int)cloudDatas [key]);
			}else if(cloudDatas[key] is float){
				PlayerPrefs.SetFloat (key, (float)cloudDatas [key]);
			}else if(cloudDatas[key] is string){
				PlayerPrefs.SetString (key, (string)cloudDatas [key]);
			}
		}
	}
	
#if UNITY_ANDROID
	public void SaveGame(){
		if(Social.localUser.authenticated){
			OpenSavedGame (Social.localUser.id + "_DATA", OnSavedGameOpenedToSave);
		}else{
			Social.localUser.Authenticate((bool success) => {
				if(success){
					Debug.Log (Social.localUser.id+" logined");
					OpenSavedGame (Social.localUser.id + "_DATA", OnSavedGameOpenedToSave);
				}
	    	});
		}
	}
	
	public void LoadGame(){
		if(Social.localUser.authenticated){
			OpenSavedGame (Social.localUser.id + "_DATA", OnSavedGameOpenedToLoad);
		}else{
			Social.localUser.Authenticate((bool success) => {
				if(success){
					Debug.Log (Social.localUser.id+" logined");
					OpenSavedGame (Social.localUser.id + "_DATA", OnSavedGameOpenedToLoad);
				}
	    	});
		}
	}
	
	public void SaveGame(string data, Action action){
		Action<SavedGameRequestStatus, ISavedGameMetadata> onOpenedAction = (SavedGameRequestStatus open_status, ISavedGameMetadata open_game) => {
			Debug.Log ("OnSavedGameOpened");
			if (open_status == SavedGameRequestStatus.Success) {
			
			
				SaveGameData (open_game, cloudDataToByteArray(), (SavedGameRequestStatus status, ISavedGameMetadata game) => {
					Debug.Log ("OnSavedGameWritten");
					if (status == SavedGameRequestStatus.Success) {
						Debug.Log (game.ToString ());
						action ();
					} else {
						Debug.LogError (status.ToString ());
					}
				});
			} else {
				Debug.LogError (open_status.ToString ());
			}
		};
		if(Social.localUser.authenticated){
			OpenSavedGame (Social.localUser.id + "_DATA", onOpenedAction);
		}else{
			Social.localUser.Authenticate((bool success) => {
				if(success){
					Debug.Log (Social.localUser.id+" logined");
					OpenSavedGame (Social.localUser.id + "_DATA", onOpenedAction);
				}
	    	});
		}
	}
	
	public void LoadGame(Action action){
		Action<SavedGameRequestStatus, ISavedGameMetadata> onOpenedAction = (SavedGameRequestStatus open_status, ISavedGameMetadata open_game) => {
			Debug.Log ("OnSavedGameOpened");
			if (open_status == SavedGameRequestStatus.Success) {
				LoadGameData (open_game, (SavedGameRequestStatus status, byte[] data) => {
					Debug.Log ("OnSavedGameDataRead");
			        if (status == SavedGameRequestStatus.Success) {
						Debug.Log (Encoding.UTF8.GetString(data));
						fetchData (data);
						syncWithCloudData ();
						action ();
			        } else {
						Debug.LogError (status.ToString ());
			        }
				});
			} else {
				Debug.LogError (open_status.ToString ());
			}
		};
		if(Social.localUser.authenticated){
			OpenSavedGame (Social.localUser.id + "_DATA", onOpenedAction);
		}else{
			Social.localUser.Authenticate((bool success) => {
				if(success){
					Debug.Log (Social.localUser.id+" logined");
					OpenSavedGame (Social.localUser.id + "_DATA", onOpenedAction);
				}
	    	});
		}
	}
	
	void OpenSavedGame(string filename, Action<SavedGameRequestStatus, ISavedGameMetadata> action) {
        ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;
        savedGameClient.OpenWithAutomaticConflictResolution(filename, DataSource.ReadCacheOrNetwork,
            ConflictResolutionStrategy.UseLongestPlaytime, action);
    }

	void OnSavedGameOpenedToLoad(SavedGameRequestStatus status, ISavedGameMetadata game) {
    	Debug.Log ("OnSavedGameOpened");
        if (status == SavedGameRequestStatus.Success) {
			LoadGameData (game, OnSavedGameDataRead);
        } else {
            Debug.LogError (status.ToString ());
        }
    }
    
    void OnSavedGameOpenedToSave(SavedGameRequestStatus status, ISavedGameMetadata game) {
    	Debug.Log ("OnSavedGameOpened");
        if (status == SavedGameRequestStatus.Success) {
			SaveGameData (game, cloudDataToByteArray(), OnSavedGameWritten);
        } else {
            Debug.LogError (status.ToString ());
        }
    }
    
	void SaveGameData (ISavedGameMetadata game, byte[] savedData, Action<SavedGameRequestStatus, ISavedGameMetadata> action) {
        ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;

        SavedGameMetadataUpdate.Builder builder = new SavedGameMetadataUpdate.Builder();
		builder = builder
			.WithUpdatedPlayedTime (game.TotalTimePlayed.Add(new TimeSpan(0,0,(int)Time.realtimeSinceStartup)))
            .WithUpdatedDescription("Saved game at " + DateTime.Now);
        
        SavedGameMetadataUpdate updatedMetadata = builder.Build();
        savedGameClient.CommitUpdate(game, updatedMetadata, savedData, action);
    }

    void OnSavedGameWritten (SavedGameRequestStatus status, ISavedGameMetadata game) {
    	Debug.Log ("OnSavedGameWritten");
        if (status == SavedGameRequestStatus.Success) {
			Debug.Log (game.ToString());
        } else {
			Debug.LogError (status.ToString());
        }
        
    }

    //public Texture2D getScreenshot() {
    //    // Create a 2D texture that is 1024x700 pixels from which the PNG will be
    //    // extracted
    //    Texture2D screenShot = new Texture2D(1024, 700);

    //    // Takes the screenshot from top left hand corner of screen and maps to top
    //    // left hand corner of screenShot texture
    //    screenShot.ReadPixels(
    //        new Rect(0, 0, Screen.width, (Screen.width/1024)*700), 0, 0);
    //    return screenShot;
    //}
    
    void LoadGameData (ISavedGameMetadata game, Action<SavedGameRequestStatus, byte[]> action) {
        ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;
        savedGameClient.ReadBinaryData(game, action);
    }

    void OnSavedGameDataRead (SavedGameRequestStatus status, byte[] data) {
    	Debug.Log ("OnSavedGameDataRead");
        if (status == SavedGameRequestStatus.Success) {
			Debug.Log (Encoding.UTF8.GetString(data));
			fetchData (data);
			syncWithCloudData ();
        } else {
			Debug.LogError (status.ToString ());
        }
    }
    
    void fetchData(byte[] data){
    	string cloudData = Encoding.UTF8.GetString (data);

		cloudDatas.Clear ();
		string [] members = cloudData.Split (',');
		string [] memberInfos;
		foreach(string member in members){
			memberInfos = member.Split (':');
			if(memberInfos.Length < 2){
				continue;
			}

			object value;
			float tmpFloat;
			int tmpInt;
			if(int.TryParse(memberInfos[1], out tmpInt)){
				value = tmpInt;
			}else if(float.TryParse(memberInfos[1], out tmpFloat)){
				value = tmpFloat;
			}else{
				//string
				value = memberInfos[1].Substring (1, memberInfos[1].Length - 2);
			}

			cloudDatas.Add (memberInfos [0], value);
		}
    }
    
    byte[] cloudDataToByteArray(){
		string sb = "";
    	foreach(string key in cloudDatas.Keys){
    		if(cloudDatas[key] is string){
				sb += key + ":\"" + cloudDatas [key] + "\",";
    		}else{
    			sb += key + ":" + cloudDatas [key]+",";
    		}
    	}

		return Encoding.UTF8.GetBytes(sb.Substring (0, sb.Length - 1));
    }
#elif UNITY_IOS
	[DllImport("__Internal")]
	static extern void _AddData();
	[DllImport("__Internal")]
	static extern void _RequestData();
	[DllImport("__Internal")]
	static extern void _UpdateData();
	[DllImport("__Internal")]
	static extern void _DeleteData();
	
#endif
	
}
