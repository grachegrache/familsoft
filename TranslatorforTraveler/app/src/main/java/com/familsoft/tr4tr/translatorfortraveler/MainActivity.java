package com.familsoft.tr4tr.translatorfortraveler;

import android.app.Fragment;
import android.app.FragmentTransaction;
import android.app.LoaderManager;
import android.content.Context;
import android.content.CursorLoader;
import android.content.Loader;
import android.database.Cursor;
import android.databinding.DataBindingUtil;
import android.graphics.Color;
import android.graphics.drawable.ColorDrawable;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.preference.PreferenceManager;
import android.support.v4.view.GravityCompat;
import android.support.v4.widget.DrawerLayout;
import android.support.v7.app.ActionBarDrawerToggle;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.view.ActionMode;
import android.support.v7.view.StandaloneActionMode;
import android.util.Log;
import android.view.View;
import android.view.inputmethod.InputMethodManager;
import android.widget.AdapterView;
import android.widget.ExpandableListView;
import android.widget.Toast;

import com.familsoft.tr4tr.translatorfortraveler.databinding.ActivityMainBinding;
import com.familsoft.tr4tr.translatorfortraveler.fragment.InfoFragment;
import com.familsoft.tr4tr.translatorfortraveler.fragment.MainDialogFragment;
import com.familsoft.tr4tr.translatorfortraveler.fragment.MainFragment;
import com.familsoft.tr4tr.translatorfortraveler.fragment.PrefFragment;
import com.familsoft.tr4tr.translatorfortraveler.func.Bookmark;
import com.familsoft.tr4tr.translatorfortraveler.func.Conversation;
import com.familsoft.tr4tr.translatorfortraveler.func.DBProvider;
import com.familsoft.tr4tr.translatorfortraveler.func.ExpandableListAdapter;
import com.familsoft.tr4tr.translatorfortraveler.func.ExpandedMenuModel;
import com.familsoft.tr4tr.translatorfortraveler.func.SQLiteUtils;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;

public class MainActivity extends AppCompatActivity
        implements LoaderManager.LoaderCallbacks<Cursor> {
    public ArrayList<Locale> locales;
    public MainFragment mFragment;
    public ActivityMainBinding binding;
    public ActionMode mActionMode;
    public InputMethodManager imm;
    public Bundle filter;
    public int scrollTo;
    public int primaryColor;
    public int primaryDarkColor;
    public int accentColor;
    private ExpandableListAdapter mMenuAdapter;
    private List<ExpandedMenuModel> mListMenuHeader;
    private HashMap<ExpandedMenuModel, List<Bookmark>> mListMenuItem;
    boolean isQuit;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        scrollTo = 0;
        isQuit = false;
        filter = null;
        mListMenuHeader = new ArrayList<ExpandedMenuModel>();
        mListMenuItem = new HashMap<ExpandedMenuModel, List<Bookmark>>();
        binding = DataBindingUtil.setContentView(this, R.layout.activity_main);

        setSupportActionBar(binding.appBarMain.toolbar);
//        PreferenceManager.setDefaultValues(this, R.xml.preferences, false);

        primaryColor = Color.parseColor(PreferenceManager.getDefaultSharedPreferences(this).getString("preference_primary_color", "#3f51b5"));
        primaryDarkColor = Color.parseColor(PreferenceManager.getDefaultSharedPreferences(this).getString("preference_primary_dark_color", "#303f9f"));
        accentColor = Color.parseColor(PreferenceManager.getDefaultSharedPreferences(this).getString("preference_accent_color", "#ff3f80"));

        getWindow().setStatusBarColor(primaryColor);
        binding.appBarMain.toolbar.setBackgroundColor(primaryColor);
        binding.navView.getHeaderView(0).setBackgroundColor(primaryDarkColor);

        ActionBarDrawerToggle toggle = new ActionBarDrawerToggle(
                this, binding.drawerLayout, binding.appBarMain.toolbar, R.string.navigation_drawer_open, R.string.navigation_drawer_close);
        binding.drawerLayout.setDrawerListener(toggle);
        toggle.syncState();
//        binding.navView.setNavigationItemSelectedListener(this);

        ExpandedMenuModel menu_bookmark = new ExpandedMenuModel();
        menu_bookmark.setIconName(getResources().getString(R.string.dialog_bookmark));
        menu_bookmark.setIconImg(R.drawable.ic_bookmark_black_24dp);
        mListMenuHeader.add(menu_bookmark);
        ExpandedMenuModel menu_setting = new ExpandedMenuModel();
        menu_setting.setIconName(getResources().getString(R.string.action_settings));
        menu_setting.setIconImg(R.drawable.ic_settings_black_24dp);
        mListMenuHeader.add(menu_setting);

        mMenuAdapter = new ExpandableListAdapter(this, mListMenuHeader, mListMenuItem, binding.navMenu);
        binding.navMenu.setAdapter(mMenuAdapter);
        binding.navMenu.setOnGroupClickListener(new ExpandableListView.OnGroupClickListener() {
            @Override
            public boolean onGroupClick(ExpandableListView parent, View v, int groupPosition, long id) {
                if(groupPosition == 1){
                    // setting
                    scrollTo = mFragment.getScrollPosition();

                    FragmentTransaction ft = getFragmentManager().beginTransaction();
                    ft.replace(R.id.framelayout_main, new PrefFragment());
                    ft.setTransition(android.app.FragmentTransaction.TRANSIT_FRAGMENT_FADE);
                    ft.addToBackStack(null);
                    ft.commit();

                    hideDrawer();
                }
                return false;
            }
        });
        binding.navMenu.setOnChildClickListener(new ExpandableListView.OnChildClickListener() {
            @Override
            public boolean onChildClick(ExpandableListView parent, View v, int groupPosition, int childPosition, long id) {
                Bookmark bookmark = (Bookmark) mMenuAdapter.getChild(groupPosition, childPosition);
                goBookmark(bookmark);

                hideDrawer();
                return false;
            }
        });
        binding.navMenu.setOnItemLongClickListener(new AdapterView.OnItemLongClickListener() {
            @Override
            public boolean onItemLongClick(AdapterView<?> parent, View view, int position, long id) {
                int itemType = ExpandableListView.getPackedPositionType(id);
                boolean retVal = false;

                if (itemType == ExpandableListView.PACKED_POSITION_TYPE_CHILD) {
                    retVal = true;
                    int childPosition = ExpandableListView.getPackedPositionChild(id);
                    int groupPosition = ExpandableListView.getPackedPositionGroup(id);

                    Bookmark child = (Bookmark) mMenuAdapter.getChild(groupPosition, childPosition);
                    FragmentTransaction ft = getFragmentManager().beginTransaction();
                    MainDialogFragment f = new MainDialogFragment();
                    Bundle b = new Bundle();
                    b.putInt("type", MainDialogFragment.BOOKMARK);
                    b.putLong("_id", child._id);
                    b.putString("name", child.name);
                    f.setArguments(b);
                    f.show(ft, null);
                }

                return retVal;
            }
        });

        imm = (InputMethodManager)getSystemService(Context.INPUT_METHOD_SERVICE);

        mFragment = new MainFragment();
        FragmentTransaction ft = getFragmentManager().beginTransaction();
        ft.add(R.id.framelayout_main, mFragment);
        ft.setTransition(FragmentTransaction.TRANSIT_FRAGMENT_FADE);
        ft.commit();

        locales = PrefFragment.getAvailableLanguage();
        mActionMode = null;
    }

    @Override
    protected void onPause() {
        super.onPause();
        hideKeyboard();
    }

    public void setActionModeBackgroundColor(ActionMode actionMode, int color) {
        try {
            StandaloneActionMode standaloneActionMode = (StandaloneActionMode) actionMode;
            Field mContextView = StandaloneActionMode.class.getDeclaredField("mContextView");
            if(!mContextView.isAccessible()) {
                mContextView.setAccessible(true);
            }
            Object value = mContextView.get(standaloneActionMode);
            ((View) value).setBackground(new ColorDrawable(color));
        } catch (Exception ignore) {
            ignore.printStackTrace();
        }
    }

    private void goBookmark(Bookmark bookmark){
        Bundle bundle = new Bundle();
        switch(bookmark.type){
            case SQLiteUtils.SchemeBmk.Type.INFO:
                Conversation item = DBProvider.getConversation(getContentResolver(), bookmark.target);

                bundle.putLong(SQLiteUtils.SchemeCvs.Column._id, item._id);
                bundle.putString(SQLiteUtils.SchemeCvs.Column.item, item.item);
                bundle.putString(SQLiteUtils.SchemeCvs.Column.translation, item.translation);
                bundle.putString(SQLiteUtils.SchemeCvs.Column.pronunciation, item.pronunciation);
                bundle.putString(SQLiteUtils.SchemeCvs.Column.item_locale, item.item_locale);
                bundle.putString(SQLiteUtils.SchemeCvs.Column.trs_locale, item.trs_locale);
                InfoFragment f = new InfoFragment();
                f.setArguments(bundle);

                FragmentTransaction ft = getFragmentManager().beginTransaction();
                ft.replace(R.id.framelayout_main, f);
                ft.setTransition(FragmentTransaction.TRANSIT_FRAGMENT_FADE);
                ft.addToBackStack(null);
                ft.commit();
                break;
            case SQLiteUtils.SchemeBmk.Type.FILTER:
                scrollTo = (int)bookmark.target;
                mFragment.searchView.onActionViewExpanded();
                mFragment.searchView.setQuery(bookmark.filter, false);
                break;
            default:
                break;
        }
    }

    private void loadBookmarks(Cursor data){
        List<Bookmark> list_bookmark = new ArrayList<Bookmark>();

        if(data.moveToFirst()){
            do{
                list_bookmark.add(Bookmark.getItem(data));
            }while(data.moveToNext());
        }

        mListMenuItem.remove(mListMenuHeader.get(0));
        mListMenuItem.put(mListMenuHeader.get(0), list_bookmark);

        mMenuAdapter.notifyDataSetChanged();
    }

    public void updateBookmark(){
        if(getLoaderManager().getLoader(1) == null){
            getLoaderManager().initLoader(1, null, this);
        }else{
            getLoaderManager().restartLoader(1, null, this);
        }
    }

    private void forceLoadConversation(){
        if(getLoaderManager().getLoader(0) == null){
            getLoaderManager().initLoader(0, null, this);
        }else{
            getLoaderManager().restartLoader(0, null, this);
        }
    }

    private void hideDrawer() {
        if(binding.drawerLayout.isDrawerOpen(GravityCompat.START))
            binding.drawerLayout.closeDrawer(GravityCompat.START);
    }

    @Override
    public void onBackPressed() {
        Fragment mCurrentFragment = getFragmentManager().findFragmentById(R.id.framelayout_main);
        if(mCurrentFragment instanceof MainFragment){
            if (binding.drawerLayout.isDrawerOpen(GravityCompat.START)) {
                binding.drawerLayout.closeDrawer(GravityCompat.START);
            } else if(mFragment.searchView.hasFocus()){
                mFragment.searchView.clearFocus();
                mFragment.searchView.onActionViewCollapsed();

            }else if(isQuit){
                super.onBackPressed();
            } else {
                isQuit = true;
                Toast.makeText(this, "Please press back button again to quit.", Toast.LENGTH_SHORT).show();
                new Thread(new Runnable() {
                    @Override
                    public void run() {
                        try {
                            Thread.sleep(2000);
                            isQuit = false;
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                    }
                }).start();

                forceLoadConversation();
            }
            return;
        }

        binding.drawerLayout.setDrawerLockMode(DrawerLayout.LOCK_MODE_UNLOCKED);

        getSupportActionBar().setDisplayHomeAsUpEnabled(false);
        ActionBarDrawerToggle toggle = new ActionBarDrawerToggle(
                this, binding.drawerLayout, binding.appBarMain.toolbar, R.string.navigation_drawer_open, R.string.navigation_drawer_close);
        binding.drawerLayout.setDrawerListener(toggle);
        toggle.syncState();

        hideKeyboard();

        super.onBackPressed();

    }

    public void hideKeyboard(){
        View focused = getCurrentFocus();
        if(focused != null) {
            focused.clearFocus();
            imm.hideSoftInputFromWindow(focused.getWindowToken(), 0);
        }
    }

    //    @Override
//    public boolean dispatchTouchEvent(MotionEvent ev) {
//        if(ev.getAction() == MotionEvent.ACTION_DOWN){
//            View focused = getCurrentFocus();
//            if(focused == null){
//                if(imm.isActive()){
//                    imm.toggleSoftInput(InputMethodManager.SHOW_FORCED, 0);
//                }
//            }else if(focused instanceof AutoCompleteTextView){
//                Fragment mCurrentFragment = getFragmentManager().findFragmentById(R.id.framelayout_main);
//                Rect outRect = new Rect();
//                if(mCurrentFragment instanceof MainFragment){
//                    ((MainFragment) mCurrentFragment).binding.addForm.getGlobalVisibleRect(outRect);
//
//                }else if(mCurrentFragment instanceof InfoFragment){
//                    ((InfoFragment) mCurrentFragment).binding.inputForm.getGlobalVisibleRect(outRect);
//                }
//                if(!outRect.contains((int)ev.getRawX(),(int)ev.getRawY())){
//                    focused.clearFocus();
//                    imm.hideSoftInputFromWindow(focused.getWindowToken(), 0);
//                }
//            }
//        }
//        return super.dispatchTouchEvent(ev);
//    }

    @Override
    public Loader onCreateLoader(int id, Bundle args) {
        Uri uri = null;

        switch (id){
            case 0:
                filter = args;
                if (args == null) {
                    uri = DBProvider.cvsUri;
                } else {
                    uri = Uri.withAppendedPath(DBProvider.filterUri, args.getString("query"));
                }
                break;
            case 1:
                uri = DBProvider.bmkUri;
                break;
            default:
                break;
        }

        CursorLoader cursorLoader = new CursorLoader(this, uri, null,
                null, null, null);

        return cursorLoader;
    }

    @Override
    public void onLoadFinished(Loader loader, final Cursor data) {
        if(data.isClosed())
            return;

        switch (loader.getId()){
            case 0:
                mFragment.adapter.changeCursor(data);
                new Handler().post(new Runnable() {
                    @Override
                    public void run()
                    {
                        try {
                            mFragment.binding.recyclerviewMain.smoothScrollToPosition(scrollTo);
                        }catch(Exception e){
                            e.printStackTrace();
                        }
                    }
                });
                break;
            case 1:
                loadBookmarks(data);
                break;
            default:
                break;
        }
    }

    @Override
    public void onLoaderReset(Loader loader) {
        mFragment.adapter.changeCursor(null);
    }

}
