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

// PhotonAnimatorView
struct PhotonAnimatorView_t_1236218109_0;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t1317866799_0;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t437065943_0;
// PhotonStream
struct PhotonStream_t_980664937_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonAnimatorView_SynchronizeTy_521216642.h"
#include "AssemblyU2DCSharp_PhotonAnimatorView_ParameterType1938209879.h"

// System.Void PhotonAnimatorView::.ctor()
extern "C"  void PhotonAnimatorView__ctor_m_1453442893_0 (PhotonAnimatorView_t_1236218109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Awake()
extern "C"  void PhotonAnimatorView_Awake_m_1215837674_0 (PhotonAnimatorView_t_1236218109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Update()
extern "C"  void PhotonAnimatorView_Update_m_380194630_0 (PhotonAnimatorView_t_1236218109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesLayerSynchronizeTypeExist(System.Int32)
extern "C"  bool PhotonAnimatorView_DoesLayerSynchronizeTypeExist_m_839869805_0 (PhotonAnimatorView_t_1236218109_0 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesParameterSynchronizeTypeExist(System.String)
extern "C"  bool PhotonAnimatorView_DoesParameterSynchronizeTypeExist_m_533979608_0 (PhotonAnimatorView_t_1236218109_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::GetSynchronizedLayers()
extern "C"  List_1_t1317866799_0 * PhotonAnimatorView_GetSynchronizedLayers_m59114164_0 (PhotonAnimatorView_t_1236218109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::GetSynchronizedParameters()
extern "C"  List_1_t437065943_0 * PhotonAnimatorView_GetSynchronizedParameters_m384934020_0 (PhotonAnimatorView_t_1236218109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetLayerSynchronizeType(System.Int32)
extern "C"  int32_t PhotonAnimatorView_GetLayerSynchronizeType_m_2060589897_0 (PhotonAnimatorView_t_1236218109_0 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetParameterSynchronizeType(System.String)
extern "C"  int32_t PhotonAnimatorView_GetParameterSynchronizeType_m_1050741068_0 (PhotonAnimatorView_t_1236218109_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetLayerSynchronized(System.Int32,PhotonAnimatorView/SynchronizeType)
extern "C"  void PhotonAnimatorView_SetLayerSynchronized_m_451336034_0 (PhotonAnimatorView_t_1236218109_0 * __this, int32_t ___layerIndex, int32_t ___synchronizeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetParameterSynchronized(System.String,PhotonAnimatorView/ParameterType,PhotonAnimatorView/SynchronizeType)
extern "C"  void PhotonAnimatorView_SetParameterSynchronized_m_215032465_0 (PhotonAnimatorView_t_1236218109_0 * __this, String_t* ___name, int32_t ___type, int32_t ___synchronizeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataContinuously()
extern "C"  void PhotonAnimatorView_SerializeDataContinuously_m_512500489_0 (PhotonAnimatorView_t_1236218109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataContinuously()
extern "C"  void PhotonAnimatorView_DeserializeDataContinuously_m740299734_0 (PhotonAnimatorView_t_1236218109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataDiscretly(PhotonStream)
extern "C"  void PhotonAnimatorView_SerializeDataDiscretly_m_1685531100_0 (PhotonAnimatorView_t_1236218109_0 * __this, PhotonStream_t_980664937_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataDiscretly(PhotonStream)
extern "C"  void PhotonAnimatorView_DeserializeDataDiscretly_m_600643035_0 (PhotonAnimatorView_t_1236218109_0 * __this, PhotonStream_t_980664937_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeSynchronizationTypeState(PhotonStream)
extern "C"  void PhotonAnimatorView_SerializeSynchronizationTypeState_m330360780_0 (PhotonAnimatorView_t_1236218109_0 * __this, PhotonStream_t_980664937_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeSynchronizationTypeState(PhotonStream)
extern "C"  void PhotonAnimatorView_DeserializeSynchronizationTypeState_m_1922827989_0 (PhotonAnimatorView_t_1236218109_0 * __this, PhotonStream_t_980664937_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonAnimatorView_OnPhotonSerializeView_m155261554_0 (PhotonAnimatorView_t_1236218109_0 * __this, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
