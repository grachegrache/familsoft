package com.familsoft.tr4tr.translatorfortraveler.fragment;

import android.app.AlertDialog;
import android.app.Fragment;
import android.app.FragmentTransaction;
import android.app.Notification;
import android.content.DialogInterface;
import android.content.res.ColorStateList;
import android.databinding.DataBindingUtil;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.preference.PreferenceManager;
import android.support.annotation.Nullable;
import android.support.design.widget.TextInputLayout;
import android.support.v4.widget.DrawerLayout;
import android.support.v7.view.ActionMode;
import android.text.Editable;
import android.text.TextWatcher;
import android.util.Log;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputMethodManager;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;
import com.familsoft.tr4tr.translatorfortraveler.R;
import com.familsoft.tr4tr.translatorfortraveler.databinding.FragmentInfoBinding;
import com.familsoft.tr4tr.translatorfortraveler.func.Conversation;
import com.familsoft.tr4tr.translatorfortraveler.func.DBProvider;
import com.familsoft.tr4tr.translatorfortraveler.func.SQLiteUtils;
import com.ibm.icu.lang.UScript;

import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Locale;
import java.util.Stack;
import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.ConcurrentHashMap;

/**
 * Created by macpro on 2017. 8. 22..
 */

public class InfoFragment extends Fragment implements ActionMode.Callback, TextView.OnEditorActionListener, AdapterView.OnItemSelectedListener{
    public FragmentInfoBinding binding;

    private MainActivity mActivity;
    private ConcurrentHashMap<Integer, String> changed;
    private SpinnerAdapter spinnerCvsAdapter, spinnerTrsAdapter;
    private long _id;
    private boolean isData;

    @Nullable
    @Override
    public View onCreateView(LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        setHasOptionsMenu(true);
        mActivity = (MainActivity) getActivity();
        changed = new ConcurrentHashMap<Integer, String>();

        mActivity.binding.drawerLayout.setDrawerLockMode(DrawerLayout.LOCK_MODE_LOCKED_CLOSED);

        mActivity.binding.appBarMain.toolbar.setNavigationIcon(null);
        mActivity.getSupportActionBar().setDisplayHomeAsUpEnabled(true);
        mActivity.binding.appBarMain.toolbar.setNavigationOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                mActivity.onBackPressed();
            }
        });

        binding = DataBindingUtil.inflate(inflater, R.layout.fragment_info, container, false);
        View v = binding.getRoot();

        ColorStateList editTextColor = new ColorStateList(
                new int[][]{
                        new int[]{-android.R.attr.state_focused},
                        new int[]{android.R.attr.state_focused}},
                new int[]{
                        Color.BLACK,
                        mActivity.accentColor
                });
        binding.EditTextCvs.setBackgroundTintList(editTextColor);
        binding.EditTextTrs.setBackgroundTintList(editTextColor);
        binding.EditTextPrn.setBackgroundTintList(editTextColor);
        MainFragment.setCursorColor(binding.EditTextCvs, mActivity.accentColor);
        MainFragment.setCursorColor(binding.EditTextTrs, mActivity.accentColor);
        MainFragment.setCursorColor(binding.EditTextPrn, mActivity.accentColor);
        MainFragment.setHandlesColor(binding.EditTextCvs, mActivity.accentColor);
        MainFragment.setHandlesColor(binding.EditTextTrs, mActivity.accentColor);
        MainFragment.setHandlesColor(binding.EditTextPrn, mActivity.accentColor);
        setUpperHintColor(binding.inputLayoutCvs, mActivity.accentColor);
        setUpperHintColor(binding.inputLayoutTrs, mActivity.accentColor);
        setUpperHintColor(binding.inputLayoutPrn, mActivity.accentColor);

        GradientDrawable gd = new GradientDrawable(
                GradientDrawable.Orientation.TOP_BOTTOM,
                new int[] {mActivity.primaryDarkColor,mActivity.primaryColor});
        binding.buttonBookmark.setBackground(gd);
        binding.buttonBookmark.setTextColor(mActivity.accentColor);

        Bundle bundle = getArguments();
        String defaultCvs, defaultTrs;
        if(bundle == null){
            isData = false;
            defaultCvs =
                    PreferenceManager.getDefaultSharedPreferences(mActivity).getString("list_preference_trs_locale","en");
            defaultTrs = Locale.getDefault().getLanguage();

            binding.buttonBookmark.setText(R.string.dialog_add);
            binding.buttonBookmark.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    addoredit();
                }
            });
        }else{
            isData = true;
            _id = bundle.getLong(SQLiteUtils.SchemeCvs.Column._id);
            defaultCvs = bundle.getString(SQLiteUtils.SchemeCvs.Column.item_locale);
            defaultTrs = bundle.getString(SQLiteUtils.SchemeCvs.Column.trs_locale);

            binding.buttonBookmark.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    Bundle b = new Bundle();
                    b.putInt("dialog_type", BmkDialogFragment.ADD);
                    b.putInt(SQLiteUtils.SchemeBmk.Column.type, SQLiteUtils.SchemeBmk.Type.INFO);
                    b.putLong(SQLiteUtils.SchemeBmk.Column.target, _id);
                    BmkDialogFragment f = new BmkDialogFragment();
                    f.setArguments(b);

                    FragmentTransaction ft = getFragmentManager().beginTransaction();
                    f.show(ft, null);
                }
            });

            mActivity.hideKeyboard();
        }

        // spinners
        spinnerCvsAdapter = new SpinnerAdapter(mActivity, binding.EditTextCvs, binding.spinnerCvs, defaultCvs);
        spinnerTrsAdapter = new SpinnerAdapter(mActivity, binding.EditTextTrs, binding.spinnerTrs, defaultTrs);
        binding.spinnerCvs.setEnabled(false);
        binding.spinnerTrs.setEnabled(false);
        binding.spinnerCvs.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                return spinnerCvsAdapter.isTaskRunning;
            }
        });
        binding.spinnerTrs.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                return spinnerTrsAdapter.isTaskRunning;
            }
        });
        binding.spinnerCvs.setOnItemSelectedListener(this);
        binding.spinnerTrs.setOnItemSelectedListener(this);

        //edittexts
        binding.EditTextCvs.addTextChangedListener(new CustomTextWatcher(SQLiteUtils.SchemeCvs.Index.item));
        binding.EditTextTrs.addTextChangedListener(new CustomTextWatcher(SQLiteUtils.SchemeCvs.Index.translation));
        binding.EditTextPrn.addTextChangedListener(new CustomTextWatcher(SQLiteUtils.SchemeCvs.Index.pronunciation));
        binding.EditTextCvs.setOnEditorActionListener(this);
        binding.EditTextTrs.setOnEditorActionListener(this);
        binding.EditTextPrn.setOnEditorActionListener(this);

        if(bundle == null) {
            mActivity.mActionMode = mActivity.startSupportActionMode(this);
        } else {
            binding.EditTextCvs.setText(bundle.getString(SQLiteUtils.SchemeCvs.Column.item));
            binding.EditTextTrs.setText(bundle.getString(SQLiteUtils.SchemeCvs.Column.translation));
            binding.EditTextPrn.setText(bundle.getString(SQLiteUtils.SchemeCvs.Column.pronunciation));
        }

        return v;
    }

    public void setUpperHintColor(TextInputLayout textInputLayout, int color) {
        try {
            Field field = textInputLayout.getClass().getDeclaredField("mFocusedTextColor");
            if(!field.isAccessible()) {
                field.setAccessible(true);
            }
            field.set(textInputLayout, ColorStateList.valueOf(color));

            Method method = textInputLayout.getClass().getDeclaredMethod("updateLabelState", boolean.class);
            if(!method.isAccessible()) {
                method.setAccessible(true);
            }
            method.invoke(textInputLayout, true);

        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void onDestroyView() {
        if(spinnerCvsAdapter.handler.hasMessages(0))
            spinnerCvsAdapter.handler.removeMessages(0);
        if(spinnerTrsAdapter.handler.hasMessages(0))
            spinnerTrsAdapter.handler.removeMessages(0);
        super.onDestroyView();
    }

    @Override
    public void onCreateOptionsMenu(Menu menu, MenuInflater inflater) {
        inflater.inflate(R.menu.info, menu);
        super.onCreateOptionsMenu(menu, inflater);
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        int item_id = item.getItemId();
        switch (item_id){
            case R.id.action_edit:
                mActivity.mActionMode = mActivity.startSupportActionMode(this);
                break;
            case R.id.action_delete:
                new AlertDialog.Builder(mActivity)
                        .setTitle(R.string.dialog_delete_title)
                        .setMessage(R.string.dialog_delete_msg)
                        .setPositiveButton(R.string.dialog_ok, new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                DBProvider.delete(mActivity.getContentResolver(), DBProvider.cvsUri, _id);
                                DBProvider.removeBookmarks(mActivity.getContentResolver(), _id);
                                mActivity.onBackPressed();
                            }
                        }).setNegativeButton(R.string.dialog_cancel, new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {

                    }
                }).show();


                break;

        }
        return super.onOptionsItemSelected(item);
    }

    // action mode
    @Override
    public boolean onCreateActionMode(ActionMode mode, Menu menu) {
        mode.getMenuInflater().inflate(R.menu.addoredit, menu);
        mActivity.setActionModeBackgroundColor(mode, mActivity.primaryColor);
        return true;
    }

    @Override
    public boolean onPrepareActionMode(ActionMode mode, Menu menu)
    {
        if(isData) {
            mode.setTitle(R.string.action_edit_cvs_title);
            binding.buttonBookmark.setText(R.string.action_edit);
            binding.buttonBookmark.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    addoredit();
                }
            });
        }else{
            mode.setTitle(R.string.action_add_cvs_title);
        }

        changed.clear();
        binding.EditTextCvs.setFocusableInTouchMode(true);
        binding.EditTextTrs.setFocusableInTouchMode(true);
        binding.EditTextPrn.setFocusableInTouchMode(true);
        binding.spinnerCvs.setEnabled(true);
        binding.spinnerTrs.setEnabled(true);

        new Handler().post(new Runnable() {
            @Override
            public void run() {
                binding.EditTextCvs.requestFocusFromTouch();
                binding.EditTextCvs.setSelection(binding.EditTextCvs.length());
                mActivity.imm.showSoftInput(binding.EditTextCvs, InputMethodManager.SHOW_FORCED);
            }
        });

        return true;
    }

    @Override
    public boolean onActionItemClicked(ActionMode mode, MenuItem item)
    {
        if(item.getItemId() == R.id.action_addoredit){
            addoredit();
            return true;
        }
        return false;
    }

    private void addoredit(){
        boolean isSet = true;
        isSet &= validate(binding.EditTextCvs, binding.inputLayoutCvs, R.string.err_msg_cvs);
        isSet &= validate(binding.EditTextTrs, binding.inputLayoutTrs, R.string.err_msg_trs);
        isSet &= validate(binding.EditTextPrn, binding.inputLayoutPrn, R.string.err_msg_prn);

        if(binding.spinnerCvs.getSelectedItemPosition() < 1 || binding.spinnerTrs.getSelectedItemPosition() < 1){
            isSet = false;

        }else if(!spinnerCvsAdapter.list.isEmpty() && !spinnerTrsAdapter.list.isEmpty()){
            if (isData == false) {
                isSet = Conversation.insert(mActivity,
                        binding.EditTextCvs, binding.EditTextTrs, binding.EditTextPrn,
                        spinnerCvsAdapter.list.get(binding.spinnerCvs.getSelectedItemPosition()-1).lang.getLanguage(),
                        spinnerTrsAdapter.list.get(binding.spinnerTrs.getSelectedItemPosition()-1).lang.getLanguage());

            } else if(!changed.isEmpty()) {
                for (Integer key : changed.keySet()) {
                    String value = null;
                    switch(key){
                        case SQLiteUtils.SchemeCvs.Index.item:
                            value = binding.EditTextCvs.getText().toString();
                            break;
                        case SQLiteUtils.SchemeCvs.Index.translation:
                            value = binding.EditTextTrs.getText().toString();
                            break;
                        case SQLiteUtils.SchemeCvs.Index.pronunciation:
                            value = binding.EditTextPrn.getText().toString();
                            break;
                        case SQLiteUtils.SchemeCvs.Index.item_locale:
                            value = spinnerCvsAdapter.list.get(binding.spinnerCvs.getSelectedItemPosition()-1).lang.getLanguage();
                            break;
                        case SQLiteUtils.SchemeCvs.Index.trs_locale:
                            value = spinnerTrsAdapter.list.get(binding.spinnerTrs.getSelectedItemPosition()-1).lang.getLanguage();
                            break;
                    }
                    changed.put(key, value);
                }
                isSet = Conversation.update(mActivity, _id, changed);
                changed.clear();
            }
        }

        if(isSet) {
            mActivity.mActionMode.finish();
        }else{
            Toast.makeText(mActivity, R.string.info_set_all, Toast.LENGTH_SHORT).show();
        }
    }

    private boolean validate(EditText input, TextInputLayout inputLayout, int err_msg){
        if(input.getText().toString().trim().isEmpty()){
            inputLayout.setError(getString(err_msg));
            return false;
        }else{
            inputLayout.setErrorEnabled(false);
            return true;
        }
    }

    @Override
    public void onDestroyActionMode(ActionMode mode) {
        mActivity.mActionMode = null;
        if(isData == false){
            mActivity.onBackPressed();
        }

        binding.EditTextCvs.setFocusable(false);
        binding.EditTextTrs.setFocusable(false);
        binding.EditTextPrn.setFocusable(false);
        binding.EditTextCvs.setFocusableInTouchMode(false);
        binding.EditTextTrs.setFocusableInTouchMode(false);
        binding.EditTextPrn.setFocusableInTouchMode(false);
        binding.spinnerCvs.setEnabled(false);
        binding.spinnerTrs.setEnabled(false);

        mActivity.hideKeyboard();

        binding.buttonBookmark.setText(R.string.dialog_bookmark);
        binding.buttonBookmark.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Bundle b = new Bundle();
                b.putInt("dialog_type", BmkDialogFragment.ADD);
                b.putInt(SQLiteUtils.SchemeBmk.Column.type, SQLiteUtils.SchemeBmk.Type.INFO);
                b.putLong(SQLiteUtils.SchemeBmk.Column.target, _id);
                BmkDialogFragment f = new BmkDialogFragment();
                f.setArguments(b);

                FragmentTransaction ft = getFragmentManager().beginTransaction();
                f.show(ft, null);
            }
        });

        // back to original
        int index;
        if(!changed.isEmpty()){
            for(Integer key : changed.keySet()){
                switch(key){
                    case SQLiteUtils.SchemeCvs.Index.item:
                        binding.EditTextCvs.setText(changed.get(key));
                        break;
                    case SQLiteUtils.SchemeCvs.Index.translation:
                        binding.EditTextTrs.setText(changed.get(key));
                        break;
                    case SQLiteUtils.SchemeCvs.Index.pronunciation:
                        binding.EditTextPrn.setText(changed.get(key));
                        break;
                    case SQLiteUtils.SchemeCvs.Index.item_locale:
                        index = spinnerCvsAdapter.getDefaultPosition();
                        if(index >= 0){
                            binding.spinnerCvs.setSelection(index);
                        }
                        break;
                    case SQLiteUtils.SchemeCvs.Index.trs_locale:
                        index = spinnerTrsAdapter.getDefaultPosition();
                        if(index >= 0){
                            binding.spinnerTrs.setSelection(index);
                        }
                        break;
                }
            }

        }

    }

    // ime action
    @Override
    public boolean onEditorAction(TextView v, int actionId, KeyEvent event) {
        switch (v.getId()){
            case R.id.EditTextCvs:
                if(actionId == EditorInfo.IME_ACTION_NEXT){
                    if(spinnerCvsAdapter.handler.hasMessages(0)){
                        spinnerCvsAdapter.handler.removeMessages(0);
                        spinnerCvsAdapter.handler.sendEmptyMessage(0);
                    }
                    binding.EditTextTrs.setSelection(binding.EditTextTrs.length());
                }
                break;
            case R.id.EditTextTrs:
                if(actionId == EditorInfo.IME_ACTION_NEXT){
                    if(spinnerTrsAdapter.handler.hasMessages(0)){
                        spinnerTrsAdapter.handler.removeMessages(0);
                        spinnerTrsAdapter.handler.sendEmptyMessage(0);
                    }
                    binding.EditTextPrn.setSelection(binding.EditTextPrn.length());
                }
                break;
            case R.id.EditTextPrn:
                if(actionId == EditorInfo.IME_ACTION_DONE){
                    v.clearFocus();
                    mActivity.imm.hideSoftInputFromWindow(v.getWindowToken(), 0);
                    addoredit();
                }
                break;

        }

        return false;
    }

    // spinner item
    @Override
    public void onItemSelected(AdapterView<?> parent, View view, int position, long id) {
        SpinnerAdapter spinnerAdapter = null;
        Integer column = null;
        if(parent.getId() == R.id.spinnerCvs){
            spinnerAdapter = spinnerCvsAdapter;
            column = SQLiteUtils.SchemeCvs.Index.item_locale;
        }else if(parent.getId() == R.id.spinnerTrs){
            spinnerAdapter = spinnerTrsAdapter;
            column = SQLiteUtils.SchemeCvs.Index.trs_locale;
        }

        if (spinnerAdapter != null) {
            if (position > 0 && spinnerAdapter.list.size() > position-1) {
                if (spinnerAdapter.defaultLocale.equals(spinnerAdapter.list.get(position-1).lang.getLanguage())) {
                    if (changed.containsKey(column)) {
                        changed.remove(column);
                    }
                } else {
                    if (!changed.containsKey(column)) {
                        changed.put(column, "");
                    }
                }
            }
        }

    }

    @Override
    public void onNothingSelected(AdapterView<?> parent) {
    }

    // edittext watcher
    class CustomTextWatcher implements TextWatcher {
        private int column;

        public CustomTextWatcher(int column){
            this.column = column;
        }

        @Override
        public void beforeTextChanged(CharSequence s, int start, int count, int after) {
            if(s == null || s.length() == 0)
                return;
            if(!changed.containsKey(column)){
                changed.put(column, s.toString());
            }

        }

        @Override
        public void onTextChanged(CharSequence s, int start, int before, int count) {
        }

        @Override
        public void afterTextChanged(Editable s) {
            if(changed.containsKey(column)){
                if(changed.get(column).equals(s.toString()))
                    changed.remove(column);
            }

            switch (column){
                    case SQLiteUtils.SchemeCvs.Index.item:
                        if(spinnerCvsAdapter.handler.hasMessages(0)){
                            spinnerCvsAdapter.handler.removeMessages(0);
                        }
                        spinnerCvsAdapter.handler.sendEmptyMessageDelayed(0, 1000);
                        break;
                    case SQLiteUtils.SchemeCvs.Index.translation:
                        if(spinnerTrsAdapter.handler.hasMessages(0)){
                            spinnerTrsAdapter.handler.removeMessages(0);
                        }
                        spinnerTrsAdapter.handler.sendEmptyMessageDelayed(0, 1000);
                        break;
                }
        }
    }

    class SpinnerAdapter{
        private EditText text;
        private ArrayAdapter adapter;     // spinner adapter
        private ArrayList<String> adapterList;
        private ArrayList<Lang> list;           // languages
        private MainActivity mActivity;
        private Handler handler;
        private String defaultLocale;
        private boolean isTaskRunning;

        public SpinnerAdapter(final MainActivity mActivity, final EditText text, final Spinner spinner, String defaultLocale){
            this.mActivity = mActivity;
            this.text = text;
            list = new ArrayList<Lang>();
            adapterList = new ArrayList<String>();
            isTaskRunning = false;
            this.defaultLocale = defaultLocale;

            handler = new Handler(){
                @Override
                public void handleMessage(Message msg) {
                    switch (msg.what){
                        case 0:
                            isTaskRunning = true;
                            setLanguages();
                            if (adapterList.size() > 1) {
                                spinner.setSelection(1);
                            } else if(adapterList.size() > 0){
                                spinner.setSelection(0);
                            }
                            adapter.notifyDataSetChanged();
                            isTaskRunning = false;
                            break;
                        default:
                            break;
                    }
                }
            };
            adapterList.add("select...");
            adapter = new ArrayAdapter(mActivity, android.R.layout.simple_spinner_item, adapterList);
            adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            adapter.setNotifyOnChange(false);
            spinner.setAdapter(adapter);
        }

        public int getDefaultPosition()
        {
            return list.indexOf(new Lang(defaultLocale));
        }

        private void setLanguages(){
            ArrayList<Integer> scripts = PrefFragment.getScriptsOfString(text.getText().toString());
            final ArrayList<String> back = new ArrayList<String>();
            back.addAll(adapterList);
            ArrayList<Integer> scripts_locale = new ArrayList<Integer>();
            float p;

            list.clear();
            adapterList.clear();
            adapterList.add("select...");

            if(scripts.isEmpty())
                return;

            for(Locale locale : mActivity.locales){
                PrefFragment.getScriptOfLocale(locale, scripts_locale);

                if(scripts_locale.containsAll(scripts)) {
                    p = (float)scripts.size()/scripts_locale.size();
                    if(locale.getLanguage().equals(defaultLocale)) {
                        p += 0.5;
                    }
                    list.add(new Lang(locale, p));
                    adapterList.add(locale.getDisplayLanguage());

                }
            }

            if(!back.equals(adapterList)){
                if(!list.isEmpty()) {
                    Collections.sort(list, Lang.comparator);
                    matchList();
                }
            }

        }

        private void matchList(){
            for (int i = 0; i < list.size(); i++) {
                String src = adapterList.get(i+1);
                String dst = list.get(i).lang.getDisplayLanguage();
                if (src.equals(dst))
                    continue;
                int index_dst = adapterList.indexOf(dst);
                adapterList.set(i+1, dst);
                adapterList.set(index_dst, src);
            }
        }

    }

    public static class Lang {
        public Locale lang;
        public float potentiality;
        private static Comparator<Lang> comparator = new Comparator<Lang>() {
            @Override
            public int compare(Lang o1, Lang o2) {
                if(o1.potentiality > o2.potentiality)
                    return -1;
                else if(o1.potentiality < o2.potentiality)
                    return 1;
                else {
                    return o1.lang.getDisplayLanguage().compareTo(o2.lang.getDisplayLanguage());
                }
            }
        };

        public Lang(){}
        public Lang(String lang){
            this(lang, 1);
        }
        public Lang(Locale locale){
            this(locale, 1);
        }

        public Lang(String lang, float p){
            this.lang = new Locale(lang);
            potentiality = p;
        }

        public Lang(Locale lang, float p){
            this.lang = lang;
            potentiality = p;
        }

        @Override
        public boolean equals(Object obj) {
            if(obj instanceof Lang)
                return lang.getDisplayLanguage().equals(((Lang) obj).lang.getDisplayLanguage());
            else if(obj instanceof String)
                return lang.getDisplayLanguage().equals(obj);
            else
                return false;
        }

        @Override
        public int hashCode() {
            return lang.hashCode();
        }

        public static Comparator<Lang> getComparator() {
            return comparator;
        }
    }

}
