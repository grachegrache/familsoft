package com.familsoft.tr4tr.translatorfortraveler.func;

import android.annotation.TargetApi;
import android.app.Activity;
import android.os.Build;
import android.speech.tts.TextToSpeech;
import android.util.Log;

import com.familsoft.tr4tr.translatorfortraveler.MainActivity;

import java.util.HashMap;
import java.util.Locale;

/**
 * Created by macpro on 2017. 8. 21..
 */

public class TTSUtils {
    private static Activity activity;
    private static TextToSpeech tts;

    public static void initialize(Activity mActivity) {
        activity = mActivity;
        try {
            if(tts == null) {
                tts = new TextToSpeech(mActivity, new TextToSpeech.OnInitListener() {
                    @Override
                    public void onInit(int status) {
                        if (status != TextToSpeech.ERROR) {
                            tts.setLanguage(Locale.ENGLISH);
                        }
                    }
                });
            }
        }catch (Exception e) {
            Log.e("TTSUtils.initialize", e.getMessage());
        }
    }

    public static boolean setLanguage(Locale l){
        if(tts == null || l == null){
            return false;
        }
        if(tts.isLanguageAvailable(l) == TextToSpeech.LANG_AVAILABLE) {
            tts.setLanguage(l);
            return true;
        }
        return false;
    }
    public static void speak(String word){
        try {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) {
                ttsGreater21(word);
            } else {
                ttsUnder21(word);
            }
        }catch(Exception e){
            Log.e("TTSUtils.speak", e.getMessage());
        }
    }

    @SuppressWarnings("deprecation")
    private static void ttsUnder21(String text){
        HashMap<String,String> map = new HashMap<>();
        map.put(TextToSpeech.Engine.KEY_PARAM_UTTERANCE_ID,"MessageId");
        tts.speak(text,TextToSpeech.QUEUE_FLUSH,map);
    }

    @TargetApi(Build.VERSION_CODES.LOLLIPOP)
    private static void ttsGreater21(String text){
        String utteranceId=activity.hashCode() + "";
        tts.speak(text, TextToSpeech.QUEUE_FLUSH,null,utteranceId);
    }

    public static void destroy(){
        try {
            if (tts != null) {
                tts.stop();
                tts.shutdown();
                tts = null;
            }
        }catch(Exception e) {
            Log.e("TTSUtils.destroy", e.getMessage());
        }
    }

}
