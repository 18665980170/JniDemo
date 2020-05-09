#include <jni.h>
#include <string>
#include <sstream>
#include <iostream>
#include <android/log.h>
#include <random>
#include "../log/log.h"

using namespace std;


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_aStringTest_StaticNative_staticStringFromJNI(
        JNIEnv *env,
        jclass) {

    char *hello = "abcd\n";

    Log_i("%x %x %x", hello[0], hello[1], hello[2]);
    return env->NewStringUTF(hello);
}