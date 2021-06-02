package com.familsoft.tr4tr.translatorfortraveler.func;

import android.content.ContentProvider;
import android.content.ContentResolver;
import android.content.ContentUris;
import android.content.ContentValues;
import android.content.UriMatcher;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.net.Uri;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.util.Log;

import java.util.Map;
import java.util.StringTokenizer;
import java.util.concurrent.ConcurrentHashMap;

/**
 * Created by macpro on 2017. 9. 8..
 */

public class DBProvider extends ContentProvider {
    private static final String authority = "SQLiteUtils";
    public static final Uri cvsUri = Uri.parse("content://"+authority+"/"+SQLiteUtils.tableName[0]);
    public static final Uri bmkUri = Uri.parse("content://"+authority+"/"+SQLiteUtils.tableName[1]);
    public static final Uri filterUri = Uri.withAppendedPath(cvsUri, "filter");
    public static final Uri infoUri = Uri.withAppendedPath(bmkUri, "info");
    private static String[] projectionCvs = {"_id","item","translation","pronunciation","item_locale","trs_locale"};
    private static String[] projectionBmk = {"_id","type","target","filter"};
    private SQLiteUtils sqLiteUtils;
    private SQLiteDatabase db;
    private UriMatcher uriMatcher;

    @Override
    public boolean onCreate() {
        sqLiteUtils = new SQLiteUtils(getContext());
        db = sqLiteUtils.getWritableDatabase();
        uriMatcher = new UriMatcher(UriMatcher.NO_MATCH);
        uriMatcher.addURI(authority, SQLiteUtils.tableName[0], 1);
        uriMatcher.addURI(authority, SQLiteUtils.tableName[0]+"/#", 2);
        uriMatcher.addURI(authority, SQLiteUtils.tableName[0]+"/filter/*", 3);
        uriMatcher.addURI(authority, SQLiteUtils.tableName[1], 4);
        uriMatcher.addURI(authority, SQLiteUtils.tableName[1]+"/#", 5);
        uriMatcher.addURI(authority, SQLiteUtils.tableName[1]+"/info/*", 6);
        return true;
    }

    @Nullable
    @Override
    public Cursor query(@NonNull Uri uri, @Nullable String[] projection, @Nullable String selection, @Nullable String[] selectionArgs, @Nullable String sortOrder) {
        int match = uriMatcher.match(uri);
        long _id;
        String table;

        switch (match){
            case 1:
                table = SQLiteUtils.tableName[0];
                break;
            case 2:
                table = SQLiteUtils.tableName[0];
                _id = ContentUris.parseId(uri);
                if(_id >= 0)
                    selection = SQLiteUtils.SchemeCvs.Column._id+"="+_id;
                break;
            case 3:
                table = SQLiteUtils.tableName[0];
                String filter = "";
                StringTokenizer st = new StringTokenizer(uri.getLastPathSegment());
                while(st.hasMoreTokens()){
                    filter += " %"+st.nextToken()+"%";
                }
                String filterTmp = "'" + filter.substring(1) + "'";
                selection = SQLiteUtils.SchemeCvs.Column.item + " LIKE " + filterTmp + " or "
                        + SQLiteUtils.SchemeCvs.Column.translation + " LIKE " + filterTmp + " or "
                        + SQLiteUtils.SchemeCvs.Column.pronunciation + " LIKE " + filterTmp + " or ";
                filterTmp = "'" + filter.substring(2) + "'";
                selection += SQLiteUtils.SchemeCvs.Column.item + " LIKE " + filterTmp + " or "
                        + SQLiteUtils.SchemeCvs.Column.translation + " LIKE " + filterTmp + " or "
                        + SQLiteUtils.SchemeCvs.Column.pronunciation + " LIKE " + filterTmp + " or ";
                filterTmp = "'" + filter.substring(1, filter.length()-1)+"'";
                selection += SQLiteUtils.SchemeCvs.Column.item + " LIKE " + filterTmp + " or "
                        + SQLiteUtils.SchemeCvs.Column.translation + " LIKE " + filterTmp + " or "
                        + SQLiteUtils.SchemeCvs.Column.pronunciation + " LIKE " + filterTmp;
                break;
            case 4:
                table = SQLiteUtils.tableName[1];
                break;
            case 5:
                table = SQLiteUtils.tableName[1];
                _id = ContentUris.parseId(uri);
                if(_id >= 0)
                    selection = SQLiteUtils.SchemeBmk.Column._id+"="+_id;
                break;
            case 6:
                table = SQLiteUtils.tableName[1];
                selection = SQLiteUtils.SchemeBmk.Column.type+"="+SQLiteUtils.SchemeBmk.Type.INFO+" and "
                        +SQLiteUtils.SchemeBmk.Column.target+"="+uri.getLastPathSegment();
                break;
            default:
                throw new UnsupportedOperationException();
        }

        return sqLiteUtils.getReadableDatabase().query(table, projection, selection, selectionArgs, null, null, sortOrder);
    }

    @Nullable
    @Override
    public String getType(@NonNull Uri uri) {
        int match = uriMatcher.match(uri);
        switch (match){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                throw new UnsupportedOperationException();
        }
        return null;
    }

    @Nullable
    @Override
    public Uri insert(@NonNull Uri uri, @Nullable ContentValues values) {
        int match = uriMatcher.match(uri);
        String table;
        switch (match){
            case 1:
                table = SQLiteUtils.tableName[0];
                break;
            case 2:
                table = SQLiteUtils.tableName[0];
                break;
            case 4:
                table = SQLiteUtils.tableName[1];
                break;
            case 5:
                table = SQLiteUtils.tableName[1];
                break;
            default:
                throw new UnsupportedOperationException();
        }

        long rowId = db.insert(table, null, values);
        uri = ContentUris.withAppendedId(uri, rowId);
        getContext().getContentResolver().notifyChange(uri, null);
        return uri;
    }

    @Override
    public int delete(@NonNull Uri uri, @Nullable String selection, @Nullable String[] selectionArgs) {
        int match = uriMatcher.match(uri);
        String table;
        long _id = -1;
        switch (match){
            case 1:
                table = SQLiteUtils.tableName[0];
                break;
            case 2:
                table = SQLiteUtils.tableName[0];
                _id = ContentUris.parseId(uri);
                selection = SQLiteUtils.SchemeCvs.Column._id+"="+_id;
                break;
            case 4:
                table = SQLiteUtils.tableName[1];
                break;
            case 5:
                table = SQLiteUtils.tableName[1];
                _id = ContentUris.parseId(uri);
                selection = SQLiteUtils.SchemeCvs.Column._id+"="+_id;
                break;
//            case 6:
//                table = SQLiteUtils.tableName[1];
//                selection = SQLiteUtils.SchemeBmk.Column.type+"="+SQLiteUtils.SchemeBmk.Type.INFO+" and "
//                        +SQLiteUtils.SchemeBmk.Column.target+"="+uri.getLastPathSegment();
//                break;
            default:
                throw new UnsupportedOperationException();
        }

        if(_id < 0)
            throw new UnsupportedOperationException();
        return db.delete(table, selection, selectionArgs);
    }

    @Override
    public int update(@NonNull Uri uri, @Nullable ContentValues values, @Nullable String selection, @Nullable String[] selectionArgs) {
        int match = uriMatcher.match(uri);
        String table;
        long _id = -1;
        switch (match){
            case 1:
                table = SQLiteUtils.tableName[0];
                break;
            case 2:
                table = SQLiteUtils.tableName[0];
                _id = ContentUris.parseId(uri);
                break;
            case 5:
                table = SQLiteUtils.tableName[1];
                _id = ContentUris.parseId(uri);
                break;
            default:
                throw new UnsupportedOperationException();
        }

        if(_id < 0)
            throw new UnsupportedOperationException();
        return db.update(table, values, SQLiteUtils.SchemeCvs.Column._id+"="+_id, selectionArgs);
    }

    public static void insert(ContentResolver resolver, String item, String translation, String pronunciation, String item_locale, String trs_locale) {
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put(SQLiteUtils.SchemeCvs.Column.item, item);
            contentValues.put(SQLiteUtils.SchemeCvs.Column.translation, translation);
            contentValues.put(SQLiteUtils.SchemeCvs.Column.pronunciation, pronunciation);
            contentValues.put(SQLiteUtils.SchemeCvs.Column.item_locale, item_locale);
            contentValues.put(SQLiteUtils.SchemeCvs.Column.trs_locale, trs_locale);
            resolver.insert(cvsUri, contentValues);
        }catch(Exception e){
            e.printStackTrace();
        }
    }

    public static void insert(ContentResolver resolver, String name, int type, long target){
        insert(resolver, name, type, target, null);
    }
    public static void insert(ContentResolver resolver, String name, int type, long target, String filter){
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put(SQLiteUtils.SchemeBmk.Column.name, name);
            contentValues.put(SQLiteUtils.SchemeBmk.Column.type, type);
            contentValues.put(SQLiteUtils.SchemeBmk.Column.target, target);
            if(type == SQLiteUtils.SchemeBmk.Type.FILTER){
                contentValues.put(SQLiteUtils.SchemeBmk.Column.filter, filter);
            }
            resolver.insert(bmkUri, contentValues);
        }catch(Exception e){
            e.printStackTrace();
        }
    }

    public static void update(ContentResolver resolver, final long _id, ConcurrentHashMap<Integer, String> hashMap) {
        try {
            ContentValues contentValues = new ContentValues();
            for(Map.Entry<Integer, String> e : hashMap.entrySet()){
                contentValues.put(SQLiteUtils.tableMapCvs.get(e.getKey()), e.getValue());
            }
            resolver.update(ContentUris.withAppendedId(cvsUri, _id), contentValues, null, null);
        }catch (Exception e){
            e.printStackTrace();
        }
    }

    public static void update(ContentResolver resolver, final long _id, String name){
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put(SQLiteUtils.SchemeBmk.Column.name, name);
            resolver.update(ContentUris.withAppendedId(bmkUri, _id), contentValues, null, null);
        }catch (Exception e){
            e.printStackTrace();
        }
    }

    public static void delete(ContentResolver resolver, Uri table, long _id) {
        try {
            resolver.delete(ContentUris.withAppendedId(table, _id), null, null);
        }catch (Exception e){
            e.printStackTrace();
        }
    }

    public static Cursor getCursor(ContentResolver resolver, Uri table) {
        Cursor c = null;
        try {
            String[] prj = null;
            if(table.equals(bmkUri)){
                prj = projectionBmk;
            }else if(table.equals(cvsUri)){
                prj = projectionCvs;
            }
            if(prj != null)
                c = resolver.query(table, prj, null, null, null);
        }catch (Exception e){
            e.printStackTrace();
        }
        return c;
    }

    public static Conversation getConversation(ContentResolver resolver, long _id) {
        Conversation item = null;

        try {
            Cursor c = resolver.query(ContentUris.withAppendedId(cvsUri, _id), projectionCvs, null, null, null);
            if (c != null && c.moveToFirst()) {
                item = new Conversation();
                item._id = c.getLong(SQLiteUtils.SchemeCvs.Index._id);
                item.item = c.getString(SQLiteUtils.SchemeCvs.Index.item);
                item.translation = c.getString(SQLiteUtils.SchemeCvs.Index.translation);
                item.pronunciation = c.getString(SQLiteUtils.SchemeCvs.Index.pronunciation);
                item.item_locale = c.getString(SQLiteUtils.SchemeCvs.Index.item_locale);
                item.trs_locale = c.getString(SQLiteUtils.SchemeCvs.Index.trs_locale);

            }

        }catch(Exception e){
            e.printStackTrace();
        }
        return item;
    }

    public static boolean removeBookmarks(ContentResolver resolver, long cvs_id){
        try{
            Cursor c = resolver.query(Uri.withAppendedPath(DBProvider.infoUri, cvs_id+""), projectionBmk, null, null, null);
            if(c.moveToFirst()){
                do{
                    delete(resolver, bmkUri, c.getLong(SQLiteUtils.SchemeBmk.Index._id));
                }while(c.moveToNext());
            }
        }catch (Exception e){
            e.printStackTrace();
            return false;
        }

        return true;
    }
}
