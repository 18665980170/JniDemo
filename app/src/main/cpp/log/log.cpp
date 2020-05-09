#include <jni.h>
#include <string>
#include <sstream>
#include <iostream>
#include <android/log.h>
#include <random>

using namespace std;

#define  LOG_TAG    "JJJNI"

void Log_i(const char *log, ...) {
    va_list arg;
    va_start(arg, log);
    __android_log_vprint(ANDROID_LOG_INFO, LOG_TAG, log, arg);
    va_end(arg);
}
