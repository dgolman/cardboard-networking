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

// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t_511870963_0;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t1707014617_0;
// PhotonStream
struct PhotonStream_t_980664937_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void PhotonTransformViewScaleControl::.ctor(PhotonTransformViewScaleModel)
extern "C"  void PhotonTransformViewScaleControl__ctor_m155400219_0 (PhotonTransformViewScaleControl_t_511870963_0 * __this, PhotonTransformViewScaleModel_t1707014617_0 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  PhotonTransformViewScaleControl_GetScale_m1386116190_0 (PhotonTransformViewScaleControl_t_511870963_0 * __this, Vector3_t_725341337_0  ___currentScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewScaleControl_OnPhotonSerializeView_m981455727_0 (PhotonTransformViewScaleControl_t_511870963_0 * __this, Vector3_t_725341337_0  ___currentScale, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
