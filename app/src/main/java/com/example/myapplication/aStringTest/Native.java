package com.example.myapplication.aStringTest;

public class Native {
    public native String stringFromJNI();


    static {
        System.loadLibrary("native-lib");
    }
}
