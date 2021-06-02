package com.familsoft.tr4tr.translatorfortraveler.fragment;

import android.content.Context;
import android.content.res.Configuration;
import android.graphics.drawable.ColorDrawable;
import android.os.Build;
import android.os.Bundle;
import android.preference.ListPreference;
import android.preference.PreferenceCategory;
import android.preference.PreferenceManager;
import android.support.annotation.Nullable;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;
import com.familsoft.tr4tr.translatorfortraveler.R;
import com.ibm.icu.lang.UScript;

import android.preference.PreferenceFragment;
import android.support.annotation.RequiresApi;
import android.support.v4.widget.DrawerLayout;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.inputmethod.InputMethodInfo;
import android.view.inputmethod.InputMethodManager;
import android.view.inputmethod.InputMethodSubtype;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Locale;

/**
 * Created by macpro on 2017. 8. 22..
 */

public class PrefFragment extends PreferenceFragment {
    public static MainActivity mActivity;
    private static PrefFragment instance;

    public static PrefFragment getInstance(){
        return instance;
    }

    public PrefFragment(){
        instance = this;
    }

    @Override
    public void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        mActivity = (MainActivity) getActivity();
        mActivity.hideKeyboard();
        addPreferencesFromResource(R.xml.preferences);

        CharSequence[] entries = new CharSequence[mActivity.locales.size()];
        CharSequence[] entryValues = new CharSequence[mActivity.locales.size()];
        for(int i=0;i<mActivity.locales.size();i++){
            entries[i] = mActivity.locales.get(i).getDisplayLanguage();
            entryValues[i] = mActivity.locales.get(i).getLanguage();
        }
        ListPreference listPreference = (ListPreference) findPreference("list_preference_trs_locale");
        listPreference.setEntries(entries);
        listPreference.setEntryValues(entryValues);

        mActivity.binding.drawerLayout.setDrawerLockMode(DrawerLayout.LOCK_MODE_LOCKED_CLOSED);

        mActivity.binding.appBarMain.toolbar.setNavigationIcon(null);
        mActivity.getSupportActionBar().setDisplayHomeAsUpEnabled(true);
        mActivity.binding.appBarMain.toolbar.setNavigationOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                mActivity.onBackPressed();
            }
        });

    }

//    public static Locale getCurrentInputLanguage(MainActivity mActivity){
//        InputMethodSubtype ims = mActivity.imm.getCurrentInputMethodSubtype();
//        String locale = ims.getLocale();
//        return locale;
//    }

    public static void getScriptOfLocale(Locale locale, ArrayList<Integer> out) {
        int[] code;
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.N) {
            code = android.icu.lang.UScript.getCode(locale);
        }else{
            code = com.ibm.icu.lang.UScript.getCode(locale);
        }
        if (code != null) {
            out.clear();
            for(int i : code){
                out.add(i);
            }
        }
    }

    public static void getScriptOfLocale(String locale, ArrayList<Integer> out) {
        int[] code;
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.N) {
            code = android.icu.lang.UScript.getCode(locale);
        }else{
            code = com.ibm.icu.lang.UScript.getCode(locale);
        }
        if (code != null) {
            out.clear();
            for(int i : code){
                out.add(i);
            }
        }
    }

    public static ArrayList<Integer> getScriptsOfString(String s){
        ArrayList<Integer> scripts = new ArrayList<>();
        char[] chars = s.toCharArray();
        int script;

        for(int i=0; i<chars.length; i++){
            script = getScriptOfChar(chars[i]);
            if(script != UScript.COMMON && !scripts.contains(script))
                scripts.add(script);
        }
        return scripts;
    }

    public static int getScriptOfChar(char ch){
        int code = -1;
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.N) {
             code = android.icu.lang.UScript.getScript(ch);
        }else{
            code = com.ibm.icu.lang.UScript.getScript(ch);
        }
        return code;
    }

    public static ArrayList<Locale> getAvailableLanguage()
    {
        ArrayList<String> languages = new ArrayList<String>();
        ArrayList<Locale> locales = new ArrayList<Locale>();
        for(Locale temp : Locale.getAvailableLocales())
        {
            if(temp.getDisplayLanguage() == null || Character.isLowerCase(temp.getDisplayLanguage().charAt(0)))
                continue;
            if(!languages.contains(temp.getLanguage())) {
                languages.add(temp.getLanguage());
                locales.add(temp);
            }
        }
        return locales;
    }

}
