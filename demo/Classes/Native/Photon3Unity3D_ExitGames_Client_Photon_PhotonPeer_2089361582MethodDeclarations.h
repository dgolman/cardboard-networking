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

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t_2089361582_0;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2018172487_0;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1765470966_0;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t898902108_0;
// System.String
struct String_t;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t_1929587807_0;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1329996772_0;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t_807031891_0;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t_1142698292_0;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel842211397.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerStateV_1596534858.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"

// System.Void ExitGames.Client.Photon.PhotonPeer::set_SocketImplementation(System.Type)
extern "C"  void PhotonPeer_set_SocketImplementation_m298937207_0 (PhotonPeer_t_2089361582_0 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C"  void PhotonPeer_set_DebugOut_m_2071496435_0 (PhotonPeer_t_2089361582_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::get_DebugOut()
extern "C"  uint8_t PhotonPeer_get_DebugOut_m_1127261512_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
extern "C"  Object_t * PhotonPeer_get_Listener_m1447751663_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C"  void PhotonPeer_set_Listener_m236590144_0 (PhotonPeer_t_2089361582_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
extern "C"  bool PhotonPeer_get_TrafficStatsEnabled_m755224994_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_TrafficStatsEnabled_m_935484549_0 (PhotonPeer_t_2089361582_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsElapsedMs()
extern "C"  int64_t PhotonPeer_get_TrafficStatsElapsedMs_m_1464153112_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::TrafficStatsReset()
extern "C"  void PhotonPeer_TrafficStatsReset_m_860977169_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsIncoming()
extern "C"  TrafficStats_t1765470966_0 * PhotonPeer_get_TrafficStatsIncoming_m1572764564_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsOutgoing()
extern "C"  TrafficStats_t1765470966_0 * PhotonPeer_get_TrafficStatsOutgoing_m1736572250_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
extern "C"  TrafficStatsGameLevel_t898902108_0 * PhotonPeer_get_TrafficStatsGameLevel_m_824690100_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PhotonPeer::get_QuickResendAttempts()
extern "C"  uint8_t PhotonPeer_get_QuickResendAttempts_m1419342171_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
extern "C"  void PhotonPeer_set_QuickResendAttempts_m648351896_0 (PhotonPeer_t_2089361582_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
extern "C"  uint8_t PhotonPeer_get_PeerState_m1651403141_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LimitOfUnreliableCommands()
extern "C"  int32_t PhotonPeer_get_LimitOfUnreliableCommands_m245920422_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LimitOfUnreliableCommands(System.Int32)
extern "C"  void PhotonPeer_set_LimitOfUnreliableCommands_m1454183603_0 (PhotonPeer_t_2089361582_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_CrcEnabled()
extern "C"  bool PhotonPeer_get_CrcEnabled_m281174572_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_CrcEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_CrcEnabled_m_757304191_0 (PhotonPeer_t_2089361582_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_PacketLossByCrc()
extern "C"  int32_t PhotonPeer_get_PacketLossByCrc_m_1759709125_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ResentReliableCommands()
extern "C"  int32_t PhotonPeer_get_ResentReliableCommands_m_1500635818_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_SentCountAllowance()
extern "C"  int32_t PhotonPeer_get_SentCountAllowance_m1421492858_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SentCountAllowance(System.Int32)
extern "C"  void PhotonPeer_set_SentCountAllowance_m_1095690609_0 (PhotonPeer_t_2089361582_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TimePingInterval(System.Int32)
extern "C"  void PhotonPeer_set_TimePingInterval_m_289198446_0 (PhotonPeer_t_2089361582_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_DisconnectTimeout()
extern "C"  int32_t PhotonPeer_get_DisconnectTimeout_m_2024387154_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_DisconnectTimeout(System.Int32)
extern "C"  void PhotonPeer_set_DisconnectTimeout_m235020219_0 (PhotonPeer_t_2089361582_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ServerTimeInMilliSeconds()
extern "C"  int32_t PhotonPeer_get_ServerTimeInMilliSeconds_m1548078592_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
extern "C"  int32_t PhotonPeer_get_RoundTripTime_m1741552137_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTimeVariance()
extern "C"  int32_t PhotonPeer_get_RoundTripTimeVariance_m1245541466_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_TimestampOfLastSocketReceive()
extern "C"  int32_t PhotonPeer_get_TimestampOfLastSocketReceive_m354906854_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
extern "C"  String_t* PhotonPeer_get_ServerAddress_m1612591015_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
extern "C"  uint8_t PhotonPeer_get_UsedProtocol_m89528173_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSimulationEnabled()
extern "C"  bool PhotonPeer_get_IsSimulationEnabled_m1920015443_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSimulationEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_IsSimulationEnabled_m408282220_0 (PhotonPeer_t_2089361582_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PhotonPeer::get_NetworkSimulationSettings()
extern "C"  NetworkSimulationSet_t_1929587807_0 * PhotonPeer_get_NetworkSimulationSettings_m1180521849_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
extern "C"  bool PhotonPeer_get_IsEncryptionAvailable_m_1991828833_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSendingOnlyAcks(System.Boolean)
extern "C"  void PhotonPeer_set_IsSendingOnlyAcks_m_1651870718_0 (PhotonPeer_t_2089361582_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m255648660_0 (PhotonPeer_t_2089361582_0 * __this, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m1687247209_0 (PhotonPeer_t_2089361582_0 * __this, Object_t * ___listener, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String)
extern "C"  bool PhotonPeer_Connect_m_1015229368_0 (PhotonPeer_t_2089361582_0 * __this, String_t* ___serverAddress, String_t* ___applicationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect()
extern "C"  void PhotonPeer_Disconnect_m1116010844_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::StopThread()
extern "C"  void PhotonPeer_StopThread_m_1497213588_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::FetchServerTimestamp()
extern "C"  void PhotonPeer_FetchServerTimestamp_m1199969721_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
extern "C"  bool PhotonPeer_EstablishEncryption_m_1147160216_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Service()
extern "C"  void PhotonPeer_Service_m1992667159_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands()
extern "C"  bool PhotonPeer_SendOutgoingCommands_m_941648046_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly()
extern "C"  bool PhotonPeer_SendAcksOnly_m_2111840876_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands()
extern "C"  bool PhotonPeer_DispatchIncomingCommands_m_1943124610_0 (PhotonPeer_t_2089361582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
extern "C"  String_t* PhotonPeer_VitalStatsToString_m_397570087_0 (PhotonPeer_t_2089361582_0 * __this, bool ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m_305313212_0 (PhotonPeer_t_2089361582_0 * __this, uint8_t ___customOpCode, Dictionary_2_t1329996772_0 * ___customOpParameters, bool ___sendReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte)
extern "C"  bool PhotonPeer_OpCustom_m1198390121_0 (PhotonPeer_t_2089361582_0 * __this, uint8_t ___customOpCode, Dictionary_2_t1329996772_0 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m_443483916_0 (PhotonPeer_t_2089361582_0 * __this, uint8_t ___customOpCode, Dictionary_2_t1329996772_0 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::RegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C"  bool PhotonPeer_RegisterType_m_1992579338_0 (Object_t * __this /* static, unused */, Type_t * ___customType, uint8_t ___code, SerializeStreamMethod_t_807031891_0 * ___serializeMethod, DeserializeStreamMethod_t_1142698292_0 * ___constructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
