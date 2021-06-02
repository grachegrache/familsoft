package com.familsoft.tr4tr.translatorfortraveler.func;

import android.content.Context;
import android.database.Cursor;
import android.database.DataSetObserver;
import android.os.Handler;
import android.support.v4.widget.CursorAdapter;
import android.support.v7.widget.RecyclerView;
import android.text.TextUtils;
import android.util.Log;
import android.util.SparseIntArray;
import android.view.View;
import android.view.ViewGroup;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/**
 * Created by macpro on 2017. 8. 22..
 */

public abstract class CursorRecyclerViewAdapter<VH extends RecyclerView.ViewHolder> extends RecyclerView.Adapter<VH> {
    private static final int INSERTED = 1;
    private static final int REMOVED = 2;
    private static final int CHANGED = 3;
    private static final int ALL = -1;

    private final String[] mComparisonColumn;
    private final DataSetObserver mDataSetObserver;
    private Cursor mCursor;
    private boolean mDataValid;
    private int mRowIdColumn;
    private ArrayList<Integer> afterChanges;

    public CursorRecyclerViewAdapter(){this(null);}
    public CursorRecyclerViewAdapter(Cursor cursor) {
        this(cursor, null);
    }
    public CursorRecyclerViewAdapter(Cursor cursor, String[] comparisonColumn) {
        mCursor = cursor;
        mComparisonColumn = comparisonColumn == null ? new String[]{"item", "translation"} : comparisonColumn;
        mDataValid = cursor != null;
        mRowIdColumn = mDataValid ? mCursor.getColumnIndex("_id") : -1;
        mDataSetObserver = new NotifyingDataSetObserver();
        afterChanges = new ArrayList<>();

        if (mCursor != null) {
            mCursor.registerDataSetObserver(mDataSetObserver);
        }

    }

    public Cursor getCursor() {
        return mCursor;
    }

    @Override
    public int getItemCount() {
        if (mDataValid && mCursor != null) {
            return mCursor.getCount();
        }
        return 0;
    }

    @Override
    public long getItemId(int position) {
        if (mDataValid && mCursor != null && mCursor.moveToPosition(position)) {
            return mCursor.getLong(mRowIdColumn);
        }
        return 0;
    }

    public abstract void onBindViewHolder(VH viewHolder, Cursor cursor);

    @Override
    public void onBindViewHolder(VH viewHolder, int position) {
        if (!mDataValid) {
            throw new IllegalStateException("this should only be called when the cursor is valid");
        }
        if (!mCursor.moveToPosition(position)) {
            throw new IllegalStateException("couldn't move cursor to position " + position);
        }
        onBindViewHolder(viewHolder, mCursor);
    }

    /**
     * Change the underlying cursor to a new cursor. If there is an existing cursor it will be
     * closed.
     */
    public void changeCursor(Cursor cursor) {
        try {
            if (mCursor == null) {
                swapCursor(cursor, null);

            } else {
                afterChanges.clear();
                SparseIntArray changes = null;

                if (cursor != null && cursor != mCursor && mComparisonColumn != null) {
                    changes = diffCursors(mCursor, cursor);
                }
                Cursor old = swapCursor(cursor, changes);

                if (old != null) {
                    old.close();
                }

            }
        }catch(Exception e){
            e.printStackTrace();
        }
    }

    /**
     * Processes two cursors, old/existing cursor and a new cursor, returning a list of indexes who's
     * records were inserted, deleted, or changed
     * @param oldCursor
     * @param newCursor
     * @return
     */
    private SparseIntArray diffCursors(Cursor oldCursor, Cursor newCursor) {
        SparseIntArray changedOrInserted = getChangeOrInsertRecords(oldCursor, newCursor);
        // all records were inserted in new cursor
        if (changedOrInserted.get(ALL) == INSERTED) {
            return changedOrInserted;
        }

        SparseIntArray deleted = getDeletedRecords(oldCursor, newCursor);
        if (deleted.get(ALL) == INSERTED) {
            return deleted;
        }

        SparseIntArray changes = new SparseIntArray(changedOrInserted.size() + deleted.size());
        for (int i = 0; i < changedOrInserted.size(); i++) {
            changes.put(changedOrInserted.keyAt(i), changedOrInserted.valueAt(i));
        }

        for (int i = 0; i < deleted.size(); i++) {
            changes.put(deleted.keyAt(i), deleted.valueAt(i));
        }
        return changes;
    }

    /**
     * Returns a list of indexes of records that were deleted
     * May also return whether or not ALL records were inserted
     * @param oldCursor
     * @param newCursor
     * @return
     */
    private SparseIntArray getDeletedRecords(Cursor oldCursor, Cursor newCursor) {
        SparseIntArray changes = new SparseIntArray();
        int newCursorPosition = newCursor.getPosition();

        if (oldCursor.moveToFirst()) {
            int cursorIndex = 0;

            // loop old cursor
            do {
                if (newCursor.moveToFirst()) {
                    boolean oldRecordFound = false;

                    // loop new cursor
                    do {
                        // we found a record match
                        if (oldCursor.getLong(mRowIdColumn) == newCursor.getLong(mRowIdColumn)) {
                            oldRecordFound = true;
                            break;
                        }
                    } while(newCursor.moveToNext());

                    if (!oldRecordFound){
                        changes.put(cursorIndex, REMOVED);
                    }
                    cursorIndex++;
                }

            } while (oldCursor.moveToNext());
        }

        // unable to move the old cursor to the first record, all records in new were adde
        else {
            changes.put(ALL, INSERTED);
        }
        newCursor.moveToPosition(newCursorPosition);
        return changes;
    }

    /**
     * Returns an array of indexes who's records were newly inserted or changed
     * Will also return whether or not all the records were inserted or removed
     * @param oldCursor
     * @param newCursor
     * @return
     */
    private SparseIntArray getChangeOrInsertRecords(Cursor oldCursor, Cursor newCursor) {
        SparseIntArray changes = new SparseIntArray();
        int newCursorPosition = newCursor.getPosition();
        int[] columnIndex = new int[mComparisonColumn.length];
        for(int i=0;i<mComparisonColumn.length;i++)
            columnIndex[i] = oldCursor.getColumnIndex(mComparisonColumn[i]);

        if (newCursor.moveToFirst()) {
            int cursorIndex = 0;

            do {
                if (oldCursor.moveToFirst()) {
                    boolean newRecordFound = false;

                    do {
                        // we found a record match
                        if (oldCursor.getLong(mRowIdColumn) == newCursor.getLong(mRowIdColumn)) {
                            newRecordFound = true;
                            if(oldCursor.getPosition() != newCursor.getPosition()){
                                afterChanges.add(cursorIndex);
                            }else {
                                // values are different, this record has changed
                                for (int i = 0; i < mComparisonColumn.length; i++) {
                                    if (!oldCursor.getString(columnIndex[i]).contentEquals(newCursor.getString(columnIndex[i]))) {
                                        changes.put(cursorIndex, CHANGED);
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                    } while (oldCursor.moveToNext());

                    // new record not found in old cursor, it was newly inserted
                    if (!newRecordFound) {
                        changes.put(cursorIndex, INSERTED);
                    }
                    cursorIndex++;
                }

                // unable to move the new cursor, all records in new are inserted
                else {
                    changes.put(ALL, INSERTED);
                    break;
                }
            } while (newCursor.moveToNext());
        } else {         // unable to move new cursor to first
            changes.put(ALL, REMOVED);
        }
        newCursor.moveToPosition(newCursorPosition);
        return changes;
    }

    /**
     *
     * @param newCursor
     * @param changes
     * @return
     */
    private Cursor swapCursor(final Cursor newCursor, final SparseIntArray changes) {
        if (newCursor == mCursor) {
            return null;
        }
        final Cursor oldCursor = mCursor;

        if (oldCursor != null && mDataSetObserver != null) {
            oldCursor.unregisterDataSetObserver(mDataSetObserver);
        }
        mCursor = newCursor;

        if (mCursor != null) {
            if (mDataSetObserver != null) {
                mCursor.registerDataSetObserver(mDataSetObserver);
            }
            mRowIdColumn = newCursor.getColumnIndexOrThrow("_id");
            mDataValid = true;
        } else {
            mRowIdColumn = -1;
            mDataValid = false;
        }

        try {
            if (changes != null) {
                // process changes
                if (changes.get(ALL) == INSERTED) {
                    notifyItemRangeInserted(0, newCursor.getCount());
                } else if (changes.get(ALL) == REMOVED) {
                    notifyItemRangeRemoved(0, oldCursor.getCount());
                } else {
                    for (int i = 0; i < changes.size(); i++) {
                        switch (changes.valueAt(i)) {
                            case CHANGED:
                                notifyItemChanged(changes.keyAt(i));
                                break;
                            case INSERTED:
                                notifyItemInserted(changes.keyAt(i));
                                break;
                            case REMOVED:
                                notifyItemRemoved(changes.keyAt(i));
                                break;
                        }
                    }
                    for (int i = 0; i < afterChanges.size(); i++) {
                        notifyItemChanged(afterChanges.get(i));
                    }
                }
            } else if (mCursor != null) {
                notifyItemRangeInserted(0, mCursor.getCount());
            }
        }catch(Exception e){
            e.printStackTrace();
        }
        return oldCursor;
    }

    private class NotifyingDataSetObserver extends DataSetObserver {
        @Override
        public void onChanged() {
            super.onChanged();
            mDataValid = true;
        }

        @Override
        public void onInvalidated() {
            super.onInvalidated();
            mDataValid = false;
        }
    }


}
