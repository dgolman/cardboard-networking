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

// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;
// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;
// PhotonView
struct PhotonView_t_751779204_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void PhotonMessageInfo::.ctor()
extern "C"  void PhotonMessageInfo__ctor_m648847986_0 (PhotonMessageInfo_t1537066398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonMessageInfo::.ctor(PhotonPlayer,System.Int32,PhotonView)
extern "C"  void PhotonMessageInfo__ctor_m_836740925_0 (PhotonMessageInfo_t1537066398_0 * __this, PhotonPlayer_t_1074427656_0 * ___player, int32_t ___timestamp, PhotonView_t_751779204_0 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonMessageInfo::get_timestamp()
extern "C"  double PhotonMessageInfo_get_timestamp_m801105536_0 (PhotonMessageInfo_t1537066398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonMessageInfo::ToString()
extern "C"  String_t* PhotonMessageInfo_ToString_m948774971_0 (PhotonMessageInfo_t1537066398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
