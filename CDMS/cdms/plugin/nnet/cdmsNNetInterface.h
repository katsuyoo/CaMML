/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cdms_plugin_nnet_NNet */

#ifndef _Included_cdms_plugin_nnet_NNet
#define _Included_cdms_plugin_nnet_NNet
#ifdef __cplusplus
extern "C" {
#endif
#undef cdms_plugin_nnet_NNet_iTrainingMethod
#define cdms_plugin_nnet_NNet_iTrainingMethod 0L
#undef cdms_plugin_nnet_NNet_tmBackProp
#define cdms_plugin_nnet_NNet_tmBackProp 0L
#undef cdms_plugin_nnet_NNet_tmBatchBackProp
#define cdms_plugin_nnet_NNet_tmBatchBackProp 1L
#undef cdms_plugin_nnet_NNet_tmRProp
#define cdms_plugin_nnet_NNet_tmRProp 2L
#undef cdms_plugin_nnet_NNet_tmLevenbergMarquardt
#define cdms_plugin_nnet_NNet_tmLevenbergMarquardt 3L
#undef cdms_plugin_nnet_NNet_bUnityOutputLayerDerivatives
#define cdms_plugin_nnet_NNet_bUnityOutputLayerDerivatives 0L
#undef cdms_plugin_nnet_NNet_bBiasDecay
#define cdms_plugin_nnet_NNet_bBiasDecay 1L
#undef cdms_plugin_nnet_NNet_fOutputOffValue
#define cdms_plugin_nnet_NNet_fOutputOffValue 0L
#undef cdms_plugin_nnet_NNet_fOutputOnValue
#define cdms_plugin_nnet_NNet_fOutputOnValue 1L
#undef cdms_plugin_nnet_NNet_fLearningRate
#define cdms_plugin_nnet_NNet_fLearningRate 2L
#undef cdms_plugin_nnet_NNet_fMomentumFactor
#define cdms_plugin_nnet_NNet_fMomentumFactor 3L
#undef cdms_plugin_nnet_NNet_fDelta0
#define cdms_plugin_nnet_NNet_fDelta0 4L
#undef cdms_plugin_nnet_NNet_fDeltaMin
#define cdms_plugin_nnet_NNet_fDeltaMin 5L
#undef cdms_plugin_nnet_NNet_fDeltaMax
#define cdms_plugin_nnet_NNet_fDeltaMax 6L
#undef cdms_plugin_nnet_NNet_fMu
#define cdms_plugin_nnet_NNet_fMu 7L
#undef cdms_plugin_nnet_NNet_fMuMin
#define cdms_plugin_nnet_NNet_fMuMin 8L
#undef cdms_plugin_nnet_NNet_fMuInc
#define cdms_plugin_nnet_NNet_fMuInc 9L
#undef cdms_plugin_nnet_NNet_fMuDec
#define cdms_plugin_nnet_NNet_fMuDec 10L
#undef cdms_plugin_nnet_NNet_fWeightDecayFactor
#define cdms_plugin_nnet_NNet_fWeightDecayFactor 11L
#undef cdms_plugin_nnet_NNet_tfHardLimit
#define cdms_plugin_nnet_NNet_tfHardLimit 0L
#undef cdms_plugin_nnet_NNet_tfHHardlimitPos
#define cdms_plugin_nnet_NNet_tfHHardlimitPos 1L
#undef cdms_plugin_nnet_NNet_tfLinear
#define cdms_plugin_nnet_NNet_tfLinear 2L
#undef cdms_plugin_nnet_NNet_tfLinearPos
#define cdms_plugin_nnet_NNet_tfLinearPos 3L
#undef cdms_plugin_nnet_NNet_tfSaturatingLinear
#define cdms_plugin_nnet_NNet_tfSaturatingLinear 4L
#undef cdms_plugin_nnet_NNet_tfSaturatingLinearPos
#define cdms_plugin_nnet_NNet_tfSaturatingLinearPos 5L
#undef cdms_plugin_nnet_NNet_tfSigmoid
#define cdms_plugin_nnet_NNet_tfSigmoid 6L
#undef cdms_plugin_nnet_NNet_tfSigmoidPos
#define cdms_plugin_nnet_NNet_tfSigmoidPos 7L
/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeTransferFn
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_getNodeTransferFn
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    setNodeTransferFn
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_setNodeTransferFn
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeBias
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_getNodeBias
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    setNodeBias
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_setNodeBias
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeOutput
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_getNodeOutput
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeLayer
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_getNodeLayer
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeNum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_getNodeNum
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeNumLinks
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_getNodeNumLinks
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeActiveSigmaMin
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_getNodeActiveSigmaMin
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeActiveSigmaMax
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_getNodeActiveSigmaMax
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeOutputMin
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_getNodeOutputMin
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    getNodeOutputMax
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_getNodeOutputMax
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeInitNNetLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeInitNNetLibrary
  (JNIEnv *, jclass);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeCreateNNet
 * Signature: (I[IZ)J
 */
JNIEXPORT jlong JNICALL Java_cdms_plugin_nnet_NNet_nativeCreateNNet__I_3IZ
  (JNIEnv *, jobject, jint, jintArray, jboolean);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeCreateNNet
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_cdms_plugin_nnet_NNet_nativeCreateNNet__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeCreateNNet
 * Signature: (Ljava/io/ObjectInputStream;)J
 */
JNIEXPORT jlong JNICALL Java_cdms_plugin_nnet_NNet_nativeCreateNNet__Ljava_io_ObjectInputStream_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeSaveNNetToStream
 * Signature: (JLjava/io/ObjectOutputStream;)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeSaveNNetToStream
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeDeleteNNet
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeDeleteNNet
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeGetIntParam
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_nativeGetIntParam
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeGetBooleanParam
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeGetBooleanParam
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeGetFloatParam
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_nativeGetFloatParam
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeSetIntParam
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeSetIntParam
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeSetBooleanParam
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeSetBooleanParam
  (JNIEnv *, jobject, jlong, jint, jboolean);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeSetFloatParam
 * Signature: (JIF)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeSetFloatParam
  (JNIEnv *, jobject, jlong, jint, jfloat);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeAbortTraining
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeAbortTraining
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeCurrentEpoch
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_nativeCurrentEpoch
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativePatternsRemaining
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_nativePatternsRemaining
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeDeleteLink
 * Signature: (JJI)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeDeleteLink__JJI
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeDeleteLink
 * Signature: (JJII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeDeleteLink__JJII
  (JNIEnv *, jobject, jlong, jlong, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeDeleteLink
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeDeleteLink__JIII
  (JNIEnv *, jobject, jlong, jint, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeDeleteLink
 * Signature: (JIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeDeleteLink__JIIII
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeAddOrSetLink
 * Signature: (JJIIF)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeAddOrSetLink__JJIIF
  (JNIEnv *, jobject, jlong, jlong, jint, jint, jfloat);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeAddOrSetLink
 * Signature: (JIIIIF)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeAddOrSetLink__JIIIIF
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jfloat);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeSetConnectivity
 * Signature: (JI[IIII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeSetConnectivity
  (JNIEnv *, jobject, jlong, jint, jintArray, jint, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeSetTransferFn
 * Signature: (JIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeSetTransferFn__JIIII
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeSetTransferFn
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeSetTransferFn__JIII
  (JNIEnv *, jobject, jlong, jint, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeSetTransferFn
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeSetTransferFn__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeNWInit
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeNWInit__JIII
  (JNIEnv *, jobject, jlong, jint, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeNWInit
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeNWInit__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeNWInit
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeNWInit__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeRandomInit
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeRandomInit__JIII
  (JNIEnv *, jobject, jlong, jint, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeRandomInit
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_cdms_plugin_nnet_NNet_nativeRandomInit__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeRandomInit
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeRandomInit__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeTrain
 * Signature: (JILcdms/core/Value$Vector;Lcdms/core/Value$Vector;)V
 */
JNIEXPORT void JNICALL Java_cdms_plugin_nnet_NNet_nativeTrain
  (JNIEnv *, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeMeasureError
 * Signature: (JILcdms/core/Value$Vector;Lcdms/core/Value$Vector;)D
 */
JNIEXPORT jdouble JNICALL Java_cdms_plugin_nnet_NNet_nativeMeasureError
  (JNIEnv *, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeClassify
 * Signature: (J[I)[I
 */
JNIEXPORT jintArray JNICALL Java_cdms_plugin_nnet_NNet_nativeClassify
  (JNIEnv *, jobject, jlong, jintArray);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeProbabilisticClassify
 * Signature: (J[I)[[D
 */
JNIEXPORT jobjectArray JNICALL Java_cdms_plugin_nnet_NNet_nativeProbabilisticClassify
  (JNIEnv *, jobject, jlong, jintArray);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeNumLayers
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_nativeNumLayers
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeTotalNumNodes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_nativeTotalNumNodes
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeTotalNumLinks
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_nativeTotalNumLinks
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeNumNodesInLayer
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_nativeNumNodesInLayer
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeNumInputs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_nativeNumInputs
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeNumOutputs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cdms_plugin_nnet_NNet_nativeNumOutputs
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeInputValue
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_nativeInputValue
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeOutputValue
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_nativeOutputValue
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeGetInputMin
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_nativeGetInputMin
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeGetInputMax
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_nativeGetInputMax
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeGetInputAvrg
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_cdms_plugin_nnet_NNet_nativeGetInputAvrg
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeGetNodeHandle
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_cdms_plugin_nnet_NNet_nativeGetNodeHandle
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeGetNodeHandles
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_cdms_plugin_nnet_NNet_nativeGetNodeHandles
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cdms_plugin_nnet_NNet
 * Method:    nativeGetLinkData
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_cdms_plugin_nnet_NNet_nativeGetLinkData
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
