# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.10)

file(GLOB nativeSource log/log.cpp aStringTest/native-lib.cpp aStringTest/native-lib2.cpp)
file(GLOB natvieStaticSource log/log.cpp aStringTest/native-static-lib.cpp)

add_library(native-static-lib SHARED ${natvieStaticSource})
add_library(native-lib SHARED ${nativeSource})


find_library(log-lib log)


target_link_libraries(native-lib ${log-lib})
target_link_libraries(native-static-lib ${log-lib})