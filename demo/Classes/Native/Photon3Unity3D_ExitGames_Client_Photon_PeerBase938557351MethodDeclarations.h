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

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t938557351_0;
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2018172487_0;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t_1929587807_0;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1329996772_0;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t_914439948_0;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t_2103461750_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel842211397.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode_1347045293.h"

// System.Int64 ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabledTime()
extern "C"  int64_t PeerBase_get_TrafficStatsEnabledTime_m671856287_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
extern "C"  bool PeerBase_get_TrafficStatsEnabled_m1446203245_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_TrafficStatsEnabled(System.Boolean)
extern "C"  void PeerBase_set_TrafficStatsEnabled_m_1878794362_0 (PeerBase_t938557351_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
extern "C"  String_t* PeerBase_get_ServerAddress_m_2103899534_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
extern "C"  void PeerBase_set_ServerAddress_m1606218401_0 (PeerBase_t938557351_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
extern "C"  Object_t * PeerBase_get_Listener_m_1854801404_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C"  void PeerBase_set_Listener_m1973126027_0 (PeerBase_t938557351_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PeerBase::get_QuickResendAttempts()
extern "C"  uint8_t PeerBase_get_QuickResendAttempts_m_272672346_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_QuickResendAttempts(System.Byte)
extern "C"  void PeerBase_set_QuickResendAttempts_m_1704966035_0 (PeerBase_t938557351_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
extern "C"  NetworkSimulationSet_t_1929587807_0 * PeerBase_get_NetworkSimulationSettings_m_1852479868_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogResize()
extern "C"  void PeerBase_CommandLogResize_m_907960734_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogInit()
extern "C"  void PeerBase_CommandLogInit_m866731774_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitOnce()
extern "C"  void PeerBase_InitOnce_m_1250780410_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PeerBase_EnqueueOperation_m_1193597760_0 (PeerBase_t938557351_0 * __this, Dictionary_2_t1329996772_0 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::SendAcksOnly()
extern "C"  bool PeerBase_SendAcksOnly_m_78311255_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitCallback()
extern "C"  void PeerBase_InitCallback_m_1182156342_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsSendingOnlyAcks()
extern "C"  bool PeerBase_get_IsSendingOnlyAcks_m90443380_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_IsSendingOnlyAcks(System.Boolean)
extern "C"  void PeerBase_set_IsSendingOnlyAcks_m_1590282547_0 (PeerBase_t938557351_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::ExchangeKeysForEncryption()
extern "C"  bool PeerBase_ExchangeKeysForEncryption_m140803084_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::DeriveSharedKey(ExitGames.Client.Photon.OperationResponse)
extern "C"  void PeerBase_DeriveSharedKey_m_1828833340_0 (PeerBase_t938557351_0 * __this, OperationResponse_t_914439948_0 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_EnqueueActionForDispatch_m_492862924_0 (PeerBase_t938557351_0 * __this, MyAction_t_2103461750_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void PeerBase_EnqueueDebugReturn_m588616545_0 (PeerBase_t938557351_0 * __this, uint8_t ___level, String_t* ___debugReturn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
extern "C"  void PeerBase_EnqueueStatusCallback_m919368243_0 (PeerBase_t938557351_0 * __this, int32_t ___statusValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
extern "C"  void PeerBase_InitPeerBase_m_1577092776_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(System.Byte[])
extern "C"  bool PeerBase_DeserializeMessageAndCallback_m_1854072450_0 (PeerBase_t938557351_0 * __this, ByteU5BU5D_t_1238178395_0* ___inBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_SendNetworkSimulated_m_459479969_0 (PeerBase_t938557351_0 * __this, MyAction_t_2103461750_0 * ___sendAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_ReceiveNetworkSimulated_m_361461556_0 (PeerBase_t938557351_0 * __this, MyAction_t_2103461750_0 * ___receiveAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::NetworkSimRun()
extern "C"  void PeerBase_NetworkSimRun_m1000990831_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
extern "C"  void PeerBase_UpdateRoundTripTimeAndVariance_m874745751_0 (PeerBase_t938557351_0 * __this, int32_t ___lastRoundtripTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitializeTrafficStats()
extern "C"  void PeerBase_InitializeTrafficStats_m_1623284633_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
extern "C"  void PeerBase__ctor_m_2033485361_0 (PeerBase_t938557351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.cctor()
extern "C"  void PeerBase__cctor_m904367038_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
