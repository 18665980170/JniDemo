#include <jni.h>
#include <string>
#include <sstream>
#include <iostream>
#include <android/log.h>
#include "log/log.h"

using namespace std;


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_SecondNative_staticStringFromJNI(
        JNIEnv *env,
        jclass) {

    char *hello = const_cast<char *>("abcd\n");

    Log_i("%x %x %x", hello[0], hello[1], hello[2]);
    return env->NewStringUTF(hello);
}