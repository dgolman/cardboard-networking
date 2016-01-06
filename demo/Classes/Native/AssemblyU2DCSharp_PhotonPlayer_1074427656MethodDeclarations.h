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

// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,System.String)
extern "C"  void PhotonPlayer__ctor_m317548062_0 (PhotonPlayer_t_1074427656_0 * __this, bool ___isLocal, int32_t ___actorID, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer__ctor_m1298040232_0 (PhotonPlayer_t_1074427656_0 * __this, bool ___isLocal, int32_t ___actorID, Hashtable_t1523952044_0 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::get_ID()
extern "C"  int32_t PhotonPlayer_get_ID_m_2036441928_0 (PhotonPlayer_t_1074427656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_name()
extern "C"  String_t* PhotonPlayer_get_name_m450311229_0 (PhotonPlayer_t_1074427656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_name(System.String)
extern "C"  void PhotonPlayer_set_name_m_1767295692_0 (PhotonPlayer_t_1074427656_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_isMasterClient()
extern "C"  bool PhotonPlayer_get_isMasterClient_m1220929754_0 (PhotonPlayer_t_1074427656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_customProperties()
extern "C"  Hashtable_t1523952044_0 * PhotonPlayer_get_customProperties_m563864832_0 (PhotonPlayer_t_1074427656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_customProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer_set_customProperties_m1860785445_0 (PhotonPlayer_t_1074427656_0 * __this, Hashtable_t1523952044_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_allProperties()
extern "C"  Hashtable_t1523952044_0 * PhotonPlayer_get_allProperties_m1867860506_0 (PhotonPlayer_t_1074427656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(System.Object)
extern "C"  bool PhotonPlayer_Equals_m_1741701413_0 (PhotonPlayer_t_1074427656_0 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::GetHashCode()
extern "C"  int32_t PhotonPlayer_GetHashCode_m_973703169_0 (PhotonPlayer_t_1074427656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalChangeLocalID(System.Int32)
extern "C"  void PhotonPlayer_InternalChangeLocalID_m745597830_0 (PhotonPlayer_t_1074427656_0 * __this, int32_t ___newID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer_InternalCacheProperties_m294387256_0 (PhotonPlayer_t_1074427656_0 * __this, Hashtable_t1523952044_0 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer_SetCustomProperties_m_2105909302_0 (PhotonPlayer_t_1074427656_0 * __this, Hashtable_t1523952044_0 * ___propertiesToSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer_SetCustomProperties_m1972107792_0 (PhotonPlayer_t_1074427656_0 * __this, Hashtable_t1523952044_0 * ___propertiesToSet, Hashtable_t1523952044_0 * ___expectedValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Find(System.Int32)
extern "C"  PhotonPlayer_t_1074427656_0 * PhotonPlayer_Find_m_647803280_0 (Object_t * __this /* static, unused */, int32_t ___ID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Get(System.Int32)
extern "C"  PhotonPlayer_t_1074427656_0 * PhotonPlayer_Get_m_289658525_0 (PhotonPlayer_t_1074427656_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNext()
extern "C"  PhotonPlayer_t_1074427656_0 * PhotonPlayer_GetNext_m_205351707_0 (PhotonPlayer_t_1074427656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(PhotonPlayer)
extern "C"  PhotonPlayer_t_1074427656_0 * PhotonPlayer_GetNextFor_m2007933577_0 (PhotonPlayer_t_1074427656_0 * __this, PhotonPlayer_t_1074427656_0 * ___currentPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(System.Int32)
extern "C"  PhotonPlayer_t_1074427656_0 * PhotonPlayer_GetNextFor_m_1519409833_0 (PhotonPlayer_t_1074427656_0 * __this, int32_t ___currentPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToString()
extern "C"  String_t* PhotonPlayer_ToString_m_1104096523_0 (PhotonPlayer_t_1074427656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToStringFull()
extern "C"  String_t* PhotonPlayer_ToStringFull_m_91791388_0 (PhotonPlayer_t_1074427656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
