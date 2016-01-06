#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;
// TypedLobby
struct TypedLobby_t_1230213433_0;
// System.String
struct String_t;

#include "mscorlib_System_Object_887538054.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Matchma_1143686370.h"

// ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams
struct  OpJoinRandomRoomParams_t_1937327266_0  : public Object_t
{
	// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_t1523952044_0 * ___ExpectedCustomRoomProperties_0;
	// System.Byte ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::ExpectedMaxPlayers
	uint8_t ___ExpectedMaxPlayers_1;
	// ExitGames.Client.Photon.MatchmakingMode ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// TypedLobby ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::TypedLobby
	TypedLobby_t_1230213433_0 * ___TypedLobby_3;
	// System.String ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
};
