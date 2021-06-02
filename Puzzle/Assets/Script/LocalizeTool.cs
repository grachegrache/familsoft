using UnityEngine;
using System.Collections.Generic;
using System.Xml;
using System.Xml.Serialization;
using System.IO;

public class LocalizeTool {
	public static LocalizeString localizeString;

	public static void loadLocalizeString(){
		TextAsset textAsset = Resources.Load ("localizestring") as TextAsset;

		XmlSerializer serializer = new XmlSerializer (typeof (Localize));
		Localize localize = serializer.Deserialize (new StringReader (textAsset.text)) as Localize;

		string currentLanguage = "en";
		if(Application.systemLanguage == SystemLanguage.Korean){
			currentLanguage = "ko";
		}
		foreach(LocalizeString localStr in localize.localizeStringList){
			if(localStr.language == currentLanguage){
				localizeString = localStr;
				break;
			}
		}
	}
}

public class LocalizeString{
	[XmlAttribute ("language")]
	public string language;
	[XmlElement ("didnt_complete")]
	public string didnt_complete;
	[XmlElement("complete_board")]
	public string complete_board;
	[XmlElement("msg_reset")]
	public string msg_reset;
	[XmlElement ("msg_quit")]
	public string msg_quit;
	[XmlElement ("msg_achive_first_login")]
	public string msg_achive_first_login;
	
}
	
[XmlRoot("localize")]
public class Localize{
	[XmlIgnore]
	List<LocalizeString> list;
	
	[XmlElement ("localizestring")]
	public LocalizeString[] localizeStringList{
		get{
			return list.ToArray ();
		}
		set{
		list = new List<LocalizeString> (value);
		}
	}
}
