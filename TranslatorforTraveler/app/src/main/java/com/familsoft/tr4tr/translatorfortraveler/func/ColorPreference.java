package com.familsoft.tr4tr.translatorfortraveler.func;

import android.app.Activity;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.os.Handler;
import android.preference.Preference;
import android.preference.PreferenceFragment;
import android.support.annotation.ColorInt;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;
import com.familsoft.tr4tr.translatorfortraveler.fragment.PrefFragment;
import com.pes.androidmaterialcolorpickerdialog.ColorPicker;
import com.pes.androidmaterialcolorpickerdialog.ColorPickerCallback;

/**
 * Created by macpro on 2017. 10. 26..
 */

public class ColorPreference extends Preference {
    private int mColor;
    private boolean isCreated = false;

    public ColorPreference(Context context, AttributeSet attrs, int defStyleAttr, int defStyleRes) {
        super(context, attrs, defStyleAttr, defStyleRes);
    }

    public ColorPreference(Context context, AttributeSet attrs, int defStyleAttr) {
        super(context, attrs, defStyleAttr);
    }

    public ColorPreference(Context context, AttributeSet attrs) {
        super(context, attrs);
    }

    public ColorPreference(Context context) {
        super(context);
    }

    @Override
    protected View onCreateView(ViewGroup parent) {
        final View v = super.onCreateView(parent);
        if(!isCreated) {
            isCreated = true;
            String currentValue = getSharedPreferences().getString(getKey(), null);
            if (currentValue == null) {
                if (getKey().contains("primary_color")) {
                    currentValue = "#3f51b5";
                } else if (getKey().contains("primary_dark_color")) {
                    currentValue = "#303f9f";
                } else if (getKey().contains("accent_color")) {
                    currentValue = "#ff3f80";
                }
            }
            mColor = Color.parseColor(currentValue);
        }
        v.setBackgroundColor(mColor);
        return v;
    }

    @Override
    protected void onClick() {
        super.onClick();
        final ColorPicker cp = new ColorPicker((Activity) getContext(), Color.red(mColor), Color.green(mColor), Color.blue(mColor));
        cp.setTitle("Picking a color");
        cp.setCallback(new ColorPickerCallback() {
            @Override
            public void onColorChosen(@ColorInt int color) {
                mColor = color;
                String colorStr = String.format("#%06X", (0xFFFFFF & mColor));
                getSharedPreferences().edit().putString(getKey(), colorStr).apply();
                cp.dismiss();

                PrefFragment.mActivity.getFragmentManager()
                        .beginTransaction()
                        .detach(PrefFragment.getInstance())
                        .attach(PrefFragment.getInstance()).commit();
            }

        });
        cp.show();
    }

}
