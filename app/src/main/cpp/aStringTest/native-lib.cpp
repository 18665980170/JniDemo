#include <jni.h>
#include <string>
#include <sstream>
#include <iostream>
#include <android/log.h>
#include <random>
#include "../log/log.h"

using namespace std;


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_aStringTest_Native_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    string hello = "stringFromJNI";
    Log_i(hello.c_str());
    return env->NewStringUTF(hello.c_str());
}
