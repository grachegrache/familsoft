package com.familsoft.tr4tr.translatorfortraveler.databinding;
import com.familsoft.tr4tr.translatorfortraveler.R;
import com.familsoft.tr4tr.translatorfortraveler.BR;
import android.view.View;
public class FragmentInfoBinding extends android.databinding.ViewDataBinding  {

    private static final android.databinding.ViewDataBinding.IncludedLayouts sIncludes;
    private static final android.util.SparseIntArray sViewsWithIds;
    static {
        sIncludes = null;
        sViewsWithIds = new android.util.SparseIntArray();
        sViewsWithIds.put(R.id.input_form, 1);
        sViewsWithIds.put(R.id.input_layout_cvs, 2);
        sViewsWithIds.put(R.id.EditTextCvs, 3);
        sViewsWithIds.put(R.id.spinnerCvs, 4);
        sViewsWithIds.put(R.id.input_layout_trs, 5);
        sViewsWithIds.put(R.id.EditTextTrs, 6);
        sViewsWithIds.put(R.id.spinnerTrs, 7);
        sViewsWithIds.put(R.id.input_layout_prn, 8);
        sViewsWithIds.put(R.id.EditTextPrn, 9);
        sViewsWithIds.put(R.id.button_bookmark, 10);
    }
    // views
    public final android.widget.EditText EditTextCvs;
    public final android.widget.EditText EditTextPrn;
    public final android.widget.EditText EditTextTrs;
    public final android.widget.Button buttonBookmark;
    public final android.widget.LinearLayout inputForm;
    public final android.support.design.widget.TextInputLayout inputLayoutCvs;
    public final android.support.design.widget.TextInputLayout inputLayoutPrn;
    public final android.support.design.widget.TextInputLayout inputLayoutTrs;
    private final android.widget.RelativeLayout mboundView0;
    public final android.widget.Spinner spinnerCvs;
    public final android.widget.Spinner spinnerTrs;
    // variables
    // values
    // listeners
    // Inverse Binding Event Handlers

    public FragmentInfoBinding(android.databinding.DataBindingComponent bindingComponent, View root) {
        super(bindingComponent, root, 0);
        final Object[] bindings = mapBindings(bindingComponent, root, 11, sIncludes, sViewsWithIds);
        this.EditTextCvs = (android.widget.EditText) bindings[3];
        this.EditTextPrn = (android.widget.EditText) bindings[9];
        this.EditTextTrs = (android.widget.EditText) bindings[6];
        this.buttonBookmark = (android.widget.Button) bindings[10];
        this.inputForm = (android.widget.LinearLayout) bindings[1];
        this.inputLayoutCvs = (android.support.design.widget.TextInputLayout) bindings[2];
        this.inputLayoutPrn = (android.support.design.widget.TextInputLayout) bindings[8];
        this.inputLayoutTrs = (android.support.design.widget.TextInputLayout) bindings[5];
        this.mboundView0 = (android.widget.RelativeLayout) bindings[0];
        this.mboundView0.setTag(null);
        this.spinnerCvs = (android.widget.Spinner) bindings[4];
        this.spinnerTrs = (android.widget.Spinner) bindings[7];
        setRootTag(root);
        // listeners
        invalidateAll();
    }

    @Override
    public void invalidateAll() {
        synchronized(this) {
                mDirtyFlags = 0x1L;
        }
        requestRebind();
    }

    @Override
    public boolean hasPendingBindings() {
        synchronized(this) {
            if (mDirtyFlags != 0) {
                return true;
            }
        }
        return false;
    }

    public boolean setVariable(int variableId, Object variable) {
        switch(variableId) {
        }
        return false;
    }

    @Override
    protected boolean onFieldChange(int localFieldId, Object object, int fieldId) {
        switch (localFieldId) {
        }
        return false;
    }

    @Override
    protected void executeBindings() {
        long dirtyFlags = 0;
        synchronized(this) {
            dirtyFlags = mDirtyFlags;
            mDirtyFlags = 0;
        }
        // batch finished
    }
    // Listener Stub Implementations
    // callback impls
    // dirty flag
    private  long mDirtyFlags = 0xffffffffffffffffL;

    public static FragmentInfoBinding inflate(android.view.LayoutInflater inflater, android.view.ViewGroup root, boolean attachToRoot) {
        return inflate(inflater, root, attachToRoot, android.databinding.DataBindingUtil.getDefaultComponent());
    }
    public static FragmentInfoBinding inflate(android.view.LayoutInflater inflater, android.view.ViewGroup root, boolean attachToRoot, android.databinding.DataBindingComponent bindingComponent) {
        return android.databinding.DataBindingUtil.<FragmentInfoBinding>inflate(inflater, com.familsoft.tr4tr.translatorfortraveler.R.layout.fragment_info, root, attachToRoot, bindingComponent);
    }
    public static FragmentInfoBinding inflate(android.view.LayoutInflater inflater) {
        return inflate(inflater, android.databinding.DataBindingUtil.getDefaultComponent());
    }
    public static FragmentInfoBinding inflate(android.view.LayoutInflater inflater, android.databinding.DataBindingComponent bindingComponent) {
        return bind(inflater.inflate(com.familsoft.tr4tr.translatorfortraveler.R.layout.fragment_info, null, false), bindingComponent);
    }
    public static FragmentInfoBinding bind(android.view.View view) {
        return bind(view, android.databinding.DataBindingUtil.getDefaultComponent());
    }
    public static FragmentInfoBinding bind(android.view.View view, android.databinding.DataBindingComponent bindingComponent) {
        if (!"layout/fragment_info_0".equals(view.getTag())) {
            throw new RuntimeException("view tag isn't correct on view:" + view.getTag());
        }
        return new FragmentInfoBinding(bindingComponent, view);
    }
    /* flag mapping
        flag 0 (0x1L): null
    flag mapping end*/
    //end
}