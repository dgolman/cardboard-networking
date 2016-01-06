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

// ExitGames.Client.Photon.LoadbalancingPeer
struct LoadbalancingPeer_t1297271776_0;
// System.String
struct String_t;
// TypedLobby
struct TypedLobby_t_1230213433_0;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1329996772_0;
// RoomOptions
struct RoomOptions_t_69992600_0;
// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams
struct EnterRoomParams_t1919929066_0;
// ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t_1937327266_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;
// System.Object
struct Object_t;
// AuthenticationValues
struct AuthenticationValues_t_1611739851_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// RaiseEventOptions
struct RaiseEventOptions_t_73829611_0;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"

// System.Void ExitGames.Client.Photon.LoadbalancingPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadbalancingPeer__ctor_m1770580544_0 (LoadbalancingPeer_t1297271776_0 * __this, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::get_IsProtocolSecure()
extern "C"  bool LoadbalancingPeer_get_IsProtocolSecure_m_308498718_0 (LoadbalancingPeer_t1297271776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpGetRegions(System.String)
extern "C"  bool LoadbalancingPeer_OpGetRegions_m_33282920_0 (LoadbalancingPeer_t1297271776_0 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinLobby(TypedLobby)
extern "C"  bool LoadbalancingPeer_OpJoinLobby_m_2134998655_0 (LoadbalancingPeer_t1297271776_0 * __this, TypedLobby_t_1230213433_0 * ___lobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpLeaveLobby()
extern "C"  bool LoadbalancingPeer_OpLeaveLobby_m14865600_0 (LoadbalancingPeer_t1297271776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadbalancingPeer::RoomOptionsToOpParameters(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,RoomOptions)
extern "C"  void LoadbalancingPeer_RoomOptionsToOpParameters_m1124532854_0 (LoadbalancingPeer_t1297271776_0 * __this, Dictionary_2_t1329996772_0 * ___op, RoomOptions_t_69992600_0 * ___roomOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpCreateRoom(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C"  bool LoadbalancingPeer_OpCreateRoom_m_76245227_0 (LoadbalancingPeer_t1297271776_0 * __this, EnterRoomParams_t1919929066_0 * ___opParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRoom(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C"  bool LoadbalancingPeer_OpJoinRoom_m_614857433_0 (LoadbalancingPeer_t1297271776_0 * __this, EnterRoomParams_t1919929066_0 * ___opParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams)
extern "C"  bool LoadbalancingPeer_OpJoinRandomRoom_m662909958_0 (LoadbalancingPeer_t1297271776_0 * __this, OpJoinRandomRoomParams_t_1937327266_0 * ___opJoinRandomRoomParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpLeaveRoom(System.Boolean)
extern "C"  bool LoadbalancingPeer_OpLeaveRoom_m_1060990774_0 (LoadbalancingPeer_t1297271776_0 * __this, bool ___becomeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpFindFriends(System.String[])
extern "C"  bool LoadbalancingPeer_OpFindFriends_m_629486461_0 (LoadbalancingPeer_t1297271776_0 * __this, StringU5BU5D_t_816028754_0* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C"  bool LoadbalancingPeer_OpSetCustomPropertiesOfActor_m1174113456_0 (LoadbalancingPeer_t1297271776_0 * __this, int32_t ___actorNr, Hashtable_t1523952044_0 * ___actorProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable)
extern "C"  bool LoadbalancingPeer_OpSetPropertiesOfActor_m_66443993_0 (LoadbalancingPeer_t1297271776_0 * __this, int32_t ___actorNr, Hashtable_t1523952044_0 * ___actorProperties, Hashtable_t1523952044_0 * ___expectedProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertyOfRoom(System.Byte,System.Object)
extern "C"  void LoadbalancingPeer_OpSetPropertyOfRoom_m_764067517_0 (LoadbalancingPeer_t1297271776_0 * __this, uint8_t ___propCode, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
extern "C"  bool LoadbalancingPeer_OpSetCustomPropertiesOfRoom_m1105706351_0 (LoadbalancingPeer_t1297271776_0 * __this, Hashtable_t1523952044_0 * ___gameProperties, bool ___broadcast, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,ExitGames.Client.Photon.Hashtable)
extern "C"  bool LoadbalancingPeer_OpSetPropertiesOfRoom_m568385023_0 (LoadbalancingPeer_t1297271776_0 * __this, Hashtable_t1523952044_0 * ___gameProperties, bool ___webForward, Hashtable_t1523952044_0 * ___expectedProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpAuthenticate(System.String,System.String,AuthenticationValues,System.String,System.Boolean)
extern "C"  bool LoadbalancingPeer_OpAuthenticate_m_669126883_0 (LoadbalancingPeer_t1297271776_0 * __this, String_t* ___appId, String_t* ___appVersion, AuthenticationValues_t_1611739851_0 * ___authValues, String_t* ___regionCode, bool ___getLobbyStatistics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpChangeGroups(System.Byte[],System.Byte[])
extern "C"  bool LoadbalancingPeer_OpChangeGroups_m1060066343_0 (LoadbalancingPeer_t1297271776_0 * __this, ByteU5BU5D_t_1238178395_0* ___groupsToRemove, ByteU5BU5D_t_1238178395_0* ___groupsToAdd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool LoadbalancingPeer_OpRaiseEvent_m2037898287_0 (LoadbalancingPeer_t1297271776_0 * __this, uint8_t ___eventCode, Object_t * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t_73829611_0 * ___raiseEventOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
