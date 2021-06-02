
package android.databinding;
import com.familsoft.tr4tr.translatorfortraveler.BR;
class DataBinderMapper  {
    final static int TARGET_MIN_SDK = 21;
    public DataBinderMapper() {
    }
    public android.databinding.ViewDataBinding getDataBinder(android.databinding.DataBindingComponent bindingComponent, android.view.View view, int layoutId) {
        switch(layoutId) {
                case com.familsoft.tr4tr.translatorfortraveler.R.layout.activity_main:
                    return com.familsoft.tr4tr.translatorfortraveler.databinding.ActivityMainBinding.bind(view, bindingComponent);
                case com.familsoft.tr4tr.translatorfortraveler.R.layout.fragment_main:
                    return com.familsoft.tr4tr.translatorfortraveler.databinding.FragmentMainBinding.bind(view, bindingComponent);
                case com.familsoft.tr4tr.translatorfortraveler.R.layout.fragment_info:
                    return com.familsoft.tr4tr.translatorfortraveler.databinding.FragmentInfoBinding.bind(view, bindingComponent);
                case com.familsoft.tr4tr.translatorfortraveler.R.layout.app_bar_main:
                    return com.familsoft.tr4tr.translatorfortraveler.databinding.AppBarMainBinding.bind(view, bindingComponent);
                case com.familsoft.tr4tr.translatorfortraveler.R.layout.content_main:
                    return com.familsoft.tr4tr.translatorfortraveler.databinding.ContentMainBinding.bind(view, bindingComponent);
        }
        return null;
    }
    android.databinding.ViewDataBinding getDataBinder(android.databinding.DataBindingComponent bindingComponent, android.view.View[] views, int layoutId) {
        switch(layoutId) {
        }
        return null;
    }
    int getLayoutId(String tag) {
        if (tag == null) {
            return 0;
        }
        final int code = tag.hashCode();
        switch(code) {
            case 423753077: {
                if(tag.equals("layout/activity_main_0")) {
                    return com.familsoft.tr4tr.translatorfortraveler.R.layout.activity_main;
                }
                break;
            }
            case -985887980: {
                if(tag.equals("layout/fragment_main_0")) {
                    return com.familsoft.tr4tr.translatorfortraveler.R.layout.fragment_main;
                }
                break;
            }
            case -1088487223: {
                if(tag.equals("layout/fragment_info_0")) {
                    return com.familsoft.tr4tr.translatorfortraveler.R.layout.fragment_info;
                }
                break;
            }
            case -85764295: {
                if(tag.equals("layout/app_bar_main_0")) {
                    return com.familsoft.tr4tr.translatorfortraveler.R.layout.app_bar_main;
                }
                break;
            }
            case 731091765: {
                if(tag.equals("layout/content_main_0")) {
                    return com.familsoft.tr4tr.translatorfortraveler.R.layout.content_main;
                }
                break;
            }
        }
        return 0;
    }
    String convertBrIdToString(int id) {
        if (id < 0 || id >= InnerBrLookup.sKeys.length) {
            return null;
        }
        return InnerBrLookup.sKeys[id];
    }
    private static class InnerBrLookup {
        static String[] sKeys = new String[]{
            "_all"};
    }
}