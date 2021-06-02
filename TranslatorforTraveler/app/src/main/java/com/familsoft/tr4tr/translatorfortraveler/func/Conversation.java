package com.familsoft.tr4tr.translatorfortraveler.func;

import android.content.ContentResolver;
import android.database.Cursor;
import android.widget.AutoCompleteTextView;
import android.widget.EditText;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;

import java.util.concurrent.ConcurrentHashMap;

/**
 * Created by macpro on 2017. 8. 21..
 */

public class Conversation {
    public long _id;
    public String item;
    public String translation;
    public String pronunciation;
    public String item_locale;
    public String trs_locale;

    public boolean insert(ContentResolver resolver){
        if(item == null || item.isEmpty() || translation == null || translation.isEmpty() || pronunciation == null || pronunciation.isEmpty()
                || item_locale == null || item_locale.isEmpty() || trs_locale == null || trs_locale.isEmpty())
            return false;
        DBProvider.insert(resolver, item,translation,pronunciation,item_locale,trs_locale);
        return true;
    }

    public static Conversation getItem(Cursor cursor) {
        Conversation item = new Conversation();
        item._id = cursor.getLong(SQLiteUtils.SchemeCvs.Index._id);
        item.item = cursor.getString(SQLiteUtils.SchemeCvs.Index.item);
        item.translation = cursor.getString(SQLiteUtils.SchemeCvs.Index.translation);
        item.pronunciation = cursor.getString(SQLiteUtils.SchemeCvs.Index.pronunciation);
        item.item_locale = cursor.getString(SQLiteUtils.SchemeCvs.Index.item_locale);
        item.trs_locale = cursor.getString(SQLiteUtils.SchemeCvs.Index.trs_locale);
        return item;
    }

    public static boolean insert(MainActivity mActivity, EditText TextCvs, EditText TextTrs, EditText TextPrn, String item_locale, String trs_locale){
        Conversation cvs = new Conversation();
        cvs.item = TextCvs.getText().toString();
        cvs.translation = TextTrs.getText().toString();
        cvs.pronunciation = TextPrn.getText().toString();
        cvs.item_locale = item_locale;
        cvs.trs_locale = trs_locale;
        boolean result = cvs.insert(mActivity.getContentResolver());

        mActivity.mFragment.adapter.changeCursor(DBProvider.getCursor(mActivity.getContentResolver(), DBProvider.cvsUri));
        return result;
    }

    public static boolean update(MainActivity mActivity, long _id, ConcurrentHashMap<Integer, String> target){
        if(target == null || target.isEmpty()){
            return false;
        }
        for(String value : target.values()){
            if(value == null || value.isEmpty())
                return false;
        }
        DBProvider.update(mActivity.getContentResolver(), _id, target);
        return true;
    }

    @Override
    public String toString() {
        return "_id:"+_id+"\nitem:"+item+"\ntranslation:"+translation+"\npronunciation:"+pronunciation+"\nitem_locale:"+item_locale+"\ntrs_locale:"+trs_locale;
    }
}
