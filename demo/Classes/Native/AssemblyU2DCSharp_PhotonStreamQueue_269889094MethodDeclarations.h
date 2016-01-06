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

// PhotonStreamQueue
struct PhotonStreamQueue_t_269889094_0;
// System.Object
struct Object_t;
// PhotonStream
struct PhotonStream_t_980664937_0;

#include "codegen/il2cpp-codegen.h"

// System.Void PhotonStreamQueue::.ctor(System.Int32)
extern "C"  void PhotonStreamQueue__ctor_m172235303_0 (PhotonStreamQueue_t_269889094_0 * __this, int32_t ___sampleRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::BeginWritePackage()
extern "C"  void PhotonStreamQueue_BeginWritePackage_m588799268_0 (PhotonStreamQueue_t_269889094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Reset()
extern "C"  void PhotonStreamQueue_Reset_m1156440195_0 (PhotonStreamQueue_t_269889094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::SendNext(System.Object)
extern "C"  void PhotonStreamQueue_SendNext_m1544978987_0 (PhotonStreamQueue_t_269889094_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStreamQueue::HasQueuedObjects()
extern "C"  bool PhotonStreamQueue_HasQueuedObjects_m_468242207_0 (PhotonStreamQueue_t_269889094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStreamQueue::ReceiveNext()
extern "C"  Object_t * PhotonStreamQueue_ReceiveNext_m1698178143_0 (PhotonStreamQueue_t_269889094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Serialize(PhotonStream)
extern "C"  void PhotonStreamQueue_Serialize_m_1265529832_0 (PhotonStreamQueue_t_269889094_0 * __this, PhotonStream_t_980664937_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Deserialize(PhotonStream)
extern "C"  void PhotonStreamQueue_Deserialize_m_1696019017_0 (PhotonStreamQueue_t_269889094_0 * __this, PhotonStream_t_980664937_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
