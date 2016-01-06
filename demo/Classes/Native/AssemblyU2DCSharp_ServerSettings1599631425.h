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
// System.Collections.Generic.List`1<System.String>
struct List_1_t_293602512_0;

#include "UnityEngine_UnityEngine_ScriptableObject_1571582451.h"
#include "AssemblyU2DCSharp_ServerSettings_HostingOption868917473.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"
#include "AssemblyU2DCSharp_CloudRegionCode404377275.h"
#include "AssemblyU2DCSharp_CloudRegionFlag404463674.h"

// ServerSettings
struct  ServerSettings_t1599631425_0  : public ScriptableObject_t_1571582451_0
{
	// ServerSettings/HostingOption ServerSettings::HostType
	int32_t ___HostType_2;
	// ExitGames.Client.Photon.ConnectionProtocol ServerSettings::Protocol
	uint8_t ___Protocol_3;
	// System.String ServerSettings::ServerAddress
	String_t* ___ServerAddress_4;
	// System.Int32 ServerSettings::ServerPort
	int32_t ___ServerPort_5;
	// System.String ServerSettings::AppID
	String_t* ___AppID_6;
	// CloudRegionCode ServerSettings::PreferredRegion
	int32_t ___PreferredRegion_7;
	// CloudRegionFlag ServerSettings::EnabledRegions
	int32_t ___EnabledRegions_8;
	// System.Boolean ServerSettings::JoinLobby
	bool ___JoinLobby_9;
	// System.Boolean ServerSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_10;
	// System.Collections.Generic.List`1<System.String> ServerSettings::RpcList
	List_1_t_293602512_0 * ___RpcList_11;
	// System.Boolean ServerSettings::DisableAutoOpenWizard
	bool ___DisableAutoOpenWizard_12;
};
