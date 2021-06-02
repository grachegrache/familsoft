package com.familsoft.tr4tr.translatorfortraveler.func;

import android.content.Context;
import android.graphics.Typeface;
import android.graphics.drawable.ColorDrawable;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseExpandableListAdapter;
import android.widget.ExpandableListView;
import android.widget.ImageView;
import android.widget.TextView;

import com.familsoft.tr4tr.translatorfortraveler.R;

import java.util.HashMap;
import java.util.List;

/**
 * Created by macpro on 2017. 9. 26..
 */
public class ExpandableListAdapter extends BaseExpandableListAdapter {
    private Context mContext;
    private List<ExpandedMenuModel> mListDataHeader; // header titles

    // child data in format of header title, child title
    private HashMap<ExpandedMenuModel, List<Bookmark>> mListDataChild;
    ExpandableListView expandList;

    public ExpandableListAdapter(Context context, List<ExpandedMenuModel> listDataHeader, HashMap<ExpandedMenuModel, List<Bookmark>> listChildData, ExpandableListView mView) {
        this.mContext = context;
        this.mListDataHeader = listDataHeader;
        this.mListDataChild = listChildData;
        this.expandList = mView;
    }

    @Override
    public int getGroupCount() {
        int i = mListDataHeader.size();
//        Log.d("GROUPCOUNT", String.valueOf(i));
        return this.mListDataHeader.size();
    }

    @Override
    public int getChildrenCount(int groupPosition) {
        int childCount = 0;
        if (this.mListDataChild.containsKey(this.mListDataHeader.get(groupPosition))) {
            childCount = this.mListDataChild.get(this.mListDataHeader.get(groupPosition))
                    .size();
        }
        return childCount;
    }

    @Override
    public Object getGroup(int groupPosition) {
        return this.mListDataHeader.get(groupPosition);
    }

    @Override
    public Object getChild(int groupPosition, int childPosition) {
//        Log.d("CHILD", mListDataChild.get(this.mListDataHeader.get(groupPosition))
//                .get(childPosition).toString());
        return this.mListDataChild.get(this.mListDataHeader.get(groupPosition))
                .get(childPosition);
    }

    @Override
    public long getGroupId(int groupPosition) {
        return groupPosition;
    }

    @Override
    public long getChildId(int groupPosition, int childPosition) {
        return childPosition;
    }

    @Override
    public boolean hasStableIds() {
        return false;
    }

    @Override
    public View getGroupView(int groupPosition, boolean isExpanded, View convertView, ViewGroup parent) {
        ExpandedMenuModel headerTitle = (ExpandedMenuModel) getGroup(groupPosition);
        if (convertView == null) {
            LayoutInflater infalInflater = (LayoutInflater) this.mContext
                    .getSystemService(Context.LAYOUT_INFLATER_SERVICE);
            convertView = infalInflater.inflate(R.layout.exp_list_header, null);
        }
        TextView lblListHeader = (TextView) convertView
                .findViewById(R.id.submenu);
        ImageView headerIcon = (ImageView) convertView.findViewById(R.id.iconimage);
        lblListHeader.setTypeface(null, Typeface.BOLD);
        lblListHeader.setText(headerTitle.getIconName());
        headerIcon.setImageResource(headerTitle.getIconImg());

        ImageView indicatorIcon = (ImageView) convertView.findViewById(R.id.exp_indicator);
        if(getChildrenCount(groupPosition) == 0){
            indicatorIcon.setVisibility(View.INVISIBLE);
        }else{
            indicatorIcon.setVisibility(View.VISIBLE);
            if(isExpanded){
                indicatorIcon.setImageResource(R.drawable.ic_keyboard_arrow_up_black_24dp);
            }else{
                indicatorIcon.setImageResource(R.drawable.ic_keyboard_arrow_down_black_24dp);
            }
        }
        return convertView;
    }

    @Override
    public View getChildView(int groupPosition, int childPosition, boolean isLastChild, View convertView, ViewGroup parent) {
        final Bookmark childInfo = (Bookmark) getChild(groupPosition, childPosition);

        if (convertView == null) {
            LayoutInflater infalInflater = (LayoutInflater) this.mContext
                    .getSystemService(Context.LAYOUT_INFLATER_SERVICE);
            convertView = infalInflater.inflate(R.layout.exp_list_submenu, null);
        }

        ImageView imageType = (ImageView) convertView.findViewById(R.id.imageType);
        int typeRes;
        switch(childInfo.type){
            case SQLiteUtils.SchemeBmk.Type.INFO:
                typeRes = R.drawable.ic_info_black_24dp;
                break;
            case SQLiteUtils.SchemeBmk.Type.FILTER:
                typeRes = R.drawable.ic_help_black_24dp;
                break;
            default:
                typeRes = -1;
                break;
        }
        if(typeRes != -1) {
            imageType.setImageResource(typeRes);
        }

        TextView txtListChild = (TextView) convertView
                .findViewById(R.id.submenu);
        txtListChild.setText(childInfo.name);

//        convertView.setOnClickListener(new View.OnClickListener() {
//            @Override
//            public void onClick(View v) {
//                Log.e("11","click");
//            }
//        });
//        convertView.setOnLongClickListener(new View.OnLongClickListener() {
//            @Override
//            public boolean onLongClick(View v) {
//                Log.e("11","long");
//                return false;
//            }
//        });
        return convertView;
    }

    @Override
    public boolean isChildSelectable(int groupPosition, int childPosition) {
        return true;
    }
}