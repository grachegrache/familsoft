package com.familsoft.tr4tr.translatorfortraveler.func;

import android.content.Context;
import android.graphics.Color;
import android.preference.PreferenceCategory;
import android.preference.PreferenceManager;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

/**
 * Created by macpro on 2017. 10. 26..
 */

public class ColoredPreferenceCategory extends PreferenceCategory {
    public ColoredPreferenceCategory(Context context) {
        super(context);
    }

    public ColoredPreferenceCategory(Context context, AttributeSet attrs) {
        super(context, attrs);
    }

    public ColoredPreferenceCategory(Context context, AttributeSet attrs,
                                int defStyle) {
        super(context, attrs, defStyle);
    }

    @Override
    protected View onCreateView(ViewGroup parent) {
        View v = super.onCreateView(parent);
        TextView titleView = (TextView) v.findViewById(android.R.id.title);
        int accentColor = Color.parseColor(PreferenceManager.getDefaultSharedPreferences(getContext()).getString("preference_accent_color", "#ff3f80"));
        titleView.setTextColor(accentColor);
        return v;
    }
}