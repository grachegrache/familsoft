using System;
using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Data;
using Mono.Data.Sqlite;
public class SQLiteScript : MonoBehaviour {
	string conn;

	void Start()
	{
		conn = "URI=file:" + Application.persistentDataPath + "/social_simulation.s3db"; //Path to database
		//Debug.Log(conn);
		IDbConnection dbconn;
		dbconn = (IDbConnection) new SqliteConnection(conn);
		dbconn.Open(); //Open connection to the database.

		IDbCommand dbcmd = dbconn.CreateCommand();
		string sqlQuery;
		sqlQuery = "CREATE TABLE IF NOT EXISTS CHAT (";
		sqlQuery += "ID INTEGER PRIMARY KEY       AUTOINCREMENT,";
		sqlQuery += "message_type   INT           NOT NULL,";
		sqlQuery += "msg_from       VARCHAR(12)   NOT NULL,";
		sqlQuery += "msg_to         VARCHAR(12)   NOT NULL,";
		sqlQuery += "msg            VARCHAR(1000) NOT NULL,";
		sqlQuery += "send_time      TEXT          NOT NULL,";
		sqlQuery += "readed         INT           DEFAULT 1";
		sqlQuery += ");";

		dbcmd.CommandText = sqlQuery;
		dbcmd.ExecuteNonQuery ();

		dbcmd.Dispose();
		dbcmd = null;

//		dbcmd = dbconn.CreateCommand();
//		sqlQuery = "CREATE TABLE IF NOT EXISTS RECEIPT (";
//		sqlQuery += "ID INTEGER PRIMARY KEY       AUTOINCREMENT,";
//		sqlQuery += "data           TEXT          NOT NULL";
//		sqlQuery += ");";
//
//		dbcmd.CommandText = sqlQuery;
//		dbcmd.ExecuteNonQuery ();
//
//		dbcmd.Dispose();
//		dbcmd = null;

		dbconn.Close();
		dbconn = null;

	}

	//public void OnApplicationQuit() {
 //       deleteFriendRequest();
	//}
//	public List<string> getReceipt(){
//		SqliteConnection dbconn;
//		dbconn = new SqliteConnection(conn);
//		dbconn.Open(); //Open connection to the database.
//
//		SqliteCommand dbcmd = dbconn.CreateCommand();
//
//		string sqlQuery = "SELECT * FROM RECEIPT;";
//		dbcmd.CommandText = sqlQuery;
//
//		IDataReader reader = dbcmd.ExecuteReader();
//		List<string> receipts = new List<string> (); 
//		while (reader.Read()) {
//			receipts.Add (reader.GetString (1));
//		}
//		reader.Close();
//		reader = null;
//		dbcmd.Dispose();
//		dbcmd = null;
//		dbconn.Close();
//		dbconn = null;
//
//		return receipts;
//	}
//
//	public void addReceipt(string receipt){
//		IDbConnection dbconn;
//		dbconn = (IDbConnection) new SqliteConnection(conn);
//		dbconn.Open(); //Open connection to the database.
//
//		IDbCommand dbcmd = dbconn.CreateCommand();
//		string sqlQuery;
//		sqlQuery = "INSERT INTO RECEIPT (data)";
//		sqlQuery += "VALUES (@data);";
//
//		dbcmd.CommandText = sqlQuery;
//
//		dbcmd.Parameters.Add(new SqliteParameter ("@data", receipt));
//		dbcmd.ExecuteNonQuery ();
//
//		dbcmd.Dispose();
//		dbcmd = null;
//		dbconn.Close();
//		dbconn = null;
//
//	}
//
//	public void deleteReceipt(string receipt){
//		IDbConnection dbconn;
//		dbconn = (IDbConnection) new SqliteConnection(conn);
//		dbconn.Open(); //Open connection to the database.
//
//		IDbCommand dbcmd = dbconn.CreateCommand();
//		string sqlQuery;
//		sqlQuery = "DELETE FROM RECEIPT WHERE data=@data;";
//
//		dbcmd.CommandText = sqlQuery;
//
//		dbcmd.Parameters.Add(new SqliteParameter ("@data", receipt));
//		dbcmd.ExecuteNonQuery ();
//
//		dbcmd.Dispose();
//		dbcmd = null;
//		dbconn.Close();
//		dbconn = null;
//	}
	public JSONObject getChat(){
        SqliteConnection dbconn;
        dbconn = new SqliteConnection(conn);
        dbconn.Open(); //Open connection to the database.

        SqliteCommand dbcmd = dbconn.CreateCommand();

        string sqlQuery = "SELECT * FROM CHAT WHERE msg_from=@a OR msg_to=@b;";
        dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", SettingScript.nick);

        IDataReader reader = dbcmd.ExecuteReader();
        JSONObject json = new JSONObject();
        while (reader.Read()) {
            JSONObject e = new JSONObject();
            e.AddField("message_type", reader.GetInt32(1));
            e.AddField("from", reader.GetString(2));
            e.AddField("to", reader.GetString(3));
            e.AddField("msg", reader.GetString(4));
            e.AddField("sendTime", reader.GetString(5));
            e.AddField("readed", reader.GetInt32(6));
            json.Add(e);
        }
        reader.Close();
        reader = null;
        dbcmd.Dispose();
        dbcmd = null;
        dbconn.Close();
        dbconn = null;

        return json;
	}

	public JSONObject getChat(PROTOCOL.message_type msg_type){
        SqliteConnection dbconn;
		dbconn = new SqliteConnection (conn);
		dbconn.Open (); //Open connection to the database.

        SqliteCommand dbcmd = dbconn.CreateCommand ();

        string sqlQuery = "SELECT * FROM CHAT WHERE message_type=@msg_type AND (msg_from=@a OR msg_to=@b);";

		dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@msg_type", (int)msg_type);
        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", SettingScript.nick);

		IDataReader reader = dbcmd.ExecuteReader ();
		JSONObject json = new JSONObject ();
		while (reader.Read ())
		{
			JSONObject e = new JSONObject ();
			e.AddField ("message_type", (int)msg_type);
			e.AddField ("from", reader.GetString (2));
			e.AddField ("to", reader.GetString (3));
			e.AddField ("msg", reader.GetString (4));
			e.AddField ("sendTime", reader.GetString(5));
			e.AddField ("readed", reader.GetInt32 (6));
			json.Add (e);
		}
		reader.Close ();
		reader = null;
		dbcmd.Dispose ();
		dbcmd = null;
		dbconn.Close ();
		dbconn = null;

		return json;
	}

	public JSONObject getChat(string user){
        SqliteConnection dbconn;
		dbconn = new SqliteConnection (conn);
		dbconn.Open (); //Open connection to the database.

        SqliteCommand dbcmd = dbconn.CreateCommand ();

		string sqlQuery = "SELECT * FROM CHAT WHERE message_type=@msg_type AND ((msg_from=@a AND msg_to=@b) OR (msg_from=@c AND msg_to=@d));";
		dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@msg_type", (int)PROTOCOL.message_type.chat);
        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", user);
        dbcmd.Parameters.AddWithValue("@c", user);
        dbcmd.Parameters.AddWithValue("@d", SettingScript.nick);

		IDataReader reader = dbcmd.ExecuteReader ();

		JSONObject json = new JSONObject ();
		while (reader.Read ())
		{
			JSONObject e = new JSONObject ();
			e.AddField ("message_type", (int)PROTOCOL.message_type.chat);
			e.AddField ("from", reader.GetString (2));
			e.AddField ("to", reader.GetString (3));
			e.AddField ("msg", reader.GetString (4));
			e.AddField ("sendTime", reader.GetString (5));
			e.AddField ("readed", reader.GetInt32 (6));
			json.Add (e);
		}
		reader.Close ();
		reader = null;
		dbcmd.Dispose ();
		dbcmd = null;
		dbconn.Close ();
		dbconn = null;

		return json;
	}

    public bool isFriendRequested(string user){
        SqliteConnection dbconn;
        dbconn = new SqliteConnection(conn);
        dbconn.Open(); //Open connection to the database.

        SqliteCommand dbcmd = dbconn.CreateCommand();

        string sqlQuery = "SELECT * FROM CHAT WHERE message_type=@msg_type AND msg=@msg AND msg_to=@a AND msg_from=@b;";
        dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@msg_type", (int)PROTOCOL.message_type.friend);
        dbcmd.Parameters.AddWithValue("@msg", "request");
        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", user);

        IDataReader reader = dbcmd.ExecuteReader();

        bool result = false;
        if(reader.Read()) {
            result = true;
        }

        reader.Close();
        reader = null;
        dbcmd.Dispose();
        dbcmd = null;
        dbconn.Close();
        dbconn = null;

        return result;
    }

	public List<string> getUsersFromChat(){
		SqliteConnection dbconn;
		dbconn = new SqliteConnection (conn);
		dbconn.Open (); //Open connection to the database.

		SqliteCommand dbcmd = dbconn.CreateCommand ();

		string sqlQuery = "SELECT DISTINCT msg_from FROM CHAT WHERE message_type=@msg_type AND (msg_from=@a OR msg_to=@b);";
		dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@msg_type", (int)PROTOCOL.message_type.chat);
        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", SettingScript.nick);

		IDataReader reader = dbcmd.ExecuteReader ();
		List<string> userList = new List<string> ();
        //Debug.Log("chat user list");
		while (reader.Read ())
		{
            //Debug.Log(reader.GetString(0));
			userList.Add (reader.GetString (0));
		}
		reader.Close ();
		reader = null;
		dbcmd.Dispose ();
		dbcmd = null;
		dbconn.Close ();
		dbconn = null;

        userList.Remove(SettingScript.nick);
		return userList;
	}

	public JSONObject getUnreadedChat(){
        SqliteConnection dbconn;
		dbconn = new SqliteConnection (conn);
		dbconn.Open (); //Open connection to the database.

        SqliteCommand dbcmd = dbconn.CreateCommand ();

		string sqlQuery = "SELECT * FROM CHAT WHERE readed=1 AND (msg_from=@a OR msg_to=@b);";
		dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", SettingScript.nick);

		IDataReader reader = dbcmd.ExecuteReader ();
		JSONObject json = new JSONObject ();
		while (reader.Read ())
		{
			JSONObject e = new JSONObject ();
			e.AddField ("message_type", reader.GetInt32(1));
			e.AddField ("from", reader.GetString (2));
			e.AddField ("to", reader.GetString (3));
			e.AddField ("msg", reader.GetString (4));
			e.AddField ("sendTime", reader.GetString(5));
			e.AddField ("readed", reader.GetInt32 (6));
			json.Add (e);
		}
		reader.Close ();
		reader = null;
		dbcmd.Dispose ();
		dbcmd = null;
		dbconn.Close ();
		dbconn = null;

		return json;
	}

	public JSONObject getUnreadedChat(PROTOCOL.message_type msg_type){
        SqliteConnection dbconn;
		dbconn = new SqliteConnection (conn);
		dbconn.Open (); //Open connection to the database.

		SqliteCommand dbcmd = dbconn.CreateCommand ();

		string sqlQuery = "SELECT * FROM CHAT WHERE readed=1 AND message_type=@msg_type AND (msg_from=@a OR msg_to=@b);";
		dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@msg_type", (int)msg_type);
        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", SettingScript.nick);

		IDataReader reader = dbcmd.ExecuteReader ();
		JSONObject json = new JSONObject ();
		while (reader.Read ())
		{
			JSONObject e = new JSONObject ();
			e.AddField ("message_type", reader.GetInt32(1));
			e.AddField ("from", reader.GetString (2));
			e.AddField ("to", reader.GetString (3));
			e.AddField ("msg", reader.GetString (4));
			e.AddField ("sendTime", reader.GetString(5));
			e.AddField ("readed", reader.GetInt32 (6));
			json.Add (e);
		}
		reader.Close ();
		reader = null;
		dbcmd.Dispose ();
		dbcmd = null;
		dbconn.Close ();
		dbconn = null;

		return json;
	}

	public JSONObject getUnreadedChat(string user){
        SqliteConnection dbconn;
		dbconn = new SqliteConnection (conn);
		dbconn.Open (); //Open connection to the database.

		SqliteCommand dbcmd = dbconn.CreateCommand ();

		string sqlQuery = "SELECT * FROM CHAT WHERE readed=1 AND message_type=@msg_type AND ((msg_from=@a AND msg_to=@b) OR (msg_from=@c AND msg_to=@d));";
		dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@msg_type", (int)PROTOCOL.message_type.chat);
        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", user);
        dbcmd.Parameters.AddWithValue("@c", user);
        dbcmd.Parameters.AddWithValue("@d", SettingScript.nick);

		IDataReader reader = dbcmd.ExecuteReader ();
		JSONObject json = new JSONObject ();
		while (reader.Read ())
		{
			JSONObject e = new JSONObject ();
			e.AddField ("message_type", reader.GetInt32(1));
			e.AddField ("from", reader.GetString (2));
			e.AddField ("to", reader.GetString (3));
			e.AddField ("msg", reader.GetString (4));
			e.AddField ("sendTime", reader.GetString(5));
			e.AddField ("readed", reader.GetInt32 (6));
			json.Add (e);
		}
		reader.Close ();
		reader = null;
		dbcmd.Dispose ();
		dbcmd = null;
		dbconn.Close ();
		dbconn = null;

		return json;
	}

	public JSONObject getRecentChat(string user, int count){
        SqliteConnection dbconn;
		dbconn = new SqliteConnection (conn);
		dbconn.Open (); //Open connection to the database.

		SqliteCommand dbcmd = dbconn.CreateCommand ();

        string sqlQuery = "SELECT * FROM CHAT WHERE message_type=@msg_type AND ((msg_from=@a AND msg_to=@b) OR (msg_from=@c AND msg_to=@d)) ORDER BY send_time DESC LIMIT @count;";
        
		dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@msg_type", (int)PROTOCOL.message_type.chat);
        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", user);
        dbcmd.Parameters.AddWithValue("@c", user);
        dbcmd.Parameters.AddWithValue("@d", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@count", count);

		IDataReader reader = dbcmd.ExecuteReader ();
		JSONObject json = new JSONObject ();
		while (reader.Read ())
		{
			JSONObject e = new JSONObject ();
			e.AddField ("message_type", reader.GetInt32(1));
			e.AddField ("from", reader.GetString (2));
			e.AddField ("to", reader.GetString (3));
			e.AddField ("msg", reader.GetString (4));
			e.AddField ("sendTime", reader.GetString(5));
			e.AddField ("readed", reader.GetInt32 (6));
			json.Add (e);
		}
		reader.Close ();
		reader = null;
		dbcmd.Dispose ();
		dbcmd = null;
		dbconn.Close ();
		dbconn = null;

		return json;
	}

	public JSONObject getRecentChat(string user, int count, int offset){
        SqliteConnection dbconn;
		dbconn = new SqliteConnection (conn);
		dbconn.Open (); //Open connection to the database.

		SqliteCommand dbcmd = dbconn.CreateCommand ();

        string sqlQuery = "SELECT * FROM CHAT WHERE message_type=@msg_type AND ((msg_from=@a AND msg_to=@b) OR (msg_from=@c AND msg_to=@d)) LIMIT @count OFFSET @offset;";
		dbcmd.CommandText = sqlQuery;
        dbcmd.Prepare();

        dbcmd.Parameters.AddWithValue("@msg_type", (int)PROTOCOL.message_type.chat);
        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", user);
        dbcmd.Parameters.AddWithValue("@c", user);
        dbcmd.Parameters.AddWithValue("@d", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@count", count);
        dbcmd.Parameters.AddWithValue("@offset", offset);

		IDataReader reader = dbcmd.ExecuteReader ();
		JSONObject json = new JSONObject ();
		while (reader.Read ())
		{
			JSONObject e = new JSONObject ();
			e.AddField ("message_type", reader.GetInt32(1));
			e.AddField ("from", reader.GetString (2));
			e.AddField ("to", reader.GetString (3));
			e.AddField ("msg", reader.GetString (4));
			e.AddField ("sendTime", reader.GetString(5));
			e.AddField ("readed", reader.GetInt32 (6));
			json.Add (e);
		}
		reader.Close ();
		reader = null;
		dbcmd.Dispose ();
		dbcmd = null;
		dbconn.Close ();
		dbconn = null;

		return json;
	}

	public void addChat(JSONObject data){
		IDbConnection dbconn;
		dbconn = (IDbConnection) new SqliteConnection(conn);
		dbconn.Open(); //Open connection to the database.

		IDbCommand dbcmd = dbconn.CreateCommand();
		string sqlQuery;
		sqlQuery = "INSERT INTO CHAT (message_type, msg_from, msg_to, msg, send_time)";
		sqlQuery += "VALUES (@msg_type, @from, @to, @msg, @send_time );";

		dbcmd.CommandText = sqlQuery;

		dbcmd.Parameters.Add(new SqliteParameter ("@msg_type", (int)data["message_type"].n));
		dbcmd.Parameters.Add(new SqliteParameter ("@from", data["from"].str));
		dbcmd.Parameters.Add(new SqliteParameter ("@to", data["to"].str));
		dbcmd.Parameters.Add(new SqliteParameter ("@msg", data["msg"].str));
		dbcmd.Parameters.Add(new SqliteParameter ("@send_time", data["sendTime"].str));
		dbcmd.ExecuteNonQuery ();

		dbcmd.Dispose();
		dbcmd = null;
		dbconn.Close();
		dbconn = null;

	}

	public void updateChat(JSONObject data){
		IDbConnection dbconn;
		dbconn = (IDbConnection) new SqliteConnection(conn);
		dbconn.Open(); //Open connection to the database.

		IDbCommand dbcmd = dbconn.CreateCommand();
		string sqlQuery;
		sqlQuery = "UPDATE CHAT SET readed=0 ";
		sqlQuery += "WHERE message_type=@msg_type AND msg_from=@from AND msg_to=@to AND msg=@msg AND send_time=@send_time;";

		dbcmd.CommandText = sqlQuery;

		dbcmd.Parameters.Add(new SqliteParameter ("@msg_type", (int)data["message_type"].n));
		dbcmd.Parameters.Add(new SqliteParameter ("@from", data["from"].str));
		dbcmd.Parameters.Add(new SqliteParameter ("@to", data["to"].str));
		dbcmd.Parameters.Add(new SqliteParameter ("@msg", data["msg"].str));
		dbcmd.Parameters.Add(new SqliteParameter ("@send_time", data["sendTime"].str));
		dbcmd.ExecuteNonQuery ();

		dbcmd.Dispose();
		dbcmd = null;
		dbconn.Close();
		dbconn = null;
	}

	public void deleteChat(JSONObject data){
		IDbConnection dbconn;
		dbconn = (IDbConnection) new SqliteConnection(conn);
		dbconn.Open(); //Open connection to the database.

		IDbCommand dbcmd = dbconn.CreateCommand();
		string sqlQuery;
		sqlQuery = "DELETE FROM CHAT WHERE message_type=@msg_type AND msg_from=@from AND msg_to=@to AND msg=@msg AND send_time=@send_time;";


		dbcmd.CommandText = sqlQuery;

		dbcmd.Parameters.Add(new SqliteParameter ("@msg_type", (int)data["message_type"].n));
		dbcmd.Parameters.Add(new SqliteParameter ("@from", data["from"].str));
		dbcmd.Parameters.Add(new SqliteParameter ("@to", data["to"].str));
		dbcmd.Parameters.Add(new SqliteParameter ("@msg", data["msg"].str));
		dbcmd.Parameters.Add(new SqliteParameter ("@send_time", data["sendTime"].str));
		dbcmd.ExecuteNonQuery ();

		dbcmd.Dispose();
		dbcmd = null;
		dbconn.Close();
		dbconn = null;
	}

    public void deleteChat(string user)
    {
        SqliteConnection dbconn;
        dbconn = new SqliteConnection(conn);
        dbconn.Open(); //Open connection to the database.

        SqliteCommand dbcmd = dbconn.CreateCommand();
        string sqlQuery;
        sqlQuery = "DELETE FROM CHAT WHERE message_type=@msg_type AND ((msg_from=@a AND msg_to=@b) OR (msg_from=@c AND msg_to=@d));";

        dbcmd.CommandText = sqlQuery;

        dbcmd.Parameters.AddWithValue("@msg_type", (int)PROTOCOL.message_type.chat);
        dbcmd.Parameters.AddWithValue("@a", SettingScript.nick);
        dbcmd.Parameters.AddWithValue("@b", user);
        dbcmd.Parameters.AddWithValue("@c", user);
        dbcmd.Parameters.AddWithValue("@d", SettingScript.nick);
        dbcmd.ExecuteNonQuery();

        dbcmd.Dispose();
        dbcmd = null;
        dbconn.Close();
        dbconn = null;
    }

    //public void deleteFriendRequest(){
    //    IDbConnection dbconn;
    //    dbconn = (IDbConnection)new SqliteConnection(conn);
    //    dbconn.Open(); //Open connection to the database.

    //    IDbCommand dbcmd = dbconn.CreateCommand();
    //    string sqlQuery = "DELETE FROM CHAT WHERE message_type=@msg_type AND msg_to=@to AND msg=@msg AND send_time=@send_time;";
    //    dbcmd.CommandText = sqlQuery;

    //    dbcmd.Parameters.Add(new SqliteParameter("@msg_type", (int)PROTOCOL.message_type.friend));
    //    dbcmd.Parameters.Add(new SqliteParameter("@to", SettingScript.nick));
    //    dbcmd.Parameters.Add(new SqliteParameter("@msg", "request"));
    //    dbcmd.ExecuteNonQuery();

    //    dbcmd.Dispose();
    //    dbcmd = null;
    //    dbconn.Close();
    //    dbconn = null;
    //}
}

