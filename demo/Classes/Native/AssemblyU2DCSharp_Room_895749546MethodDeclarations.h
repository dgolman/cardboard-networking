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

// Room
struct Room_t_895749546_0;
// System.String
struct String_t;
// RoomOptions
struct RoomOptions_t_69992600_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Room::.ctor(System.String,RoomOptions)
extern "C"  void Room__ctor_m1901968107_0 (Room_t_895749546_0 * __this, String_t* ___roomName, RoomOptions_t_69992600_0 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_playerCount()
extern "C"  int32_t Room_get_playerCount_m_2131747531_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::get_name()
extern "C"  String_t* Room_get_name_m641577115_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_name(System.String)
extern "C"  void Room_set_name_m1793471638_0 (Room_t_895749546_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_maxPlayers()
extern "C"  int32_t Room_get_maxPlayers_m260215657_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_maxPlayers(System.Int32)
extern "C"  void Room_set_maxPlayers_m1153477920_0 (Room_t_895749546_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_open()
extern "C"  bool Room_get_open_m2079152939_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_open(System.Boolean)
extern "C"  void Room_set_open_m_1535369182_0 (Room_t_895749546_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_visible()
extern "C"  bool Room_get_visible_m_1602524525_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_visible(System.Boolean)
extern "C"  void Room_set_visible_m_514739190_0 (Room_t_895749546_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_propertiesListedInLobby()
extern "C"  StringU5BU5D_t_816028754_0* Room_get_propertiesListedInLobby_m_965248907_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_propertiesListedInLobby(System.String[])
extern "C"  void Room_set_propertiesListedInLobby_m1979282174_0 (Room_t_895749546_0 * __this, StringU5BU5D_t_816028754_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_autoCleanUp()
extern "C"  bool Room_get_autoCleanUp_m1408165750_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_masterClientId()
extern "C"  int32_t Room_get_masterClientId_m_523555069_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_masterClientId(System.Int32)
extern "C"  void Room_set_masterClientId_m_164671814_0 (Room_t_895749546_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void Room_SetCustomProperties_m1490416680_0 (Room_t_895749546_0 * __this, Hashtable_t1523952044_0 * ___propertiesToSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable)
extern "C"  void Room_SetCustomProperties_m127465198_0 (Room_t_895749546_0 * __this, Hashtable_t1523952044_0 * ___propertiesToSet, Hashtable_t1523952044_0 * ___expectedValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetPropertiesListedInLobby(System.String[])
extern "C"  void Room_SetPropertiesListedInLobby_m1694516733_0 (Room_t_895749546_0 * __this, StringU5BU5D_t_816028754_0* ___propsListedInLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToString()
extern "C"  String_t* Room_ToString_m_912830637_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToStringFull()
extern "C"  String_t* Room_ToStringFull_m_1149469374_0 (Room_t_895749546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
