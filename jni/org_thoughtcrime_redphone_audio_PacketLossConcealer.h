/* DO NOT EDIT THIS FILE - it is machine generated */

#include <jni.h>

#ifndef __org_thoughtcrime_redphone_audio_PacketLossConcealer__
#define __org_thoughtcrime_redphone_audio_PacketLossConcealer__

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT void JNICALL Java_org_thoughtcrime_redphone_audio_PacketLossConcealer_init (JNIEnv *env, jclass);
JNIEXPORT void JNICALL Java_org_thoughtcrime_redphone_audio_PacketLossConcealer_rx (JNIEnv *env, jclass, jshortArray);
JNIEXPORT void JNICALL Java_org_thoughtcrime_redphone_audio_PacketLossConcealer_fillIn (JNIEnv *env, jclass, jshortArray);
JNIEXPORT jint JNICALL Java_org_thoughtcrime_redphone_audio_PacketLossConcealer_maxOutputLengthAtSpeed (JNIEnv *env, jclass, jint, jfloat);
JNIEXPORT jint JNICALL Java_org_thoughtcrime_redphone_audio_PacketLossConcealer_changeSpeed (JNIEnv *env, jclass, jshortArray, jshortArray, jint, jfloat);

#ifdef __cplusplus
}
#endif

#endif /* __org_thoughtcrime_redphone_audio_PacketLossConcealer__ */
