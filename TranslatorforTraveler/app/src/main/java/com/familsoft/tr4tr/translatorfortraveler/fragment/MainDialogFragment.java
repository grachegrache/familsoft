package com.familsoft.tr4tr.translatorfortraveler.fragment;

import android.annotation.SuppressLint;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.DialogFragment;
import android.app.FragmentTransaction;
import android.content.DialogInterface;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.view.ActionMode;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.Button;
import android.widget.LinearLayout;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;
import com.familsoft.tr4tr.translatorfortraveler.R;
import com.familsoft.tr4tr.translatorfortraveler.func.Bookmark;
import com.familsoft.tr4tr.translatorfortraveler.func.DBProvider;
import com.familsoft.tr4tr.translatorfortraveler.func.SQLiteUtils;

/**
 * Created by macpro on 2017. 8. 22..
 */

public class MainDialogFragment extends DialogFragment {
    public static final int CONVERSATION = 1;
    public static final int BOOKMARK = 2;
    private MainActivity mActivity;

    @NonNull
    @Override
    public Dialog onCreateDialog(Bundle savedInstanceState) {
        mActivity = (MainActivity) getActivity();

        Bundle b = getArguments();
        final int type = b.getInt("type");

        View v = mActivity.getLayoutInflater().inflate(R.layout.dialogfragment_main, new LinearLayout(getActivity()), false);
        Button button_add = (Button) v.findViewById(R.id.button_add);
        Button button_remove = (Button) v.findViewById(R.id.button_remove);

        GradientDrawable gd = new GradientDrawable(
                GradientDrawable.Orientation.LEFT_RIGHT,
                new int[] {0xffffff,mActivity.primaryDarkColor,0xffffff});
        v.findViewById(R.id.divider).setBackground(gd);
        button_add.setTextColor(mActivity.accentColor);
        button_remove.setTextColor(mActivity.accentColor);

        switch(type){
            case CONVERSATION:
                button_add.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        FragmentTransaction ft = getFragmentManager().beginTransaction();
                        ft.replace(R.id.framelayout_main, new InfoFragment());
                        ft.setTransition(FragmentTransaction.TRANSIT_FRAGMENT_FADE);
                        ft.addToBackStack(null);
                        ft.commit();
                        dismiss();
                    }
                });

                button_remove.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        mActivity.mActionMode = mActivity.startSupportActionMode(mActivity.mFragment);
                        mActivity.mActionMode.setTitle(mActivity.mFragment.adapter.selected.size() + "/" + mActivity.mFragment.adapter.getItemCount());
                        dismiss();
                    }

                });
                break;
            case BOOKMARK:
                final long _id = b.getLong("_id");
                final String name = b.getString("name");

                button_add.setText(R.string.dialog_modify);
                button_add.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        FragmentTransaction ft = getFragmentManager().beginTransaction();
                        BmkDialogFragment f = new BmkDialogFragment();
                        Bundle b = new Bundle();
                        b.putInt("dialog_type", BmkDialogFragment.MODIFY);
                        b.putLong("_id", _id);
                        b.putString("name", name);
                        f.setArguments(b);
                        f.show(ft, null);
                        dismiss();
                    }
                });

                button_remove.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        new AlertDialog.Builder(mActivity)
                            .setTitle(R.string.dialog_delete_bmk_title)
                            .setMessage(R.string.dialog_delete_bmk_msg)
                            .setPositiveButton(R.string.dialog_ok, new DialogInterface.OnClickListener() {
                                @Override
                                public void onClick(DialogInterface dialog, int which) {
                                DBProvider.delete(mActivity.getContentResolver(), DBProvider.bmkUri, _id);
                                mActivity.updateBookmark();
                                mActivity.onBackPressed();
                                }
                            }).setNegativeButton(R.string.dialog_cancel, new DialogInterface.OnClickListener() {
                                @Override
                                public void onClick(DialogInterface dialog, int which) {

                                }
                        }).show();
                        dismiss();
                    }

                });

                break;
            default:
                break;
        }


        Dialog builder = new Dialog(mActivity);
        builder.requestWindowFeature(Window.FEATURE_NO_TITLE);
        builder.getWindow().setBackgroundDrawable(new ColorDrawable(android.graphics.Color.TRANSPARENT));
        builder.setContentView(v);
        return builder;
    }

}
