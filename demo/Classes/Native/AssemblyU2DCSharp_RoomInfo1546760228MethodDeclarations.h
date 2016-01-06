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

// RoomInfo
struct RoomInfo_t1546760228_0;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo__ctor_m1206933654_0 (RoomInfo_t1546760228_0 * __this, String_t* ___roomName, Hashtable_t1523952044_0 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_removedFromList()
extern "C"  bool RoomInfo_get_removedFromList_m_1219462277_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_removedFromList(System.Boolean)
extern "C"  void RoomInfo_set_removedFromList_m1253086450_0 (RoomInfo_t1546760228_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_serverSideMasterClient()
extern "C"  bool RoomInfo_get_serverSideMasterClient_m124174230_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_serverSideMasterClient(System.Boolean)
extern "C"  void RoomInfo_set_serverSideMasterClient_m795227981_0 (RoomInfo_t1546760228_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable RoomInfo::get_customProperties()
extern "C"  Hashtable_t1523952044_0 * RoomInfo_get_customProperties_m_95800020_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::get_name()
extern "C"  String_t* RoomInfo_get_name_m_737373847_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::get_playerCount()
extern "C"  int32_t RoomInfo_get_playerCount_m1346795047_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_playerCount(System.Int32)
extern "C"  void RoomInfo_set_playerCount_m_1471540014_0 (RoomInfo_t1546760228_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_isLocalClientInside()
extern "C"  bool RoomInfo_get_isLocalClientInside_m1475051835_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_isLocalClientInside(System.Boolean)
extern "C"  void RoomInfo_set_isLocalClientInside_m17885874_0 (RoomInfo_t1546760228_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte RoomInfo::get_maxPlayers()
extern "C"  uint8_t RoomInfo_get_maxPlayers_m2135404469_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_open()
extern "C"  bool RoomInfo_get_open_m_554792071_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_visible()
extern "C"  bool RoomInfo_get_visible_m_405819515_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::Equals(System.Object)
extern "C"  bool RoomInfo_Equals_m_1971196497_0 (RoomInfo_t1546760228_0 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::GetHashCode()
extern "C"  int32_t RoomInfo_GetHashCode_m1284300243_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToString()
extern "C"  String_t* RoomInfo_ToString_m2003185697_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToStringFull()
extern "C"  String_t* RoomInfo_ToStringFull_m842155792_0 (RoomInfo_t1546760228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::CacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo_CacheProperties_m2116874567_0 (RoomInfo_t1546760228_0 * __this, Hashtable_t1523952044_0 * ___propertiesToCache, const MethodInfo* method) IL2CPP_METHOD_ATTR;
