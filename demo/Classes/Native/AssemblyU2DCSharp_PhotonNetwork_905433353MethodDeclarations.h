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

// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t_1611739851_0;
// Room
struct Room_t_895749546_0;
// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t_1732823462_0;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t_1442408135_0;
// IPunPrefabPool
struct IPunPrefabPool_t_1021417093_0;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_t_320227445_0;
// TypedLobby
struct TypedLobby_t_1230213433_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// RoomOptions
struct RoomOptions_t_69992600_0;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;
// RoomInfo[]
struct RoomInfoU5BU5D_t377897606_0;
// System.Object
struct Object_t;
// RaiseEventOptions
struct RaiseEventOptions_t_73829611_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// PhotonView
struct PhotonView_t_751779204_0;
// System.Type
struct Type_t;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t1304051115_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ConnectionState556356600.h"
#include "AssemblyU2DCSharp_PeerState_355912780.h"
#include "AssemblyU2DCSharp_ServerConnection_1124228228.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"
#include "AssemblyU2DCSharp_CloudRegionCode404377275.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Matchma_1143686370.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "AssemblyU2DCSharp_PhotonTargets7771595.h"

// System.Void PhotonNetwork::.cctor()
extern "C"  void PhotonNetwork__cctor_m339060500_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_gameVersion()
extern "C"  String_t* PhotonNetwork_get_gameVersion_m532683127_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_gameVersion(System.String)
extern "C"  void PhotonNetwork_set_gameVersion_m_2131097694_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_ServerAddress()
extern "C"  String_t* PhotonNetwork_get_ServerAddress_m_2081970878_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connected()
extern "C"  bool PhotonNetwork_get_connected_m_776781813_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connecting()
extern "C"  bool PhotonNetwork_get_connecting_m1693620120_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connectedAndReady()
extern "C"  bool PhotonNetwork_get_connectedAndReady_m_225043145_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ConnectionState PhotonNetwork::get_connectionState()
extern "C"  int32_t PhotonNetwork_get_connectionState_m804556193_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PeerState PhotonNetwork::get_connectionStateDetailed()
extern "C"  int32_t PhotonNetwork_get_connectionStateDetailed_m1605448757_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection PhotonNetwork::get_Server()
extern "C"  int32_t PhotonNetwork_get_Server_m_1909243525_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues PhotonNetwork::get_AuthValues()
extern "C"  AuthenticationValues_t_1611739851_0 * PhotonNetwork_get_AuthValues_m_1544355941_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_AuthValues(AuthenticationValues)
extern "C"  void PhotonNetwork_set_AuthValues_m_1188387848_0 (Object_t * __this /* static, unused */, AuthenticationValues_t_1611739851_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room PhotonNetwork::get_room()
extern "C"  Room_t_895749546_0 * PhotonNetwork_get_room_m_190921459_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_player()
extern "C"  PhotonPlayer_t_1074427656_0 * PhotonNetwork_get_player_m_1665536779_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_masterClient()
extern "C"  PhotonPlayer_t_1074427656_0 * PhotonNetwork_get_masterClient_m_1884539487_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_playerName()
extern "C"  String_t* PhotonNetwork_get_playerName_m2126678941_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_playerName(System.String)
extern "C"  void PhotonNetwork_set_playerName_m1283129070_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_playerList()
extern "C"  PhotonPlayerU5BU5D_t_1732823462_0* PhotonNetwork_get_playerList_m1877894549_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_otherPlayers()
extern "C"  PhotonPlayerU5BU5D_t_1732823462_0* PhotonNetwork_get_otherPlayers_m1766293752_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::get_Friends()
extern "C"  List_1_t_1442408135_0 * PhotonNetwork_get_Friends_m1312524706_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_Friends(System.Collections.Generic.List`1<FriendInfo>)
extern "C"  void PhotonNetwork_set_Friends_m1955765071_0 (Object_t * __this /* static, unused */, List_1_t_1442408135_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_FriendsListAge()
extern "C"  int32_t PhotonNetwork_get_FriendsListAge_m_1317144814_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IPunPrefabPool PhotonNetwork::get_PrefabPool()
extern "C"  Object_t * PhotonNetwork_get_PrefabPool_m_502302409_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_PrefabPool(IPunPrefabPool)
extern "C"  void PhotonNetwork_set_PrefabPool_m_1929145784_0 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_offlineMode()
extern "C"  bool PhotonNetwork_get_offlineMode_m286556072_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_offlineMode(System.Boolean)
extern "C"  void PhotonNetwork_set_offlineMode_m_2051817865_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_automaticallySyncScene()
extern "C"  bool PhotonNetwork_get_automaticallySyncScene_m_1063103698_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_automaticallySyncScene(System.Boolean)
extern "C"  void PhotonNetwork_set_automaticallySyncScene_m1300580813_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoCleanUpPlayerObjects()
extern "C"  bool PhotonNetwork_get_autoCleanUpPlayerObjects_m_567916546_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoCleanUpPlayerObjects(System.Boolean)
extern "C"  void PhotonNetwork_set_autoCleanUpPlayerObjects_m1474349213_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoJoinLobby()
extern "C"  bool PhotonNetwork_get_autoJoinLobby_m186535775_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoJoinLobby(System.Boolean)
extern "C"  void PhotonNetwork_set_autoJoinLobby_m_1782985746_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_EnableLobbyStatistics()
extern "C"  bool PhotonNetwork_get_EnableLobbyStatistics_m1710484920_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_EnableLobbyStatistics(System.Boolean)
extern "C"  void PhotonNetwork_set_EnableLobbyStatistics_m8913543_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TypedLobbyInfo> PhotonNetwork::get_LobbyStatistics()
extern "C"  List_1_t_320227445_0 * PhotonNetwork_get_LobbyStatistics_m_2059655788_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_LobbyStatistics(System.Collections.Generic.List`1<TypedLobbyInfo>)
extern "C"  void PhotonNetwork_set_LobbyStatistics_m1297503801_0 (Object_t * __this /* static, unused */, List_1_t_320227445_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_insideLobby()
extern "C"  bool PhotonNetwork_get_insideLobby_m_320818756_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby PhotonNetwork::get_lobby()
extern "C"  TypedLobby_t_1230213433_0 * PhotonNetwork_get_lobby_m_153109387_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_lobby(TypedLobby)
extern "C"  void PhotonNetwork_set_lobby_m_1759312764_0 (Object_t * __this /* static, unused */, TypedLobby_t_1230213433_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRate()
extern "C"  int32_t PhotonNetwork_get_sendRate_m762077198_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRate(System.Int32)
extern "C"  void PhotonNetwork_set_sendRate_m_1378856927_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRateOnSerialize()
extern "C"  int32_t PhotonNetwork_get_sendRateOnSerialize_m_64809163_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRateOnSerialize(System.Int32)
extern "C"  void PhotonNetwork_set_sendRateOnSerialize_m259569668_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMessageQueueRunning()
extern "C"  bool PhotonNetwork_get_isMessageQueueRunning_m_2137812339_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_isMessageQueueRunning(System.Boolean)
extern "C"  void PhotonNetwork_set_isMessageQueueRunning_m_326627684_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_unreliableCommandsLimit()
extern "C"  int32_t PhotonNetwork_get_unreliableCommandsLimit_m1432182476_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_unreliableCommandsLimit(System.Int32)
extern "C"  void PhotonNetwork_set_unreliableCommandsLimit_m_630479333_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonNetwork::get_time()
extern "C"  double PhotonNetwork_get_time_m1772017886_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMasterClient()
extern "C"  bool PhotonNetwork_get_isMasterClient_m_1478385481_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_inRoom()
extern "C"  bool PhotonNetwork_get_inRoom_m1914383872_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isNonMasterClientInRoom()
extern "C"  bool PhotonNetwork_get_isNonMasterClientInRoom_m_2113571086_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersOnMaster()
extern "C"  int32_t PhotonNetwork_get_countOfPlayersOnMaster_m_1639248301_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersInRooms()
extern "C"  int32_t PhotonNetwork_get_countOfPlayersInRooms_m_722302333_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayers()
extern "C"  int32_t PhotonNetwork_get_countOfPlayers_m_1792223662_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfRooms()
extern "C"  int32_t PhotonNetwork_get_countOfRooms_m30274008_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_NetworkStatisticsEnabled()
extern "C"  bool PhotonNetwork_get_NetworkStatisticsEnabled_m1979828432_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_NetworkStatisticsEnabled(System.Boolean)
extern "C"  void PhotonNetwork_set_NetworkStatisticsEnabled_m_6721041_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ResentReliableCommands()
extern "C"  int32_t PhotonNetwork_get_ResentReliableCommands_m147202307_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_CrcCheckEnabled()
extern "C"  bool PhotonNetwork_get_CrcCheckEnabled_m2070570031_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_CrcCheckEnabled(System.Boolean)
extern "C"  void PhotonNetwork_set_CrcCheckEnabled_m307773118_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_PacketLossByCrcCheck()
extern "C"  int32_t PhotonNetwork_get_PacketLossByCrcCheck_m_1337824292_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_MaxResendsBeforeDisconnect()
extern "C"  int32_t PhotonNetwork_get_MaxResendsBeforeDisconnect_m1716680149_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_MaxResendsBeforeDisconnect(System.Int32)
extern "C"  void PhotonNetwork_set_MaxResendsBeforeDisconnect_m849168104_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_QuickResends()
extern "C"  int32_t PhotonNetwork_get_QuickResends_m1946329425_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_QuickResends(System.Int32)
extern "C"  void PhotonNetwork_set_QuickResends_m805180388_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SwitchToProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonNetwork_SwitchToProtocol_m_1963195774_0 (Object_t * __this /* static, unused */, uint8_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectUsingSettings(System.String)
extern "C"  bool PhotonNetwork_ConnectUsingSettings_m_962836850_0 (Object_t * __this /* static, unused */, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToMaster(System.String,System.Int32,System.String,System.String)
extern "C"  bool PhotonNetwork_ConnectToMaster_m1805962143_0 (Object_t * __this /* static, unused */, String_t* ___masterServerAddress, int32_t ___port, String_t* ___appID, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToBestCloudServer(System.String)
extern "C"  bool PhotonNetwork_ConnectToBestCloudServer_m_339549764_0 (Object_t * __this /* static, unused */, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToRegion(CloudRegionCode,System.String)
extern "C"  bool PhotonNetwork_ConnectToRegion_m_652583212_0 (Object_t * __this /* static, unused */, int32_t ___region, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::OverrideBestCloudServer(CloudRegionCode)
extern "C"  void PhotonNetwork_OverrideBestCloudServer_m_738620387_0 (Object_t * __this /* static, unused */, int32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RefreshCloudServerRating()
extern "C"  void PhotonNetwork_RefreshCloudServerRating_m_902938907_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::NetworkStatisticsReset()
extern "C"  void PhotonNetwork_NetworkStatisticsReset_m819734089_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::NetworkStatisticsToString()
extern "C"  String_t* PhotonNetwork_NetworkStatisticsToString_m_1376982921_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::InitializeSecurity()
extern "C"  void PhotonNetwork_InitializeSecurity_m70488027_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::VerifyCanUseNetwork()
extern "C"  bool PhotonNetwork_VerifyCanUseNetwork_m2005600809_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Disconnect()
extern "C"  void PhotonNetwork_Disconnect_m1579589767_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::FindFriends(System.String[])
extern "C"  bool PhotonNetwork_FindFriends_m453797657_0 (Object_t * __this /* static, unused */, StringU5BU5D_t_816028754_0* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String)
extern "C"  bool PhotonNetwork_CreateRoom_m296754132_0 (Object_t * __this /* static, unused */, String_t* ___roomName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby)
extern "C"  bool PhotonNetwork_CreateRoom_m1732513597_0 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t_69992600_0 * ___roomOptions, TypedLobby_t_1230213433_0 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby,System.String[])
extern "C"  bool PhotonNetwork_CreateRoom_m1653654935_0 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t_69992600_0 * ___roomOptions, TypedLobby_t_1230213433_0 * ___typedLobby, StringU5BU5D_t_816028754_0* ___expectedUsers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String)
extern "C"  bool PhotonNetwork_JoinRoom_m_1571905690_0 (Object_t * __this /* static, unused */, String_t* ___roomName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinOrCreateRoom(System.String,RoomOptions,TypedLobby)
extern "C"  bool PhotonNetwork_JoinOrCreateRoom_m_2013984374_0 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t_69992600_0 * ___roomOptions, TypedLobby_t_1230213433_0 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom()
extern "C"  bool PhotonNetwork_JoinRandomRoom_m323264447_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte)
extern "C"  bool PhotonNetwork_JoinRandomRoom_m2018071634_0 (Object_t * __this /* static, unused */, Hashtable_t1523952044_0 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,ExitGames.Client.Photon.MatchmakingMode,TypedLobby,System.String)
extern "C"  bool PhotonNetwork_JoinRandomRoom_m_221460943_0 (Object_t * __this /* static, unused */, Hashtable_t1523952044_0 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, uint8_t ___matchingType, TypedLobby_t_1230213433_0 * ___typedLobby, String_t* ___sqlLobbyFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::EnterOfflineRoom(System.String,RoomOptions,System.Boolean)
extern "C"  void PhotonNetwork_EnterOfflineRoom_m_1627223677_0 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t_69992600_0 * ___roomOptions, bool ___createdRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby()
extern "C"  bool PhotonNetwork_JoinLobby_m1679757655_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby(TypedLobby)
extern "C"  bool PhotonNetwork_JoinLobby_m1472725931_0 (Object_t * __this /* static, unused */, TypedLobby_t_1230213433_0 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveLobby()
extern "C"  bool PhotonNetwork_LeaveLobby_m1572363094_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveRoom()
extern "C"  bool PhotonNetwork_LeaveRoom_m_1716771011_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RoomInfo[] PhotonNetwork::GetRoomList()
extern "C"  RoomInfoU5BU5D_t377897606_0* PhotonNetwork_GetRoomList_m_1354828136_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetPlayerCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonNetwork_SetPlayerCustomProperties_m_1687277394_0 (Object_t * __this /* static, unused */, Hashtable_t1523952044_0 * ___customProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemovePlayerCustomProperties(System.String[])
extern "C"  void PhotonNetwork_RemovePlayerCustomProperties_m1576535756_0 (Object_t * __this /* static, unused */, StringU5BU5D_t_816028754_0* ___customPropertiesToDelete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::RaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool PhotonNetwork_RaiseEvent_m633330501_0 (Object_t * __this /* static, unused */, uint8_t ___eventCode, Object_t * ___eventContent, bool ___sendReliable, RaiseEventOptions_t_73829611_0 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID()
extern "C"  int32_t PhotonNetwork_AllocateViewID_m65702650_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateSceneViewID()
extern "C"  int32_t PhotonNetwork_AllocateSceneViewID_m_699953068_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID(System.Int32)
extern "C"  int32_t PhotonNetwork_AllocateViewID_m418224459_0 (Object_t * __this /* static, unused */, int32_t ___ownerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] PhotonNetwork::AllocateSceneViewIDs(System.Int32)
extern "C"  Int32U5BU5D_t1872284309_0* PhotonNetwork_AllocateSceneViewIDs_m_1022653452_0 (Object_t * __this /* static, unused */, int32_t ___countOfNewViews, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::UnAllocateViewID(System.Int32)
extern "C"  void PhotonNetwork_UnAllocateViewID_m_1231021870_0 (Object_t * __this /* static, unused */, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C"  GameObject_t_184308134_0 * PhotonNetwork_Instantiate_m_1078241915_0 (Object_t * __this /* static, unused */, String_t* ___prefabName, Vector3_t_725341337_0  ___position, Quaternion_t1989680039_0  ___rotation, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C"  GameObject_t_184308134_0 * PhotonNetwork_Instantiate_m_1040104975_0 (Object_t * __this /* static, unused */, String_t* ___prefabName, Vector3_t_725341337_0  ___position, Quaternion_t1989680039_0  ___rotation, int32_t ___group, ObjectU5BU5D_t1774424924_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::InstantiateSceneObject(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C"  GameObject_t_184308134_0 * PhotonNetwork_InstantiateSceneObject_m1731013008_0 (Object_t * __this /* static, unused */, String_t* ___prefabName, Vector3_t_725341337_0  ___position, Quaternion_t1989680039_0  ___rotation, int32_t ___group, ObjectU5BU5D_t1774424924_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::GetPing()
extern "C"  int32_t PhotonNetwork_GetPing_m_296236211_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::FetchServerTimestamp()
extern "C"  void PhotonNetwork_FetchServerTimestamp_m1089274660_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SendOutgoingCommands()
extern "C"  void PhotonNetwork_SendOutgoingCommands_m_1748951769_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CloseConnection(PhotonPlayer)
extern "C"  bool PhotonNetwork_CloseConnection_m_1059552636_0 (Object_t * __this /* static, unused */, PhotonPlayer_t_1074427656_0 * ___kickPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::SetMasterClient(PhotonPlayer)
extern "C"  bool PhotonNetwork_SetMasterClient_m_1362504163_0 (Object_t * __this /* static, unused */, PhotonPlayer_t_1074427656_0 * ___masterClientPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(PhotonView)
extern "C"  void PhotonNetwork_Destroy_m252146064_0 (Object_t * __this /* static, unused */, PhotonView_t_751779204_0 * ___targetView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(UnityEngine.GameObject)
extern "C"  void PhotonNetwork_Destroy_m477919625_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___targetGo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(PhotonPlayer)
extern "C"  void PhotonNetwork_DestroyPlayerObjects_m_1273104953_0 (Object_t * __this /* static, unused */, PhotonPlayer_t_1074427656_0 * ___targetPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(System.Int32)
extern "C"  void PhotonNetwork_DestroyPlayerObjects_m_505481067_0 (Object_t * __this /* static, unused */, int32_t ___targetPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyAll()
extern "C"  void PhotonNetwork_DestroyAll_m1618407538_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonPlayer)
extern "C"  void PhotonNetwork_RemoveRPCs_m1760076608_0 (Object_t * __this /* static, unused */, PhotonPlayer_t_1074427656_0 * ___targetPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonView)
extern "C"  void PhotonNetwork_RemoveRPCs_m_2017291780_0 (Object_t * __this /* static, unused */, PhotonView_t_751779204_0 * ___targetPhotonView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCsInGroup(System.Int32)
extern "C"  void PhotonNetwork_RemoveRPCsInGroup_m_1646013744_0 (Object_t * __this /* static, unused */, int32_t ___targetGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C"  void PhotonNetwork_RPC_m267210412_0 (Object_t * __this /* static, unused */, PhotonView_t_751779204_0 * ___view, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t1774424924_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void PhotonNetwork_RPC_m_2142679753_0 (Object_t * __this /* static, unused */, PhotonView_t_751779204_0 * ___view, String_t* ___methodName, PhotonPlayer_t_1074427656_0 * ___targetPlayer, bool ___encrpyt, ObjectU5BU5D_t1774424924_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::CacheSendMonoMessageTargets(System.Type)
extern "C"  void PhotonNetwork_CacheSendMonoMessageTargets_m1751448378_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::FindGameObjectsWithComponent(System.Type)
extern "C"  HashSet_1_t1304051115_0 * PhotonNetwork_FindGameObjectsWithComponent_m1439906509_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C"  void PhotonNetwork_SetReceivingEnabled_m1986583410_0 (Object_t * __this /* static, unused */, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C"  void PhotonNetwork_SetReceivingEnabled_m_930692596_0 (Object_t * __this /* static, unused */, Int32U5BU5D_t1872284309_0* ___enableGroups, Int32U5BU5D_t1872284309_0* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32,System.Boolean)
extern "C"  void PhotonNetwork_SetSendingEnabled_m_1376565012_0 (Object_t * __this /* static, unused */, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C"  void PhotonNetwork_SetSendingEnabled_m1194047750_0 (Object_t * __this /* static, unused */, Int32U5BU5D_t1872284309_0* ___enableGroups, Int32U5BU5D_t1872284309_0* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetLevelPrefix(System.Int16)
extern "C"  void PhotonNetwork_SetLevelPrefix_m_256588246_0 (Object_t * __this /* static, unused */, int16_t ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.Int32)
extern "C"  void PhotonNetwork_LoadLevel_m1678905958_0 (Object_t * __this /* static, unused */, int32_t ___levelNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.String)
extern "C"  void PhotonNetwork_LoadLevel_m963175565_0 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::WebRpc(System.String,System.Object)
extern "C"  bool PhotonNetwork_WebRpc_m1783047400_0 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
