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

// PhotonTransformView
struct PhotonTransformView_t_215491014_0;
// PhotonStream
struct PhotonStream_t_980664937_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void PhotonTransformView::.ctor()
extern "C"  void PhotonTransformView__ctor_m_338019818_0 (PhotonTransformView_t_215491014_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Awake()
extern "C"  void PhotonTransformView_Awake_m_100414599_0 (PhotonTransformView_t_215491014_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Update()
extern "C"  void PhotonTransformView_Update_m_161817673_0 (PhotonTransformView_t_215491014_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdatePosition()
extern "C"  void PhotonTransformView_UpdatePosition_m1659802816_0 (PhotonTransformView_t_215491014_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateRotation()
extern "C"  void PhotonTransformView_UpdateRotation_m204523989_0 (PhotonTransformView_t_215491014_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateScale()
extern "C"  void PhotonTransformView_UpdateScale_m715876021_0 (PhotonTransformView_t_215491014_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C"  void PhotonTransformView_SetSynchronizedValues_m1970820594_0 (PhotonTransformView_t_215491014_0 * __this, Vector3_t_725341337_0  ___speed, float ___turnSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformView_OnPhotonSerializeView_m991962773_0 (PhotonTransformView_t_215491014_0 * __this, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::DoDrawEstimatedPositionError()
extern "C"  void PhotonTransformView_DoDrawEstimatedPositionError_m356798400_0 (PhotonTransformView_t_215491014_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
