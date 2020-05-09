package com.example;

/**
 * 入口
 */
public class Native {
    public native String stringFromJNI();

    public native static String jniTestH();

    static {
        System.loadLibrary("native-lib");
    }
}
