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

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t_228325820_0;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2018172487_0;
// System.String
struct String_t;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t938557351_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Net.IPAddress
struct IPAddress_t125139831_0;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocket728459502.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel842211397.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode_1347045293.h"

// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
extern "C"  Object_t * IPhotonSocket_get_Listener_m_529744253_0 (IPhotonSocket_t_228325820_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::get_Protocol()
extern "C"  uint8_t IPhotonSocket_get_Protocol_m2034841546_0 (IPhotonSocket_t_228325820_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_Protocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void IPhotonSocket_set_Protocol_m1540185693_0 (IPhotonSocket_t_228325820_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
extern "C"  int32_t IPhotonSocket_get_State_m1003586621_0 (IPhotonSocket_t_228325820_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
extern "C"  void IPhotonSocket_set_State_m_1361732436_0 (IPhotonSocket_t_228325820_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
extern "C"  String_t* IPhotonSocket_get_ServerAddress_m_104763947_0 (IPhotonSocket_t_228325820_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
extern "C"  void IPhotonSocket_set_ServerAddress_m1846553988_0 (IPhotonSocket_t_228325820_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
extern "C"  int32_t IPhotonSocket_get_ServerPort_m1857831029_0 (IPhotonSocket_t_228325820_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerPort(System.Int32)
extern "C"  void IPhotonSocket_set_ServerPort_m1656771434_0 (IPhotonSocket_t_228325820_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
extern "C"  bool IPhotonSocket_get_Connected_m828386720_0 (IPhotonSocket_t_228325820_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_MTU()
extern "C"  int32_t IPhotonSocket_get_MTU_m373835039_0 (IPhotonSocket_t_228325820_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void IPhotonSocket__ctor_m96132223_0 (IPhotonSocket_t_228325820_0 * __this, PeerBase_t938557351_0 * ___peerBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect()
extern "C"  bool IPhotonSocket_Connect_m46157290_0 (IPhotonSocket_t_228325820_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
extern "C"  void IPhotonSocket_HandleReceivedDatagram_m_378195955_0 (IPhotonSocket_t_228325820_0 * __this, ByteU5BU5D_t_1238178395_0* ___inBuffer, int32_t ___length, bool ___willBeReused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
extern "C"  bool IPhotonSocket_ReportDebugOfLevel_m1536892133_0 (IPhotonSocket_t_228325820_0 * __this, uint8_t ___levelOfMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void IPhotonSocket_EnqueueDebugReturn_m933517508_0 (IPhotonSocket_t_228325820_0 * __this, uint8_t ___debugLevel, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
extern "C"  void IPhotonSocket_HandleException_m1931643896_0 (IPhotonSocket_t_228325820_0 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::TryParseAddress(System.String,System.String&,System.UInt16&)
extern "C"  bool IPhotonSocket_TryParseAddress_m1697121972_0 (IPhotonSocket_t_228325820_0 * __this, String_t* ___addressAndPort, String_t** ___address, uint16_t* ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress ExitGames.Client.Photon.IPhotonSocket::GetIpAddress(System.String)
extern "C"  IPAddress_t125139831_0 * IPhotonSocket_GetIpAddress_m973659029_0 (Object_t * __this /* static, unused */, String_t* ___serverIp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::<HandleException>b__7()
extern "C"  void IPhotonSocket_U3CHandleExceptionU3Eb__7_m612964466_0 (IPhotonSocket_t_228325820_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
