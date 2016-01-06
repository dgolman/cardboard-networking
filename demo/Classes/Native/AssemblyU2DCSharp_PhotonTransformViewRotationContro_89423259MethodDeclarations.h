#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t_89423259_0;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t1662761521_0;
// PhotonStream
struct PhotonStream_t_980664937_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Void PhotonTransformViewRotationControl::.ctor(PhotonTransformViewRotationModel)
extern "C"  void PhotonTransformViewRotationControl__ctor_m1636365563_0 (PhotonTransformViewRotationControl_t_89423259_0 * __this, PhotonTransformViewRotationModel_t1662761521_0 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
extern "C"  Quaternion_t1989680039_0  PhotonTransformViewRotationControl_GetRotation_m1168148390_0 (PhotonTransformViewRotationControl_t_89423259_0 * __this, Quaternion_t1989680039_0  ___currentRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewRotationControl_OnPhotonSerializeView_m_2094134695_0 (PhotonTransformViewRotationControl_t_89423259_0 * __this, Quaternion_t1989680039_0  ___currentRotation, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
