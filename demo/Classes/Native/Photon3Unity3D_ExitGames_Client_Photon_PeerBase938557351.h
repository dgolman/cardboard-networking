#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t_228325820_0;
// ExitGames.Client.Photon.NCommand
struct NCommand_t1920504657_0;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1765470966_0;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t898902108_0;
// System.Diagnostics.Stopwatch
struct Stopwatch_t_1779390746_0;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t_1855138967_0;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t_1065353856_0;
// System.Random
struct Random_t_802455554_0;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t_1652553685_0;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t_1929587807_0;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem>
struct Queue_1_t_1618750376_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.IO.MemoryStream
struct MemoryStream_t_197486834_0;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2018172487_0;

#include "mscorlib_System_Object_887538054.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel842211397.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_Co1652494950.h"

// ExitGames.Client.Photon.PeerBase
struct  PeerBase_t938557351_0  : public Object_t
{
	// System.Type ExitGames.Client.Photon.PeerBase::SocketImplementation
	Type_t * ___SocketImplementation_4;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::rt
	IPhotonSocket_t_228325820_0 * ___rt_5;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_7;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t1920504657_0 * ___CommandInCurrentDispatch_8;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_9;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsIncoming
	TrafficStats_t1765470966_0 * ___TrafficStatsIncoming_10;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsOutgoing
	TrafficStats_t1765470966_0 * ___TrafficStatsOutgoing_11;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::TrafficStatsGameLevel
	TrafficStatsGameLevel_t898902108_0 * ___TrafficStatsGameLevel_12;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PeerBase::trafficStatsStopwatch
	Stopwatch_t_1779390746_0 * ___trafficStatsStopwatch_13;
	// System.Boolean ExitGames.Client.Photon.PeerBase::trafficStatsEnabled
	bool ___trafficStatsEnabled_14;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedProtocol
	uint8_t ___usedProtocol_15;
	// System.Boolean ExitGames.Client.Photon.PeerBase::crcEnabled
	bool ___crcEnabled_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_18;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::debugOut
	uint8_t ___debugOut_19;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t_1855138967_0 * ___ActionQueue_20;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_21;
	// ExitGames.Client.Photon.PeerBase/ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_22;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_23;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_24;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_25;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_26;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_27;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTimeVariance
	int32_t ___lastRoundTripTimeVariance_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetThrottleInterval
	int32_t ___packetThrottleInterval_32;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_34;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_35;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandBufferSize
	int32_t ___commandBufferSize_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::warningSize
	int32_t ___warningSize_37;
	// System.Int32 ExitGames.Client.Photon.PeerBase::sentCountAllowance
	int32_t ___sentCountAllowance_38;
	// System.Int32 ExitGames.Client.Photon.PeerBase::DisconnectTimeout
	int32_t ___DisconnectTimeout_39;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timePingInterval
	int32_t ___timePingInterval_40;
	// System.Byte ExitGames.Client.Photon.PeerBase::ChannelCount
	uint8_t ___ChannelCount_41;
	// System.Int32 ExitGames.Client.Photon.PeerBase::limitOfUnreliableCommands
	int32_t ___limitOfUnreliableCommands_42;
	// Photon.SocketServer.Security.DiffieHellmanCryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	DiffieHellmanCryptoProvider_t_1065353856_0 * ___CryptoProvider_43;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t_802455554_0 * ___lagRandomizer_44;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t_1652553685_0 * ___NetSimListOutgoing_45;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t_1652553685_0 * ___NetSimListIncoming_46;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t_1929587807_0 * ___networkSimulationSettings_47;
	// System.Int32 ExitGames.Client.Photon.PeerBase::CommandLogSize
	int32_t ___CommandLogSize_48;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::CommandLog
	Queue_1_t_1618750376_0 * ___CommandLog_49;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::InReliableLog
	Queue_1_t_1618750376_0 * ___InReliableLog_50;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::INIT_BYTES
	ByteU5BU5D_t_1238178395_0* ___INIT_BYTES_51;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_52;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeInt
	int32_t ___timeInt_53;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_54;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_55;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_56;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_57;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_58;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_59;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_61;
	// System.Int32 ExitGames.Client.Photon.PeerBase::mtu
	int32_t ___mtu_62;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMinConnections
	int32_t ___rhttpMinConnections_63;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMaxConnections
	int32_t ___rhttpMaxConnections_64;
	// System.IO.MemoryStream ExitGames.Client.Photon.PeerBase::SerializeMemStream
	MemoryStream_t_197486834_0 * ___SerializeMemStream_65;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_66;
	// System.String ExitGames.Client.Photon.PeerBase::<HttpUrlParameters>k__BackingField
	String_t* ___U3CHttpUrlParametersU3Ek__BackingField_67;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::<Listener>k__BackingField
	Object_t * ___U3CListenerU3Ek__BackingField_68;
	// System.Byte ExitGames.Client.Photon.PeerBase::<QuickResendAttempts>k__BackingField
	uint8_t ___U3CQuickResendAttemptsU3Ek__BackingField_69;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::<TcpConnectionPrefix>k__BackingField
	ByteU5BU5D_t_1238178395_0* ___U3CTcpConnectionPrefixU3Ek__BackingField_70;
	// System.Boolean ExitGames.Client.Photon.PeerBase::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_71;
};
struct PeerBase_t938557351_0_StaticFields{
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingStreamBufferSize
	int32_t ___outgoingStreamBufferSize_60;
};
