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

// Photon.PunBehaviour
struct PunBehaviour_t_801502933_0;
// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;
// System.String
struct String_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t_914439948_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DisconnectCause1228869842.h"

// System.Void Photon.PunBehaviour::.ctor()
extern "C"  void PunBehaviour__ctor_m_1464152507_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToPhoton()
extern "C"  void PunBehaviour_OnConnectedToPhoton_m466694276_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftRoom()
extern "C"  void PunBehaviour_OnLeftRoom_m1195033632_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void PunBehaviour_OnMasterClientSwitched_m_1547875359_0 (PunBehaviour_t_801502933_0 * __this, PhotonPlayer_t_1074427656_0 * ___newMasterClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCreateRoomFailed(System.Object[])
extern "C"  void PunBehaviour_OnPhotonCreateRoomFailed_m_1791697436_0 (PunBehaviour_t_801502933_0 * __this, ObjectU5BU5D_t1774424924_0* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonJoinRoomFailed(System.Object[])
extern "C"  void PunBehaviour_OnPhotonJoinRoomFailed_m_1762016586_0 (PunBehaviour_t_801502933_0 * __this, ObjectU5BU5D_t1774424924_0* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCreatedRoom()
extern "C"  void PunBehaviour_OnCreatedRoom_m_1927485209_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedLobby()
extern "C"  void PunBehaviour_OnJoinedLobby_m_634318703_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftLobby()
extern "C"  void PunBehaviour_OnLeftLobby_m1643993811_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnFailedToConnectToPhoton(DisconnectCause)
extern "C"  void PunBehaviour_OnFailedToConnectToPhoton_m1974841912_0 (PunBehaviour_t_801502933_0 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnDisconnectedFromPhoton()
extern "C"  void PunBehaviour_OnDisconnectedFromPhoton_m_2071365249_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectionFail(DisconnectCause)
extern "C"  void PunBehaviour_OnConnectionFail_m530572107_0 (PunBehaviour_t_801502933_0 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonInstantiate(PhotonMessageInfo)
extern "C"  void PunBehaviour_OnPhotonInstantiate_m_1412515161_0 (PunBehaviour_t_801502933_0 * __this, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnReceivedRoomListUpdate()
extern "C"  void PunBehaviour_OnReceivedRoomListUpdate_m2141576737_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedRoom()
extern "C"  void PunBehaviour_OnJoinedRoom_m_956670302_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PunBehaviour_OnPhotonPlayerConnected_m_744516973_0 (PunBehaviour_t_801502933_0 * __this, PhotonPlayer_t_1074427656_0 * ___newPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void PunBehaviour_OnPhotonPlayerDisconnected_m1083749881_0 (PunBehaviour_t_801502933_0 * __this, PhotonPlayer_t_1074427656_0 * ___otherPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonRandomJoinFailed(System.Object[])
extern "C"  void PunBehaviour_OnPhotonRandomJoinFailed_m2015998094_0 (PunBehaviour_t_801502933_0 * __this, ObjectU5BU5D_t1774424924_0* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToMaster()
extern "C"  void PunBehaviour_OnConnectedToMaster_m2024861930_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonMaxCccuReached()
extern "C"  void PunBehaviour_OnPhotonMaxCccuReached_m_997845674_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void PunBehaviour_OnPhotonCustomRoomPropertiesChanged_m_1090263153_0 (PunBehaviour_t_801502933_0 * __this, Hashtable_t1523952044_0 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerPropertiesChanged(System.Object[])
extern "C"  void PunBehaviour_OnPhotonPlayerPropertiesChanged_m750175146_0 (PunBehaviour_t_801502933_0 * __this, ObjectU5BU5D_t1774424924_0* ___playerAndUpdatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnUpdatedFriendList()
extern "C"  void PunBehaviour_OnUpdatedFriendList_m1820964155_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCustomAuthenticationFailed(System.String)
extern "C"  void PunBehaviour_OnCustomAuthenticationFailed_m975475518_0 (PunBehaviour_t_801502933_0 * __this, String_t* ___debugMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void PunBehaviour_OnWebRpcResponse_m2092475156_0 (PunBehaviour_t_801502933_0 * __this, OperationResponse_t_914439948_0 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnOwnershipRequest(System.Object[])
extern "C"  void PunBehaviour_OnOwnershipRequest_m_461136460_0 (PunBehaviour_t_801502933_0 * __this, ObjectU5BU5D_t1774424924_0* ___viewAndPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLobbyStatisticsUpdate()
extern "C"  void PunBehaviour_OnLobbyStatisticsUpdate_m_1449215674_0 (PunBehaviour_t_801502933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
