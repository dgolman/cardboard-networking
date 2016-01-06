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

// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t_1778462118_0;
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t_1820556442_0;
// PhotonStream
struct PhotonStream_t_980664937_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void PhotonTransformViewPositionControl::.ctor(PhotonTransformViewPositionModel)
extern "C"  void PhotonTransformViewPositionControl__ctor_m_1970357743_0 (PhotonTransformViewPositionControl_t_1778462118_0 * __this, PhotonTransformViewPositionModel_t_1820556442_0 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()
extern "C"  Vector3_t_725341337_0  PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_m1100045281_0 (PhotonTransformViewPositionControl_t_1778462118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C"  void PhotonTransformViewPositionControl_SetSynchronizedValues_m_1994451060_0 (PhotonTransformViewPositionControl_t_1778462118_0 * __this, Vector3_t_725341337_0  ___speed, float ___turnSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::UpdatePosition(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  PhotonTransformViewPositionControl_UpdatePosition_m_1787972987_0 (PhotonTransformViewPositionControl_t_1778462118_0 * __this, Vector3_t_725341337_0  ___currentPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetNetworkPosition()
extern "C"  Vector3_t_725341337_0  PhotonTransformViewPositionControl_GetNetworkPosition_m1333783235_0 (PhotonTransformViewPositionControl_t_1778462118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()
extern "C"  Vector3_t_725341337_0  PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_m_1378439647_0 (PhotonTransformViewPositionControl_t_1778462118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewPositionControl_OnPhotonSerializeView_m397645896_0 (PhotonTransformViewPositionControl_t_1778462118_0 * __this, Vector3_t_725341337_0  ___currentPosition, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SerializeData(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewPositionControl_SerializeData_m_1765175864_0 (PhotonTransformViewPositionControl_t_1778462118_0 * __this, Vector3_t_725341337_0  ___currentPosition, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::DeserializeData(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewPositionControl_DeserializeData_m_1345937510_0 (PhotonTransformViewPositionControl_t_1778462118_0 * __this, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
