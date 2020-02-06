#include <jni.h>
#include <string>

#include <opencv2/opencv.hpp>
#include "com_example_helloworld_MainActivity.h"

extern "C" JNIEXPORT void JNICALL
Java_com_example_helloworld_MainActivity_ConvertRGBtoGray(
        JNIEnv *env,
        jobject  instance,
        jlong matAddrInput,
        jlong matAddrResult){
    cv::Mat &matInput = *(cv::Mat *)matAddrInput;
    cv::Mat &matResult = *(cv::Mat *)matAddrResult;

    cv::cvtColor(matInput, matResult, cv::COLOR_RGBA2GRAY);
}