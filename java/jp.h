/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jp */

#ifndef _Included_jp
#define _Included_jp
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jp
 * Method:    PLInit
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jp_PLInit
  (JNIEnv *, jobject, jstring);

/*
 * Class:     jp
 * Method:    PLClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jp_PLClose
  (JNIEnv *, jobject);

/*
 * Class:     jp
 * Method:    IPLCallS
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jp_IPLCallS__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     jp
 * Method:    IPLCallS
 * Signature: (Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jp_IPLCallS__Ljava_lang_String_2_3Ljava_lang_String_2
  (JNIEnv *, jobject, jstring, jobjectArray);

/*
 * Class:     jp
 * Method:    IPLCallA
 * Signature: (Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_jp_IPLCallA
  (JNIEnv *, jobject, jstring, jobjectArray);

/*
 * Class:     jp
 * Method:    IPLEval
 * Signature: (Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_jp_IPLEval
  (JNIEnv *, jobject, jstring);

/*
 * Class:     jp
 * Method:    IPLLoadLibrary
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jp_IPLLoadLibrary
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif