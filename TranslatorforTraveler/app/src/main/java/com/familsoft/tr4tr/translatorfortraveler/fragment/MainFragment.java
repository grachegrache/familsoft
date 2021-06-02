package com.familsoft.tr4tr.translatorfortraveler.fragment;

import android.app.Fragment;
import android.app.FragmentTransaction;
import android.databinding.DataBindingUtil;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.os.Handler;
import android.support.annotation.Nullable;
import android.support.v7.view.ActionMode;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.SearchView;
import android.widget.TextView;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;
import com.familsoft.tr4tr.translatorfortraveler.R;
import com.familsoft.tr4tr.translatorfortraveler.databinding.FragmentMainBinding;
import com.familsoft.tr4tr.translatorfortraveler.func.CustomCRVAdapter;
import com.familsoft.tr4tr.translatorfortraveler.func.DBProvider;
import com.familsoft.tr4tr.translatorfortraveler.func.LLMWithSmoothScroller;
import com.familsoft.tr4tr.translatorfortraveler.func.SQLiteUtils;
import com.familsoft.tr4tr.translatorfortraveler.func.TTSUtils;

import java.lang.reflect.Field;

/**
 * Created by macpro on 2017. 8. 22..
 */

public class MainFragment extends Fragment implements ActionMode.Callback{
//        , TextView.OnEditorActionListener {
    public CustomCRVAdapter adapter;
    public FragmentMainBinding binding;
    public SearchView searchView;
    private MainActivity mActivity;

//    private Animation rotation[];
//    private boolean isExpanded;

    @Nullable
    @Override
    public View onCreateView(LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        setHasOptionsMenu(true);
        mActivity = (MainActivity) getActivity();
//        isExpanded = false;
        binding = DataBindingUtil.inflate(inflater, R.layout.fragment_main, container, false);
        View v = binding.getRoot();
//        binding.autoCompleteTextViewCvs.setOnEditorActionListener(this);
//        binding.autoCompleteTextViewTrs.setOnEditorActionListener(this);
//        binding.autoCompleteTextViewPrn.setOnEditorActionListener(this);
//
//        rotation = new Animation[2];
//        rotation[0] = AnimationUtils.loadAnimation(mActivity, R.anim.button_rotate_90);
//        rotation[1] = AnimationUtils.loadAnimation(mActivity, R.anim.button_rotate_90r);

//        binding.buttonExpand.measure(View.MeasureSpec.UNSPECIFIED, View.MeasureSpec.UNSPECIFIED);
//        binding.buttonExpand.getLayoutParams().width = binding.buttonExpand.getMeasuredHeight();
//        binding.buttonExpand.setOnClickListener(new View.OnClickListener() {
//            @Override
//            public void onClick(View v) {
//                int i;
//                if(isExpanded){
//                    i = 1;
//                    collapse(binding.expandableInfo);
//                    binding.autoCompleteTextViewCvs.setImeOptions(EditorInfo.IME_ACTION_DONE);
//                }else{
//                    i = 0;
//                    expand(binding.expandableInfo);
//                    binding.autoCompleteTextViewCvs.setImeOptions(EditorInfo.IME_ACTION_NEXT);
//                }
//
//                mActivity.imm.restartInput(binding.autoCompleteTextViewCvs);
//                binding.buttonExpand.clearAnimation();
//                binding.buttonExpand.startAnimation(rotation[i]);
//                isExpanded = !isExpanded;
//            }
//        });

//        Button button = (Button) v.findViewById(R.id.button_add);
//        button.setOnClickListener(new View.OnClickListener() {
//            @Override
//            public void onClick(View v) {
//                Conversation.insert(mActivity, binding.autoCompleteTextViewCvs, binding.autoCompleteTextViewTrs, binding.autoCompleteTextViewPrn);
//            }
//        });

        adapter = new CustomCRVAdapter(null, this);
        LinearLayoutManager llm = new LLMWithSmoothScroller(mActivity);
        binding.recyclerviewMain.setLayoutManager(llm);
        binding.recyclerviewMain.setAdapter(adapter);
        binding.recyclerviewMain.addOnScrollListener(new RecyclerView.OnScrollListener() {
            @Override
            public void onScrolled(RecyclerView recyclerView, int dx, int dy) {
                super.onScrolled(recyclerView, dx, dy);
                LinearLayoutManager llm = (LinearLayoutManager) recyclerView.getLayoutManager();
                int pos;
                if(dy > 0){
                    pos = llm.findLastCompletelyVisibleItemPosition();
                }else if(dy < 0){
                    pos = llm.findFirstCompletelyVisibleItemPosition();
                }else{
                    return;
                }

                View view = llm.findViewByPosition(pos);
                if(view != null) {
                    CheckBox checkBox = (CheckBox) view.findViewById(R.id.checkBox);
                    if (mActivity.mActionMode == null) {
                        if (checkBox.getVisibility() != View.INVISIBLE) {
                            checkBox.setVisibility(View.INVISIBLE);
                        }
                    } else {
                        if (checkBox.getVisibility() != View.VISIBLE) {
                            checkBox.setVisibility(View.VISIBLE);
                        }
                    }
                }

                mActivity.scrollTo = getScrollPosition();
            }
        });

        GradientDrawable gd = new GradientDrawable(
                GradientDrawable.Orientation.TOP_BOTTOM,
                new int[] {mActivity.primaryDarkColor,mActivity.primaryColor});
        binding.buttonAdd.setBackground(gd);
        binding.buttonAdd.setTextColor(mActivity.accentColor);
        binding.buttonAdd.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(mActivity.filter == null) {
                    FragmentTransaction ft = getFragmentManager().beginTransaction();
                    ft.replace(R.id.framelayout_main, new InfoFragment());
                    ft.setTransition(FragmentTransaction.TRANSIT_FRAGMENT_FADE);
                    ft.addToBackStack(null);
                    ft.commit();
                }else{
                    BmkDialogFragment f = new BmkDialogFragment();
                    Bundle b = new Bundle();
                    b.putInt("dialog_type", BmkDialogFragment.ADD);
                    b.putInt(SQLiteUtils.SchemeBmk.Column.type, SQLiteUtils.SchemeBmk.Type.FILTER);
                    b.putLong(SQLiteUtils.SchemeBmk.Column.target, getScrollPosition());
                    b.putString(SQLiteUtils.SchemeBmk.Column.filter, mActivity.filter.getString("query"));
                    f.setArguments(b);

                    FragmentTransaction ft = getFragmentManager().beginTransaction();
                    f.show(ft, null);
                }
            }
        });

        TTSUtils.initialize(mActivity);
        return v;

    }

    public int getScrollPosition(){
        LinearLayoutManager llm = (LinearLayoutManager) binding.recyclerviewMain.getLayoutManager();
        return llm.findFirstCompletelyVisibleItemPosition();
    }

    @Override
    public void onResume() {
        super.onResume();
        if(getLoaderManager().getLoader(0) == null){
            if(binding.buttonAdd.getText().toString().contentEquals("Bookmark")){
                binding.buttonAdd.setText(R.string.dialog_add);
            }
            getLoaderManager().initLoader(0, null, mActivity);

        }else{
            String filter = "";
            if(mActivity.filter != null){
                filter = mActivity.filter.getString("query");
            }
            final String query = filter;
            new Handler().post(new Runnable() {
                @Override
                public void run()
                {
                    if(query != "")
                        searchView.onActionViewExpanded();
                    searchView.setQuery(query, false);
                }
            });

        }

        mActivity.updateBookmark();
    }

    @Override
    public void onCreateOptionsMenu(Menu menu, MenuInflater inflater) {
        inflater.inflate(R.menu.main, menu);
        MenuItem searchItem = menu.findItem(R.id.action_search);
        searchView = (SearchView) searchItem.getActionView();
        int id_edittext = searchView.getContext()
                .getResources()
                .getIdentifier("android:id/search_src_text", null, null);
        EditText searchEditText = (EditText) searchView.findViewById(id_edittext);
        setCursorColor(searchEditText, mActivity.accentColor);
        setHandlesColor(searchEditText, mActivity.accentColor);

        searchView.setOnQueryTextListener(new SearchView.OnQueryTextListener() {
            @Override
            public boolean onQueryTextSubmit(String query)
            {
                return false;
            }

            @Override
            public boolean onQueryTextChange(String query)
            {
                Bundle bundle = null;

                if(query == null || query.trim().isEmpty()) {
                    if(binding.buttonAdd.getText().toString().contentEquals("Bookmark")){
                        binding.buttonAdd.setText(R.string.dialog_add);
                    }
                    mActivity.scrollTo = 0;
                }else {
                    if (binding.buttonAdd.getText().toString().contentEquals("Add")) {
                        binding.buttonAdd.setText(R.string.dialog_bookmark);
                    }
                    bundle = new Bundle();
                    bundle.putString("query", query);
                }
                getLoaderManager().restartLoader(0, bundle, mActivity);
                return false;
            }
        });
        super.onCreateOptionsMenu(menu, inflater);
    }

    public static void setCursorColor(EditText editText, int color) {
        try {
            Field fCursorDrawableRes = TextView.class.getDeclaredField("mCursorDrawableRes");
            if(!fCursorDrawableRes.isAccessible()) {
                fCursorDrawableRes.setAccessible(true);
            }

            int mCursorDrawableRes = fCursorDrawableRes.getInt(editText);
            Field fEditor = TextView.class.getDeclaredField("mEditor");
            if(!fEditor.isAccessible()) {
                fEditor.setAccessible(true);
            }

            Object editor = fEditor.get(editText);
            Class<?> clazz = editor.getClass();
            Field fCursorDrawable = clazz.getDeclaredField("mCursorDrawable");
            if(!fCursorDrawable.isAccessible()) {
                fCursorDrawable.setAccessible(true);
            }

            Drawable[] drawables = new Drawable[2];
            drawables[0] = editText.getContext().getResources().getDrawable(mCursorDrawableRes, null);
            drawables[1] = editText.getContext().getResources().getDrawable(mCursorDrawableRes, null);
            drawables[0].setColorFilter(color, PorterDuff.Mode.SRC_IN);
            drawables[1].setColorFilter(color, PorterDuff.Mode.SRC_IN);
            fCursorDrawable.set(editor, drawables);
        }catch(Exception e){
            e.printStackTrace();
        } catch (Throwable ignored) {
            ignored.printStackTrace();
        }

    }

    public static void setHandlesColor(TextView view, int color) {
        try {
            Field editorField = TextView.class.getDeclaredField("mEditor");
            if (!editorField.isAccessible()) {
                editorField.setAccessible(true);
            }

            Object editor = editorField.get(view);
            Class<?> editorClass = editor.getClass();

            String[] handleNames = {"mSelectHandleLeft", "mSelectHandleRight", "mSelectHandleCenter"};
            String[] resNames = {"mTextSelectHandleLeftRes", "mTextSelectHandleRightRes", "mTextSelectHandleRes"};

            for (int i = 0; i < handleNames.length; i++) {
                Field handleField = editorClass.getDeclaredField(handleNames[i]);
                if (!handleField.isAccessible()) {
                    handleField.setAccessible(true);
                }

                Drawable handleDrawable = (Drawable) handleField.get(editor);

                if (handleDrawable == null) {
                    Field resField = TextView.class.getDeclaredField(resNames[i]);
                    if (!resField.isAccessible()) {
                        resField.setAccessible(true);
                    }
                    int resId = resField.getInt(view);
                    handleDrawable = view.getResources().getDrawable(resId, null);
                }

                if (handleDrawable != null) {
                    Drawable drawable = handleDrawable.mutate();
                    drawable.setColorFilter(color, PorterDuff.Mode.SRC_IN);
                    handleField.set(editor, drawable);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        int id = item.getItemId();

        if (id == R.id.action_edit) {
            FragmentTransaction ft = getFragmentManager().beginTransaction();
            MainDialogFragment f = new MainDialogFragment();
            Bundle b = new Bundle();
            b.putInt("type", MainDialogFragment.CONVERSATION);
            f.setArguments(b);
            f.show(ft, null);
            return true;
        }

        return super.onOptionsItemSelected(item);
    }

    @Override
    public boolean onCreateActionMode(ActionMode mode, Menu menu) {
        mode.getMenuInflater().inflate(R.menu.main_edit, menu);
        mActivity.setActionModeBackgroundColor(mode, mActivity.primaryColor);
        return true;
    }

    @Override
    public boolean onPrepareActionMode(ActionMode mode, Menu menu) {
        for (int i = 0; i < binding.recyclerviewMain.getChildCount(); i++) {
            CheckBox checkBox = (CheckBox)  binding.recyclerviewMain.getChildAt(i).findViewById(R.id.checkBox);
            checkBox.setVisibility(View.VISIBLE);
        }
        return true;
    }

    @Override
    public boolean onActionItemClicked(ActionMode mode, MenuItem item) {
        if (item.getItemId() == R.id.action_delete) {
            for(CustomCRVAdapter.ViewHolder select : adapter.selected){
                DBProvider.delete(mActivity.getContentResolver (), DBProvider.cvsUri, select._id);
                DBProvider.removeBookmarks(mActivity.getContentResolver (), select._id);
            }

            adapter.changeCursor(DBProvider.getCursor(mActivity.getContentResolver(), DBProvider.cvsUri));
            mActivity.mActionMode.finish();
            return true;
        }
        return false;
    }

    @Override
    public void onDestroyActionMode(ActionMode mode) {
        mActivity.mActionMode = null;

        for(int i=0; i<binding.recyclerviewMain.getChildCount(); i++){
            CheckBox checkBox = (CheckBox) binding.recyclerviewMain.getChildAt(i).findViewById(R.id.checkBox);
            checkBox.setVisibility(View.INVISIBLE);
        }
        for (int i = 0; i < adapter.selected.size(); i++) {
            adapter.selected.get(i).mCheckbox.setChecked(false);
        }
        adapter.selected.clear();
    }

//    public static void expand(final View v) {
//        v.measure(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
//        final int targetHeight = v.getMeasuredHeight();
//
//        // Older versions of android (pre API 21) cancel animations for views with a height of 0.
//        v.getLayoutParams().height = 1;
//        v.setVisibility(View.VISIBLE);
//        Animation a = new Animation()
//        {
//            @Override
//            protected void applyTransformation(float interpolatedTime, Transformation t) {
//                v.getLayoutParams().height = interpolatedTime == 1
//                        ? ViewGroup.LayoutParams.WRAP_CONTENT
//                        : (int)(targetHeight * interpolatedTime);
//                v.requestLayout();
//            }
//
//            @Override
//            public boolean willChangeBounds() {
//                return true;
//            }
//        };
//
//        // 1dp/ms
//        a.setDuration((int)(targetHeight / v.getContext().getResources().getDisplayMetrics().density)*4);
//        v.startAnimation(a);
//    }
//
//    public static void collapse(final View v) {
//        final int initialHeight = v.getMeasuredHeight();
//
//        Animation a = new Animation()
//        {
//            @Override
//            protected void applyTransformation(float interpolatedTime, Transformation t) {
//                if(interpolatedTime == 1){
//                    v.setVisibility(View.GONE);
//                }else{
//                    v.getLayoutParams().height = initialHeight - (int)(initialHeight * interpolatedTime);
//                    v.requestLayout();
//                }
//            }
//
//            @Override
//            public boolean willChangeBounds() {
//                return true;
//            }
//        };
//
//        // 1dp/ms
//        a.setDuration((int)(initialHeight / v.getContext().getResources().getDisplayMetrics().density)*4);
//        v.startAnimation(a);
//    }

//    @Override
//    public boolean onEditorAction(TextView v, int actionId, KeyEvent event) {
//        switch (v.getId()){
//            case R.id.autoCompleteTextViewCvs:
//                if(actionId == EditorInfo.IME_ACTION_NEXT){
//                    binding.autoCompleteTextViewTrs.setSelection(binding.autoCompleteTextViewTrs.length());
//                }else if(actionId == EditorInfo.IME_ACTION_DONE){
//                    // insert conversation?
//
//                }
//                break;
//            case R.id.autoCompleteTextViewTrs:
//                if(actionId == EditorInfo.IME_ACTION_NEXT){
//                    binding.autoCompleteTextViewPrn.setSelection(binding.autoCompleteTextViewPrn.length());
//                }
//                break;
//            case R.id.autoCompleteTextViewPrn:
//                if(actionId == EditorInfo.IME_ACTION_DONE){
//                    // insert conversation?
//                }
//                break;
//
//        }
//
//        return false;
//    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        TTSUtils.destroy();
    }

}
