package com.familsoft.tr4tr.translatorfortraveler.fragment;

import android.app.Dialog;
import android.app.DialogFragment;
import android.content.res.ColorStateList;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.os.Handler;
import android.support.annotation.NonNull;
import android.view.KeyEvent;
import android.view.View;
import android.view.Window;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputMethodManager;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;
import com.familsoft.tr4tr.translatorfortraveler.R;
import com.familsoft.tr4tr.translatorfortraveler.func.Bookmark;
import com.familsoft.tr4tr.translatorfortraveler.func.DBProvider;
import com.familsoft.tr4tr.translatorfortraveler.func.SQLiteUtils;

/**
 * Created by macpro on 2017. 9. 18..
 */

public class BmkDialogFragment extends DialogFragment implements TextView.OnEditorActionListener {
    public static final int ADD = 1;
    public static final int MODIFY = 2;
    private MainActivity mActivity;
    private Bundle data;
    private int dialog_type;

    @NonNull
    @Override
    public Dialog onCreateDialog(Bundle savedInstanceState) {
        mActivity = (MainActivity) getActivity();
        data = getArguments();
        if(data == null)
            mActivity.onBackPressed();
        dialog_type = data.getInt("dialog_type");

        View v = mActivity.getLayoutInflater().inflate(R.layout.dialogfragment_bmk, new LinearLayout(getActivity()), false);
        final EditText bmkName = (EditText) v.findViewById(R.id.editTextBmkName);
        Button button_ok = (Button) v.findViewById(R.id.button_ok);
        Button button_cancel = (Button) v.findViewById(R.id.button_cancel);

        GradientDrawable gd = new GradientDrawable(
                GradientDrawable.Orientation.LEFT_RIGHT,
                new int[] {0xffffff,mActivity.primaryDarkColor,0xffffff});
        v.findViewById(R.id.divider1).setBackground(gd);
        bmkName.setOnEditorActionListener(this);
        bmkName.setBackgroundTintList(new ColorStateList(new int[][]{new int[]{-android.R.attr.state_focused}, new int[]{android.R.attr.state_focused}}, new int[]{Color.BLACK,mActivity.accentColor}));
        MainFragment.setCursorColor(bmkName, mActivity.accentColor);
        MainFragment.setHandlesColor(bmkName, mActivity.accentColor);
        v.findViewById(R.id.divider2).setBackgroundColor(mActivity.primaryDarkColor);
        button_ok.setTextColor(mActivity.accentColor);
        button_cancel.setTextColor(mActivity.accentColor);

        switch (dialog_type){
            case ADD:
                button_ok.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        onClickOK(bmkName);
                    }
                });
                break;
            case MODIFY:
                final String name = data.getString("name");

                ((TextView) v.findViewById(R.id.title)).setText(R.string.dialog_bmk_modify);
                bmkName.setText(name);

                button_ok.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        onClickOK(bmkName);
                    }
                });
                break;
            default:
                break;
        }


        button_cancel.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(mActivity.imm.isActive()) {
                    bmkName.clearFocus();
                    mActivity.imm.hideSoftInputFromWindow(bmkName.getWindowToken(), 0);
                }
                dismiss();
            }
        });

        Dialog builder = new Dialog(mActivity);
        builder.requestWindowFeature(Window.FEATURE_NO_TITLE);
        builder.setContentView(v);

        new Handler().postDelayed(new Runnable() {
            @Override
            public void run() {
                bmkName.requestFocusFromTouch();
                mActivity.imm.showSoftInput(bmkName, InputMethodManager.SHOW_FORCED);
            }
        }, 100);

        return builder;
    }

    private void onClickOK(EditText bmkName){
        String name = bmkName.getText().toString();
        if(name == null || name.isEmpty()){
            Toast.makeText(mActivity, "Name is empty!", Toast.LENGTH_SHORT).show();
        }else {
            switch(dialog_type){
                case ADD:
                    final int type = data.getInt(SQLiteUtils.SchemeBmk.Column.type);
                    final long target = data.getLong(SQLiteUtils.SchemeBmk.Column.target);
                    final String filter = data.getString(SQLiteUtils.SchemeBmk.Column.filter);
                    Bookmark.insert(mActivity, name, type, target, filter);
                    break;
                case MODIFY:
                    final long _id = data.getLong("_id");
                    DBProvider.update(mActivity.getContentResolver(), _id, name);
                    break;
                default:
                    return;
            }

            mActivity.updateBookmark();
            if(mActivity.imm.isActive()) {
                bmkName.clearFocus();
                mActivity.imm.hideSoftInputFromWindow(bmkName.getWindowToken(), 0);
            }
            dismiss();
        }

    }

    @Override
    public boolean onEditorAction(TextView v, int actionId, KeyEvent event) {
        switch (v.getId()){
            case R.id.editTextBmkName:
                if(actionId == EditorInfo.IME_ACTION_DONE){
                    onClickOK((EditText) v);
                }
                break;

        }

        return false;
    }
}
