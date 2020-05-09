package com.example;

/**
 * 测试 打包多个so
 */
public class SecondNative {
    public static native String staticStringFromJNI();

    static {
        System.loadLibrary("native-static-lib");
    }
}
