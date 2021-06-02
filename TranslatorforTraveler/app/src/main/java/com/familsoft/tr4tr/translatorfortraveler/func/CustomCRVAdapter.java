package com.familsoft.tr4tr.translatorfortraveler.func;

import android.app.FragmentTransaction;
import android.content.res.ColorStateList;
import android.database.Cursor;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.support.v7.widget.RecyclerView;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.TextView;
import android.widget.Toast;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;
import com.familsoft.tr4tr.translatorfortraveler.R;
import com.familsoft.tr4tr.translatorfortraveler.fragment.InfoFragment;
import com.familsoft.tr4tr.translatorfortraveler.fragment.MainFragment;

import java.util.ArrayList;
import java.util.Locale;

/**
 * Created by macpro on 2017. 8. 22..
 */

public class CustomCRVAdapter extends CursorRecyclerViewAdapter<CustomCRVAdapter.ViewHolder> {
    public ArrayList<ViewHolder> selected;
    private MainActivity mActivity;

    public CustomCRVAdapter(Cursor cursor, MainFragment mainFragment){
        super(cursor);
        mActivity = (MainActivity) mainFragment.getActivity();
        selected = new ArrayList<>();
    }

    @Override
    public ViewHolder onCreateViewHolder(final ViewGroup parent, int viewType) {
        View itemView = LayoutInflater.from(parent.getContext())
                .inflate(R.layout.listitem_main, parent, false);

        ((CheckBox) itemView.findViewById(R.id.checkBox)).setButtonTintList(new ColorStateList(
            new int[][]{
                    new int[]{-android.R.attr.state_checked}, // unchecked
                    new int[]{android.R.attr.state_checked} , // checked
            },
            new int[]{
                    Color.BLACK,
                    mActivity.accentColor,
            }));
        GradientDrawable gd = new GradientDrawable(
                GradientDrawable.Orientation.LEFT_RIGHT,
                new int[] {0xffffff,mActivity.primaryDarkColor,0xffffff});
        itemView.findViewById(R.id.divider).setBackground(gd);
        ((Button) itemView.findViewById(R.id.buttonSpeak)).setTextColor(mActivity.accentColor);
        return new ViewHolder(itemView);
    }

    @Override
    public void onBindViewHolder(final ViewHolder viewHolder, final Cursor cursor) {
        final Conversation item = Conversation.getItem(cursor);
        viewHolder.mTextCvs.setText(item.item);
        viewHolder.mTextTrs.setText(item.translation);
        viewHolder.mCheckbox.measure(View.MeasureSpec.UNSPECIFIED, View.MeasureSpec.UNSPECIFIED);
        viewHolder.mCheckbox.getLayoutParams().width = viewHolder.mCheckbox.getMeasuredHeight();
        viewHolder.mCvsLocale = new Locale(item.item_locale);
        viewHolder._id = item._id;

        viewHolder.mButtonSpeak.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (TTSUtils.setLanguage(viewHolder.mCvsLocale)) {
                    TTSUtils.speak(viewHolder.mTextCvs.getText().toString());
                } else {
                    Toast.makeText(mActivity, "Can't speak this language!", Toast.LENGTH_SHORT).show();
                }
            }
        });
        viewHolder.mView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(mActivity.mActionMode == null){
                    Bundle bundle = new Bundle();
                    bundle.putLong(SQLiteUtils.SchemeCvs.Column._id, item._id);
                    bundle.putString(SQLiteUtils.SchemeCvs.Column.item, item.item);
                    bundle.putString(SQLiteUtils.SchemeCvs.Column.translation, item.translation);
                    bundle.putString(SQLiteUtils.SchemeCvs.Column.pronunciation, item.pronunciation);
                    bundle.putString(SQLiteUtils.SchemeCvs.Column.item_locale, item.item_locale);
                    bundle.putString(SQLiteUtils.SchemeCvs.Column.trs_locale, item.trs_locale);
                    InfoFragment f = new InfoFragment();
                    f.setArguments(bundle);

                    FragmentTransaction ft = mActivity.getFragmentManager().beginTransaction();
                    ft.replace(R.id.framelayout_main, f);
                    ft.setTransition(FragmentTransaction.TRANSIT_FRAGMENT_FADE);
                    ft.addToBackStack(null);
                    ft.commit();

                }else{
                    toggleCheck(viewHolder);
                }

            }
        });
        viewHolder.mView.setOnLongClickListener(new View.OnLongClickListener() {
            @Override
            public boolean onLongClick(View v) {
                if(mActivity.mActionMode == null){
                    mActivity.mActionMode = mActivity.startSupportActionMode(mActivity.mFragment);
                }

                toggleCheck(viewHolder);
                return true;
            }
        });
    }

    private void toggleCheck(ViewHolder viewHolder){
        viewHolder.mCheckbox.setChecked(!viewHolder.mCheckbox.isChecked());
        if(viewHolder.mCheckbox.isChecked()){
            selected.add(viewHolder);
        }else{
            selected.remove(viewHolder);
        }
        mActivity.mActionMode.setTitle(selected.size() + "/" + getItemCount());
    }

    public static class ViewHolder extends RecyclerView.ViewHolder {
        public View mView;
        public CheckBox mCheckbox;
        public TextView mTextCvs;
        public TextView mTextTrs;
        public Button mButtonSpeak;
        public long _id;
        Locale mCvsLocale;

        public ViewHolder(View view) {
            super(view);
            mView = view;
            mCheckbox = (CheckBox)view.findViewById(R.id.checkBox);
            mTextCvs = (TextView)view.findViewById(R.id.conversation_item);
            mTextTrs = (TextView)view.findViewById(R.id.translation_item);
            mButtonSpeak = (Button)view.findViewById(R.id.buttonSpeak);
        }

    }
}
