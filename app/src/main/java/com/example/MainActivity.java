package com.example;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.TextView;

import com.example.myapplication.R;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = findViewById(R.id.sample_text);
        tv.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                onJniTestH();
            }
        });

    }


    private static final String TAG = "JJJJJJNI";

    void onAStringTest() {

        String stringFromJNI = new Native().stringFromJNI();
        Log.d(TAG, "stringFromJNI: " + stringFromJNI);


        String stringFromJNI2 = new Native2().stringFromJNI2();
        Log.d(TAG, "stringFromJNI2: " + stringFromJNI2);

        String staticStringFromJNI = SecondNative.staticStringFromJNI();
        Log.d(TAG, "staticStringFromJNI: " + staticStringFromJNI);
    }

    void onJniTestH() {
        String str = Native.jniTestH();
        Log.d(TAG, "str: " + str);
    }


    /*************************************/


}
