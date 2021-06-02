package com.familsoft.tr4tr.translatorfortraveler.func;

import android.content.ContentResolver;
import android.database.Cursor;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;

/**
 * Created by macpro on 2017. 9. 18..
 */

public class Bookmark {
    public long _id;
    public String name;
    public int type;
    public long target;
    public String filter;

    public Bookmark(){
        type = -1;
        target = -1;
    }

    public boolean insert(ContentResolver resolver){
        if(name == null || name.isEmpty() || type < 0 || target < 0 || (type == SQLiteUtils.SchemeBmk.Type.FILTER && filter == null)){
            return false;
        }
        DBProvider.insert(resolver, name,type,target,filter);
        return true;
    }

    public static Bookmark getItem(Cursor cursor) {
        Bookmark item = new Bookmark();
        item._id = cursor.getLong(SQLiteUtils.SchemeBmk.Index._id);
        item.name = cursor.getString(SQLiteUtils.SchemeBmk.Index.name);
        item.type = cursor.getInt(SQLiteUtils.SchemeBmk.Index.type);
        item.target = cursor.getLong(SQLiteUtils.SchemeBmk.Index.target);
        item.filter = cursor.getString(SQLiteUtils.SchemeBmk.Index.filter);
        return item;
    }

    public static boolean insert(MainActivity mActivity, String name, int type, long target, String filter){
        Bookmark bmk = new Bookmark();
        bmk.name = name;
        bmk.type = type;
        bmk.target = target;
        bmk.filter = filter;
        boolean result = bmk.insert(mActivity.getContentResolver());

        return result;
    }

    @Override
    public String toString() {
        return "_id:"+_id+"\nname:"+name+"\ntype:"+type+"\ntarget:"+target+"\nfilter:"+filter;
    }
}
