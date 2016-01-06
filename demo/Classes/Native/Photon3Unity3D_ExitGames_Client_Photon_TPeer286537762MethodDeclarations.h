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

// ExitGames.Client.Photon.TPeer
struct TPeer_t286537762_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1329996772_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t_914439948_0;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_E_1537544873.h"

// System.Void ExitGames.Client.Photon.TPeer::.ctor()
extern "C"  void TPeer__ctor_m424223342_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::InitPeerBase()
extern "C"  void TPeer_InitPeerBase_m53456857_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String)
extern "C"  bool TPeer_Connect_m1313559538_0 (TPeer_t286537762_0 * __this, String_t* ___serverAddress, String_t* ___appID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::Disconnect()
extern "C"  void TPeer_Disconnect_m113246962_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::StopConnection()
extern "C"  void TPeer_StopConnection_m_1005463722_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::FetchServerTimestamp()
extern "C"  void TPeer_FetchServerTimestamp_m_2041930801_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit()
extern "C"  void TPeer_EnqueueInit_m_355506044_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::DispatchIncomingCommands()
extern "C"  bool TPeer_DispatchIncomingCommands_m1321103784_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::SendOutgoingCommands()
extern "C"  bool TPeer_SendOutgoingCommands_m250636412_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::SendAcksOnly()
extern "C"  bool TPeer_SendAcksOnly_m935426238_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
extern "C"  bool TPeer_EnqueueOperation_m740613012_0 (TPeer_t286537762_0 * __this, Dictionary_2_t1329996772_0 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, uint8_t ___messageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.TPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
extern "C"  ByteU5BU5D_t_1238178395_0* TPeer_SerializeOperationToMessage_m_1940990720_0 (TPeer_t286537762_0 * __this, uint8_t ___opc, Dictionary_2_t1329996772_0 * ___parameters, uint8_t ___messageType, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(System.Boolean,System.Byte[],System.Byte)
extern "C"  bool TPeer_EnqueueMessageAsPayload_m1033141982_0 (TPeer_t286537762_0 * __this, bool ___sendReliable, ByteU5BU5D_t_1238178395_0* ___opMessage, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
extern "C"  void TPeer_SendPing_m292050224_0 (TPeer_t286537762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[])
extern "C"  void TPeer_SendData_m_1562512543_0 (TPeer_t286537762_0 * __this, ByteU5BU5D_t_1238178395_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C"  void TPeer_ReceiveIncomingCommands_m349453771_0 (TPeer_t286537762_0 * __this, ByteU5BU5D_t_1238178395_0* ___inbuff, int32_t ___dataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
extern "C"  void TPeer_ReadPingResult_m_482944082_0 (TPeer_t286537762_0 * __this, ByteU5BU5D_t_1238178395_0* ___inbuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(ExitGames.Client.Photon.OperationResponse)
extern "C"  void TPeer_ReadPingResult_m76216745_0 (TPeer_t286537762_0 * __this, OperationResponse_t_914439948_0 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::.cctor()
extern "C"  void TPeer__cctor_m_216074497_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
