package com.familsoft.tr4tr.translatorfortraveler.func;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.SparseArray;

/**
 * Created by macpro on 2017. 8. 21..
 */

public class SQLiteUtils extends SQLiteOpenHelper {
    public final static String[] tableName = {"CONVERSATION", "BOOKMARK"};
    public final static SparseArray<String> tableMapCvs = new SparseArray<>();
    public final static SparseArray<String> tableMapBmk = new SparseArray<>();
    private final static String dbName = "t4t.db";
    public static int version = 1;

    static{
        tableMapCvs.put(SchemeCvs.Index._id, SchemeCvs.Column._id);
        tableMapCvs.put(SchemeCvs.Index.item, SchemeCvs.Column.item);
        tableMapCvs.put(SchemeCvs.Index.translation, SchemeCvs.Column.translation);
        tableMapCvs.put(SchemeCvs.Index.pronunciation, SchemeCvs.Column.pronunciation);
        tableMapCvs.put(SchemeCvs.Index.item_locale, SchemeCvs.Column.item_locale);
        tableMapCvs.put(SchemeCvs.Index.trs_locale, SchemeCvs.Column.trs_locale);

        tableMapBmk.put(SchemeBmk.Index._id, SchemeBmk.Column._id);
        tableMapBmk.put(SchemeBmk.Index.type, SchemeBmk.Column.type);
        tableMapBmk.put(SchemeBmk.Index.target, SchemeBmk.Column.target);
        tableMapBmk.put(SchemeBmk.Index.filter, SchemeBmk.Column.filter);
    }

    // DBHelper 생성자로 관리할 DB 이름과 버전 정보를 받음
    public SQLiteUtils(Context context) {
        super(context, dbName, null, version);
    }

    // DB를 새로 생성할 때 호출되는 함수
    @Override
    public void onCreate(SQLiteDatabase db) {
        db.execSQL("CREATE TABLE CONVERSATION (_id INTEGER PRIMARY KEY AUTOINCREMENT, item TEXT, translation TEXT, pronunciation TEXT, item_locale TEXT, trs_locale TEXT)");
        db.execSQL("CREATE TABLE BOOKMARK (_id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, type INTEGER, target INTEGER, filter TEXT)");

        ContentValues contentValues = new ContentValues();
        contentValues.put(SchemeCvs.Column.item, "안녕하세요");
        contentValues.put(SchemeCvs.Column.translation, "Hello");
        contentValues.put(SchemeCvs.Column.pronunciation, "annyeonghaseyo");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

        contentValues.clear();
        contentValues.put(SchemeCvs.Column.item, "이곳으로 가려면 어떻게 가야합니까?");
        contentValues.put(SchemeCvs.Column.translation, "How do I get there?");
        contentValues.put(SchemeCvs.Column.pronunciation, "igos-eulo galyeomyeon eotteohge gayahabnikka?");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

        contentValues.clear();
        contentValues.put(SchemeCvs.Column.item, "화장실은 어디입니까?");
        contentValues.put(SchemeCvs.Column.translation, "Where is the restroom?");
        contentValues.put(SchemeCvs.Column.pronunciation, "hwajangsil-eun eodiibnikka?");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

        contentValues.clear();
        contentValues.put(SchemeCvs.Column.item, "감사합니다");
        contentValues.put(SchemeCvs.Column.translation, "Thank you");
        contentValues.put(SchemeCvs.Column.pronunciation, "gamsahabnida");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

        contentValues.clear();
        contentValues.put(SchemeCvs.Column.item, "얼마입니까?");
        contentValues.put(SchemeCvs.Column.translation, "How much?");
        contentValues.put(SchemeCvs.Column.pronunciation, "eolmaibnikka?");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

        contentValues.clear();
        contentValues.put(SchemeCvs.Column.item, "이것을 사고 싶습니다");
        contentValues.put(SchemeCvs.Column.translation, "I want to buy this");
        contentValues.put(SchemeCvs.Column.pronunciation, "igeos-eul sago sipseubnida");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

        contentValues.clear();
        contentValues.put(SchemeCvs.Column.item, "이건 어떻게 하는 거죠?");
        contentValues.put(SchemeCvs.Column.translation, "How do you do this?");
        contentValues.put(SchemeCvs.Column.pronunciation, "igeon eotteohge haneun geojyo?");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

        contentValues.clear();
        contentValues.put(SchemeCvs.Column.item, "이건 뭐죠?");
        contentValues.put(SchemeCvs.Column.translation, "What is this?");
        contentValues.put(SchemeCvs.Column.pronunciation, "igeon mwojyo?");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

        contentValues.clear();
        contentValues.put(SchemeCvs.Column.item, "식당은 어디에 있나요?");
        contentValues.put(SchemeCvs.Column.translation, "Where is the restaurant?");
        contentValues.put(SchemeCvs.Column.pronunciation, "sigdang-eun eodie issnayo?");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

        contentValues.clear();
        contentValues.put(SchemeCvs.Column.item, "도와주실 수 있나요?");
        contentValues.put(SchemeCvs.Column.translation, "Can you help me?");
        contentValues.put(SchemeCvs.Column.pronunciation, "dowajusil su issnayo?");
        contentValues.put(SchemeCvs.Column.item_locale, "ko");
        contentValues.put(SchemeCvs.Column.trs_locale, "en");
        db.insert(tableName[0], null, contentValues);

    }

    // DB 업그레이드를 위해 버전이 변경될 때 호출되는 함수
    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }

    public interface SchemeCvs {
        interface Column{
            String _id="_id";
            String item="item";
            String translation="translation";
            String pronunciation="pronunciation";
            String item_locale="item_locale";
            String trs_locale="trs_locale";
        }
        interface Index{
            int _id=0;
            int item=1;
            int translation=2;
            int pronunciation=3;
            int item_locale=4;
            int trs_locale=5;
        }
    }
    public interface SchemeBmk {
        interface Column{
            String _id="_id";
            String name="name";
            String type="type";
            String target="target";
            String filter="filter";
        }
        interface Index{
            int _id=0;
            int name=1;
            int type=2;
            int target=3;
            int filter=4;
        }
        interface Type{
            int INFO=0;
            int FILTER=1;
        }
    }
}
