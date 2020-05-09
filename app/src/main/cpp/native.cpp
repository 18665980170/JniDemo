#include <jni.h>
#include <string>
#include <sstream>
#include <iostream>
#include <android/log.h>
#include <random>
#include "log/log.h"
#include "native.h"

using namespace std;


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_Native_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    string hello = "stringFromJNI";
    Log_i(hello.c_str());
    return env->NewStringUTF(hello.c_str());
}


extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_Native_jniTestH(JNIEnv *env, jclass clazz) {
    string hello = "jniTestH";
    try {
        Log_i(hello.c_str());
    }catch (exception exception){
        cout << exception.what() << endl;
    }
    return env->NewStringUTF(hello.c_str());
}