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

// NetworkingPeer
struct NetworkingPeer_t_1428208079_0;
// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t_1611739851_0;
// System.Collections.Generic.List`1<Region>
struct List_1_t591868721_0;
// TypedLobby
struct TypedLobby_t_1230213433_0;
// Room
struct Room_t_895749546_0;
// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;
// ExitGames.Client.Photon.EventData
struct EventData_t1226420112_0;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t_1732823462_0;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t_914439948_0;
// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams
struct EnterRoomParams_t1919929066_0;
// ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t_1937327266_0;
// System.Object
struct Object_t;
// RaiseEventOptions
struct RaiseEventOptions_t_73829611_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t_1161824911_0;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// PhotonView
struct PhotonView_t_751779204_0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t_92453903_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"
#include "AssemblyU2DCSharp_ServerConnection_1124228228.h"
#include "AssemblyU2DCSharp_PeerState_355912780.h"
#include "AssemblyU2DCSharp_CloudRegionCode404377275.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel842211397.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode_1347045293.h"
#include "AssemblyU2DCSharp_PhotonNetworkingMessage_267197444.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "AssemblyU2DCSharp_PhotonTargets7771595.h"

// System.Void NetworkingPeer::.ctor(System.String,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void NetworkingPeer__ctor_m1317967705_0 (NetworkingPeer_t_1428208079_0 * __this, String_t* ___playername, uint8_t ___connectionProtocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::.cctor()
extern "C"  void NetworkingPeer__cctor_m2067385736_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mAppVersionPun()
extern "C"  String_t* NetworkingPeer_get_mAppVersionPun_m_1307849968_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues NetworkingPeer::get_CustomAuthenticationValues()
extern "C"  AuthenticationValues_t_1611739851_0 * NetworkingPeer_get_CustomAuthenticationValues_m226131286_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CustomAuthenticationValues(AuthenticationValues)
extern "C"  void NetworkingPeer_set_CustomAuthenticationValues_m_165644915_0 (NetworkingPeer_t_1428208079_0 * __this, AuthenticationValues_t_1611739851_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_NameServerAddress()
extern "C"  String_t* NetworkingPeer_get_NameServerAddress_m_1725922595_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_MasterServerAddress()
extern "C"  String_t* NetworkingPeer_get_MasterServerAddress_m_1195580250_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_MasterServerAddress(System.String)
extern "C"  void NetworkingPeer_set_MasterServerAddress_m1876520365_0 (NetworkingPeer_t_1428208079_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mGameserver()
extern "C"  String_t* NetworkingPeer_get_mGameserver_m356331545_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameserver(System.String)
extern "C"  void NetworkingPeer_set_mGameserver_m_2076199398_0 (NetworkingPeer_t_1428208079_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection NetworkingPeer::get_server()
extern "C"  int32_t NetworkingPeer_get_server_m1736361927_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_server(ServerConnection)
extern "C"  void NetworkingPeer_set_server_m_1824082306_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PeerState NetworkingPeer::get_State()
extern "C"  int32_t NetworkingPeer_get_State_m1762205895_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_State(PeerState)
extern "C"  void NetworkingPeer_set_State_m_48588436_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsUsingNameServer()
extern "C"  bool NetworkingPeer_get_IsUsingNameServer_m1734324494_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_IsUsingNameServer(System.Boolean)
extern "C"  void NetworkingPeer_set_IsUsingNameServer_m1440646725_0 (NetworkingPeer_t_1428208079_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsAuthorizeSecretAvailable()
extern "C"  bool NetworkingPeer_get_IsAuthorizeSecretAvailable_m1198838518_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Region> NetworkingPeer::get_AvailableRegions()
extern "C"  List_1_t591868721_0 * NetworkingPeer_get_AvailableRegions_m1464802245_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_AvailableRegions(System.Collections.Generic.List`1<Region>)
extern "C"  void NetworkingPeer_set_AvailableRegions_m569024500_0 (NetworkingPeer_t_1428208079_0 * __this, List_1_t591868721_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode NetworkingPeer::get_CloudRegion()
extern "C"  int32_t NetworkingPeer_get_CloudRegion_m1867522374_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CloudRegion(CloudRegionCode)
extern "C"  void NetworkingPeer_set_CloudRegion_m_1793878067_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_requestLobbyStatistics()
extern "C"  bool NetworkingPeer_get_requestLobbyStatistics_m974171462_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby NetworkingPeer::get_lobby()
extern "C"  TypedLobby_t_1230213433_0 * NetworkingPeer_get_lobby_m_285371521_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_lobby(TypedLobby)
extern "C"  void NetworkingPeer_set_lobby_m_83101040_0 (NetworkingPeer_t_1428208079_0 * __this, TypedLobby_t_1230213433_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersOnMasterCount()
extern "C"  int32_t NetworkingPeer_get_mPlayersOnMasterCount_m_903842827_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersOnMasterCount(System.Int32)
extern "C"  void NetworkingPeer_set_mPlayersOnMasterCount_m1534284448_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mGameCount()
extern "C"  int32_t NetworkingPeer_get_mGameCount_m_1991492890_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameCount(System.Int32)
extern "C"  void NetworkingPeer_set_mGameCount_m_625714531_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersInRoomsCount()
extern "C"  int32_t NetworkingPeer_get_mPlayersInRoomsCount_m_980379849_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersInRoomsCount(System.Int32)
extern "C"  void NetworkingPeer_set_mPlayersInRoomsCount_m1162296814_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_FriendsListAge()
extern "C"  int32_t NetworkingPeer_get_FriendsListAge_m1720782690_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_PlayerName()
extern "C"  String_t* NetworkingPeer_get_PlayerName_m326041303_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayerName(System.String)
extern "C"  void NetworkingPeer_set_PlayerName_m2017036506_0 (NetworkingPeer_t_1428208079_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room NetworkingPeer::get_CurrentGame()
extern "C"  Room_t_895749546_0 * NetworkingPeer_get_CurrentGame_m_2092193501_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CurrentGame(Room)
extern "C"  void NetworkingPeer_set_CurrentGame_m_128520970_0 (NetworkingPeer_t_1428208079_0 * __this, Room_t_895749546_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::get_mLocalActor()
extern "C"  PhotonPlayer_t_1074427656_0 * NetworkingPeer_get_mLocalActor_m1427871985_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mLocalActor(PhotonPlayer)
extern "C"  void NetworkingPeer_set_mLocalActor_m1230272320_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonPlayer_t_1074427656_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mMasterClientId()
extern "C"  int32_t NetworkingPeer_get_mMasterClientId_m_68816415_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mMasterClientId(System.Int32)
extern "C"  void NetworkingPeer_set_mMasterClientId_m_240944628_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::GetNameServerAddress()
extern "C"  String_t* NetworkingPeer_GetNameServerAddress_m_10214542_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,System.String)
extern "C"  bool NetworkingPeer_Connect_m671051397_0 (NetworkingPeer_t_1428208079_0 * __this, String_t* ___serverAddress, String_t* ___applicationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,ServerConnection)
extern "C"  bool NetworkingPeer_Connect_m1995754780_0 (NetworkingPeer_t_1428208079_0 * __this, String_t* ___serverAddress, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToNameServer()
extern "C"  bool NetworkingPeer_ConnectToNameServer_m544796162_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToRegionMaster(CloudRegionCode)
extern "C"  bool NetworkingPeer_ConnectToRegionMaster_m_1053592078_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetRegions()
extern "C"  bool NetworkingPeer_GetRegions_m1913293212_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::Disconnect()
extern "C"  void NetworkingPeer_Disconnect_m_1056281349_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DisconnectToReconnect()
extern "C"  void NetworkingPeer_DisconnectToReconnect_m_1703650109_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftLobbyCleanup()
extern "C"  void NetworkingPeer_LeftLobbyCleanup_m_296955084_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftRoomCleanup()
extern "C"  void NetworkingPeer_LeftRoomCleanup_m782909349_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LocalCleanupAnythingInstantiated(System.Boolean)
extern "C"  void NetworkingPeer_LocalCleanupAnythingInstantiated_m1932669643_0 (NetworkingPeer_t_1428208079_0 * __this, bool ___destroyInstantiatedGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ReadoutProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  void NetworkingPeer_ReadoutProperties_m_1206901965_0 (NetworkingPeer_t_1428208079_0 * __this, Hashtable_t1523952044_0 * ___gameProperties, Hashtable_t1523952044_0 * ___pActorProperties, int32_t ___targetActorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::AddNewPlayer(System.Int32,PhotonPlayer)
extern "C"  void NetworkingPeer_AddNewPlayer_m_1154873255_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___ID, PhotonPlayer_t_1074427656_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemovePlayer(System.Int32,PhotonPlayer)
extern "C"  void NetworkingPeer_RemovePlayer_m_1430080076_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___ID, PhotonPlayer_t_1074427656_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RebuildPlayerListCopies()
extern "C"  void NetworkingPeer_RebuildPlayerListCopies_m742653232_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ResetPhotonViewsOnSerialize()
extern "C"  void NetworkingPeer_ResetPhotonViewsOnSerialize_m_208185311_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::HandleEventLeave(System.Int32,ExitGames.Client.Photon.EventData)
extern "C"  void NetworkingPeer_HandleEventLeave_m180451735_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___actorID, EventData_t1226420112_0 * ___evLeave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CheckMasterClient(System.Int32)
extern "C"  void NetworkingPeer_CheckMasterClient_m_1654946071_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___leavingPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdateMasterClient()
extern "C"  void NetworkingPeer_UpdateMasterClient_m_904120299_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::ReturnLowestPlayerId(PhotonPlayer[],System.Int32)
extern "C"  int32_t NetworkingPeer_ReturnLowestPlayerId_m1091844043_0 (Object_t * __this /* static, unused */, PhotonPlayerU5BU5D_t_1732823462_0* ___players, int32_t ___playerIdToIgnore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32,System.Boolean)
extern "C"  bool NetworkingPeer_SetMasterClient_m_88630386_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___playerId, bool ___sync, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32)
extern "C"  bool NetworkingPeer_SetMasterClient_m_1477593073_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___nextMasterId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetActorPropertiesForActorNr(ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  Hashtable_t1523952044_0 * NetworkingPeer_GetActorPropertiesForActorNr_m565099673_0 (NetworkingPeer_t_1428208079_0 * __this, Hashtable_t1523952044_0 * ___actorProperties, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::GetPlayerWithId(System.Int32)
extern "C"  PhotonPlayer_t_1074427656_0 * NetworkingPeer_GetPlayerWithId_m_1641695700_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendPlayerName()
extern "C"  void NetworkingPeer_SendPlayerName_m1081713171_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::GameEnteredOnGameServer(ExitGames.Client.Photon.OperationResponse)
extern "C"  void NetworkingPeer_GameEnteredOnGameServer_m_1634710840_0 (NetworkingPeer_t_1428208079_0 * __this, OperationResponse_t_914439948_0 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetLocalActorProperties()
extern "C"  Hashtable_t1523952044_0 * NetworkingPeer_GetLocalActorProperties_m695101737_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ChangeLocalID(System.Int32)
extern "C"  void NetworkingPeer_ChangeLocalID_m_1718107094_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___newID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpCreateGame(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C"  bool NetworkingPeer_OpCreateGame_m1793875467_0 (NetworkingPeer_t_1428208079_0 * __this, EnterRoomParams_t1919929066_0 * ___enterRoomParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRoom(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C"  bool NetworkingPeer_OpJoinRoom_m1761241300_0 (NetworkingPeer_t_1428208079_0 * __this, EnterRoomParams_t1919929066_0 * ___opParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams)
extern "C"  bool NetworkingPeer_OpJoinRandomRoom_m633139577_0 (NetworkingPeer_t_1428208079_0 * __this, OpJoinRandomRoomParams_t_1937327266_0 * ___opJoinRandomRoomParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpLeave()
extern "C"  bool NetworkingPeer_OpLeave_m431695621_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool NetworkingPeer_OpRaiseEvent_m_1255719582_0 (NetworkingPeer_t_1428208079_0 * __this, uint8_t ___eventCode, Object_t * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t_73829611_0 * ___raiseEventOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void NetworkingPeer_DebugReturn_m903692375_0 (NetworkingPeer_t_1428208079_0 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void NetworkingPeer_OnOperationResponse_m_1406351368_0 (NetworkingPeer_t_1428208079_0 * __this, OperationResponse_t_914439948_0 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpFindFriends(System.String[])
extern "C"  bool NetworkingPeer_OpFindFriends_m421399926_0 (NetworkingPeer_t_1428208079_0 * __this, StringU5BU5D_t_816028754_0* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C"  void NetworkingPeer_OnStatusChanged_m_1392987795_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnEvent(ExitGames.Client.Photon.EventData)
extern "C"  void NetworkingPeer_OnEvent_m507569738_0 (NetworkingPeer_t_1428208079_0 * __this, EventData_t1226420112_0 * ___photonEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdatedActorList(System.Int32[])
extern "C"  void NetworkingPeer_UpdatedActorList_m778388614_0 (NetworkingPeer_t_1428208079_0 * __this, Int32U5BU5D_t1872284309_0* ___actorsInRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendVacantViewIds()
extern "C"  void NetworkingPeer_SendVacantViewIds_m348920383_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendMonoMessage(PhotonNetworkingMessage,System.Object[])
extern "C"  void NetworkingPeer_SendMonoMessage_m_538917304_0 (Object_t * __this /* static, unused */, int32_t ___methodString, ObjectU5BU5D_t1774424924_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ExecuteRpc(ExitGames.Client.Photon.Hashtable,PhotonPlayer)
extern "C"  void NetworkingPeer_ExecuteRpc_m1844326476_0 (NetworkingPeer_t_1428208079_0 * __this, Hashtable_t1523952044_0 * ___rpcData, PhotonPlayer_t_1074427656_0 * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::CheckTypeMatch(System.Reflection.ParameterInfo[],System.Type[])
extern "C"  bool NetworkingPeer_CheckTypeMatch_m_1447975880_0 (NetworkingPeer_t_1428208079_0 * __this, ParameterInfoU5BU5D_t_1161824911_0* ___methodParameters, TypeU5BU5D_t_722972841_0* ___callParameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::SendInstantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Int32[],System.Object[],System.Boolean)
extern "C"  Hashtable_t1523952044_0 * NetworkingPeer_SendInstantiate_m1738477599_0 (NetworkingPeer_t_1428208079_0 * __this, String_t* ___prefabName, Vector3_t_725341337_0  ___position, Quaternion_t1989680039_0  ___rotation, int32_t ___group, Int32U5BU5D_t1872284309_0* ___viewIDs, ObjectU5BU5D_t1774424924_0* ___data, bool ___isGlobalObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NetworkingPeer::DoInstantiate(ExitGames.Client.Photon.Hashtable,PhotonPlayer,UnityEngine.GameObject)
extern "C"  GameObject_t_184308134_0 * NetworkingPeer_DoInstantiate_m896993236_0 (NetworkingPeer_t_1428208079_0 * __this, Hashtable_t1523952044_0 * ___evData, PhotonPlayer_t_1074427656_0 * ___photonPlayer, GameObject_t_184308134_0 * ___resourceGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::StoreInstantiationData(System.Int32,System.Object[])
extern "C"  void NetworkingPeer_StoreInstantiationData_m2080712914_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___instantiationId, ObjectU5BU5D_t1774424924_0* ___instantiationData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::FetchInstantiationData(System.Int32)
extern "C"  ObjectU5BU5D_t1774424924_0* NetworkingPeer_FetchInstantiationData_m_782928832_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___instantiationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiationData(System.Int32)
extern "C"  void NetworkingPeer_RemoveInstantiationData_m1036475751_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___instantiationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyPlayerObjects(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_DestroyPlayerObjects_m_1212994988_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___playerId, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyAll(System.Boolean)
extern "C"  void NetworkingPeer_DestroyAll_m_1117132835_0 (NetworkingPeer_t_1428208079_0 * __this, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiatedGO(UnityEngine.GameObject,System.Boolean)
extern "C"  void NetworkingPeer_RemoveInstantiatedGO_m_649656064_0 (NetworkingPeer_t_1428208079_0 * __this, GameObject_t_184308134_0 * ___go, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::GetInstantiatedObjectsId(UnityEngine.GameObject)
extern "C"  int32_t NetworkingPeer_GetInstantiatedObjectsId_m1262388260_0 (NetworkingPeer_t_1428208079_0 * __this, GameObject_t_184308134_0 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ServerCleanInstantiateAndDestroy(System.Int32,System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_ServerCleanInstantiateAndDestroy_m_470889411_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___instantiateId, int32_t ___creatorId, bool ___isRuntimeInstantiated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_SendDestroyOfPlayer_m_1000271682_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfAll()
extern "C"  void NetworkingPeer_SendDestroyOfAll_m_429430025_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveFromServerInstantiationsOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_OpRemoveFromServerInstantiationsOfPlayer_m1649569280_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RequestOwnership(System.Int32,System.Int32)
extern "C"  void NetworkingPeer_RequestOwnership_m152523143_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___viewID, int32_t ___fromOwner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::TransferOwnership(System.Int32,System.Int32)
extern "C"  void NetworkingPeer_TransferOwnership_m167016799_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___viewID, int32_t ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::LocalCleanPhotonView(PhotonView)
extern "C"  bool NetworkingPeer_LocalCleanPhotonView_m_728153391_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonView_t_751779204_0 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView NetworkingPeer::GetPhotonView(System.Int32)
extern "C"  PhotonView_t_751779204_0 * NetworkingPeer_GetPhotonView_m1242264559_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RegisterPhotonView(PhotonView)
extern "C"  void NetworkingPeer_RegisterPhotonView_m_944511262_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonView_t_751779204_0 * ___netView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(System.Int32)
extern "C"  void NetworkingPeer_OpCleanRpcBuffer_m878784365_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___actorNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCacheOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_OpRemoveCompleteCacheOfPlayer_m1436567920_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___actorNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCache()
extern "C"  void NetworkingPeer_OpRemoveCompleteCache_m_199892249_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveCacheOfLeftPlayers()
extern "C"  void NetworkingPeer_RemoveCacheOfLeftPlayers_m_1135332875_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CleanRpcBufferIfMine(PhotonView)
extern "C"  void NetworkingPeer_CleanRpcBufferIfMine_m1184676746_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonView_t_751779204_0 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(PhotonView)
extern "C"  void NetworkingPeer_OpCleanRpcBuffer_m_499456229_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonView_t_751779204_0 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveRPCsInGroup(System.Int32)
extern "C"  void NetworkingPeer_RemoveRPCsInGroup_m_28726820_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelPrefix(System.Int16)
extern "C"  void NetworkingPeer_SetLevelPrefix_m393816734_0 (NetworkingPeer_t_1428208079_0 * __this, int16_t ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void NetworkingPeer_RPC_m1166251331_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonView_t_751779204_0 * ___view, String_t* ___methodName, PhotonPlayer_t_1074427656_0 * ___player, bool ___encrypt, ObjectU5BU5D_t1774424924_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C"  void NetworkingPeer_RPC_m_235141088_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonView_t_751779204_0 * ___view, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t1774424924_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_SetReceivingEnabled_m140672486_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C"  void NetworkingPeer_SetReceivingEnabled_m_1029597312_0 (NetworkingPeer_t_1428208079_0 * __this, Int32U5BU5D_t1872284309_0* ___enableGroups, Int32U5BU5D_t1872284309_0* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_SetSendingEnabled_m_350554016_0 (NetworkingPeer_t_1428208079_0 * __this, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C"  void NetworkingPeer_SetSendingEnabled_m_651863174_0 (NetworkingPeer_t_1428208079_0 * __this, Int32U5BU5D_t1872284309_0* ___enableGroups, Int32U5BU5D_t1872284309_0* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::NewSceneLoaded()
extern "C"  void NetworkingPeer_NewSceneLoaded_m_1578366448_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RunViewUpdate()
extern "C"  void NetworkingPeer_RunViewUpdate_m203367516_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::OnSerializeWrite(PhotonView)
extern "C"  Hashtable_t1523952044_0 * NetworkingPeer_OnSerializeWrite_m_806780183_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonView_t_751779204_0 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnSerializeRead(ExitGames.Client.Photon.Hashtable,PhotonPlayer,System.Int32,System.Int16)
extern "C"  void NetworkingPeer_OnSerializeRead_m223648689_0 (NetworkingPeer_t_1428208079_0 * __this, Hashtable_t1523952044_0 * ___data, PhotonPlayer_t_1074427656_0 * ___sender, int32_t ___networkTime, int16_t ___correctPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::AlmostEquals(System.Object[],System.Object[])
extern "C"  bool NetworkingPeer_AlmostEquals_m1193338430_0 (NetworkingPeer_t_1428208079_0 * __this, ObjectU5BU5D_t1774424924_0* ___lastData, ObjectU5BU5D_t1774424924_0* ___currentContent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::DeltaCompressionWrite(PhotonView,ExitGames.Client.Photon.Hashtable)
extern "C"  bool NetworkingPeer_DeltaCompressionWrite_m_1504309403_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonView_t_751779204_0 * ___view, Hashtable_t1523952044_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::DeltaCompressionRead(PhotonView,ExitGames.Client.Photon.Hashtable)
extern "C"  bool NetworkingPeer_DeltaCompressionRead_m_798209444_0 (NetworkingPeer_t_1428208079_0 * __this, PhotonView_t_751779204_0 * ___view, Hashtable_t1523952044_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ObjectIsSameWithInprecision(System.Object,System.Object)
extern "C"  bool NetworkingPeer_ObjectIsSameWithInprecision_m_2069535025_0 (NetworkingPeer_t_1428208079_0 * __this, Object_t * ___one, Object_t * ___two, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetMethod(UnityEngine.MonoBehaviour,System.String,System.Reflection.MethodInfo&)
extern "C"  bool NetworkingPeer_GetMethod_m_2020885698_0 (Object_t * __this /* static, unused */, MonoBehaviour_t_92453903_0 * ___monob, String_t* ___methodType, MethodInfo_t ** ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LoadLevelIfSynced()
extern "C"  void NetworkingPeer_LoadLevelIfSynced_m444096504_0 (NetworkingPeer_t_1428208079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelInPropsIfSynced(System.Object)
extern "C"  void NetworkingPeer_SetLevelInPropsIfSynced_m87919441_0 (NetworkingPeer_t_1428208079_0 * __this, Object_t * ___levelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetApp(System.String,System.String)
extern "C"  void NetworkingPeer_SetApp_m_473773056_0 (NetworkingPeer_t_1428208079_0 * __this, String_t* ___appId, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::WebRpc(System.String,System.Object)
extern "C"  bool NetworkingPeer_WebRpc_m_1574495988_0 (NetworkingPeer_t_1428208079_0 * __this, String_t* ___uriPath, Object_t * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
