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
// PhotonHandler
struct PhotonHandler_t_2056115181_0;
// NetworkingPeer
struct NetworkingPeer_t_1428208079_0;
// ServerSettings
struct ServerSettings_t1599631425_0;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1957278586_0;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t1304051115_0;
// System.Type
struct Type_t;
// Room
struct Room_t_895749546_0;
// PhotonNetwork/EventCallback
struct EventCallback_t_417324089_0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_1321712961_0;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t_1442408135_0;

#include "mscorlib_System_Object_887538054.h"
#include "AssemblyU2DCSharp_PhotonLogLevel_1616365833.h"

// PhotonNetwork
struct  PhotonNetwork_t_905433353_0  : public Object_t
{
};
struct PhotonNetwork_t_905433353_0_StaticFields{
	// PhotonHandler PhotonNetwork::photonMono
	PhotonHandler_t_2056115181_0 * ___photonMono_3;
	// NetworkingPeer PhotonNetwork::networkingPeer
	NetworkingPeer_t_1428208079_0 * ___networkingPeer_4;
	// System.Int32 PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_5;
	// ServerSettings PhotonNetwork::PhotonServerSettings
	ServerSettings_t1599631425_0 * ___PhotonServerSettings_6;
	// System.Boolean PhotonNetwork::InstantiateInRoomOnly
	bool ___InstantiateInRoomOnly_7;
	// PhotonLogLevel PhotonNetwork::logLevel
	int32_t ___logLevel_8;
	// System.Single PhotonNetwork::precisionForVectorSynchronization
	float ___precisionForVectorSynchronization_9;
	// System.Single PhotonNetwork::precisionForQuaternionSynchronization
	float ___precisionForQuaternionSynchronization_10;
	// System.Single PhotonNetwork::precisionForFloatSynchronization
	float ___precisionForFloatSynchronization_11;
	// System.Boolean PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_12;
	// System.Boolean PhotonNetwork::UsePrefabCache
	bool ___UsePrefabCache_13;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> PhotonNetwork::PrefabCache
	Dictionary_2_t1957278586_0 * ___PrefabCache_14;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::SendMonoMessageTargets
	HashSet_1_t1304051115_0 * ___SendMonoMessageTargets_15;
	// System.Type PhotonNetwork::SendMonoMessageTargetType
	Type_t * ___SendMonoMessageTargetType_16;
	// System.Boolean PhotonNetwork::isOfflineMode
	bool ___isOfflineMode_17;
	// Room PhotonNetwork::offlineModeRoom
	Room_t_895749546_0 * ___offlineModeRoom_18;
	// System.Int32 PhotonNetwork::maxConnections
	int32_t ___maxConnections_19;
	// System.Boolean PhotonNetwork::_mAutomaticallySyncScene
	bool ____mAutomaticallySyncScene_20;
	// System.Boolean PhotonNetwork::m_autoCleanUpPlayerObjects
	bool ___m_autoCleanUpPlayerObjects_21;
	// System.Int32 PhotonNetwork::sendInterval
	int32_t ___sendInterval_22;
	// System.Int32 PhotonNetwork::sendIntervalOnSerialize
	int32_t ___sendIntervalOnSerialize_23;
	// System.Boolean PhotonNetwork::m_isMessageQueueRunning
	bool ___m_isMessageQueueRunning_24;
	// System.Single PhotonNetwork::BackgroundTimeout
	float ___BackgroundTimeout_25;
	// PhotonNetwork/EventCallback PhotonNetwork::OnEventCall
	EventCallback_t_417324089_0 * ___OnEventCall_26;
	// System.Int32 PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_27;
	// System.Int32 PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_28;
	// System.Collections.Generic.List`1<System.Int32> PhotonNetwork::manuallyAllocatedViewIds
	List_1_t_1321712961_0 * ___manuallyAllocatedViewIds_29;
	// System.String PhotonNetwork::<gameVersion>k__BackingField
	String_t* ___U3CgameVersionU3Ek__BackingField_30;
	// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::<Friends>k__BackingField
	List_1_t_1442408135_0 * ___U3CFriendsU3Ek__BackingField_31;
};
