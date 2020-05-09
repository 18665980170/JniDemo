package com.example.myapplication.aStringTest;

public class StaticNative {
    public static native String staticStringFromJNI();

    static {
        System.loadLibrary("native-static-lib");
    }
}
