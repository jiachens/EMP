/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_emp_utils_InferenceHelper */

#ifndef _Included_org_emp_utils_InferenceHelper
#define _Included_org_emp_utils_InferenceHelper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_emp_utils_InferenceHelper
 * Method:    createNativeObject
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_emp_utils_InferenceHelper_createNativeObject
  (JNIEnv *, jobject);

/*
 * Class:     org_emp_utils_InferenceHelper
 * Method:    executeModel
 * Signature: ([F)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_emp_utils_InferenceHelper_executeModel
  (JNIEnv *, jobject, jfloatArray);

#ifdef __cplusplus
}
#endif
#endif