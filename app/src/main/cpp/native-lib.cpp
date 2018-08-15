#include <jni.h>
#include <string>
#include "test.h"
#include <android/log.h>
#define  LOG    "JNILOG" // 这个是自定义的LOG的TAG
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG,__VA_ARGS__) // 定义LOGD类型
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG,__VA_ARGS__) // 定义LOGI类型
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...)  __android_log_print(ANDROID_LOG_FATAL,LOG,__VA_ARGS__) // 定义LOGF类型
//extern "C"
//JNIEXPORT jstring
//
//JNICALL
//Java_net_cnki_myapplication_MainActivity_stringFromJNI(
//        JNIEnv *env,
//        jobject /* this */) {
//    std::string hello = "Hello from C++";
//    return env->NewStringUTF(hello.c_str());
//}
extern "C"
JNIEXPORT jstring JNICALL
Java_net_cnki_myapplication_MainActivity_handle(JNIEnv *env, jclass type) {

    // TODO

    std::string hello = "Hello from C++++++";
    return env->NewStringUTF(hello.c_str());
}extern "C"
JNIEXPORT jint JNICALL
Java_net_cnki_myapplication_MainActivity_add(JNIEnv *env, jobject instance, jint a, jint b) {

    // TODO
    test test1;
    LOGE("ssssssscuijianru");
    int c=test1.add(a,b);
    return c;

}extern "C"
JNIEXPORT jobject JNICALL
Java_net_cnki_myapplication_MainActivity_fdfdf(JNIEnv *env, jobject instance, jobject context) {

    // TODO

}