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
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "mscorlib_System_Object_887538054.h"

// ExitGames.Client.Photon.PhotonPing
struct  PhotonPing_t_2089357470_0  : public Object_t
{
	// System.String ExitGames.Client.Photon.PhotonPing::DebugString
	String_t* ___DebugString_0;
	// System.Boolean ExitGames.Client.Photon.PhotonPing::Successful
	bool ___Successful_1;
	// System.Boolean ExitGames.Client.Photon.PhotonPing::GotResult
	bool ___GotResult_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPing::PingLength
	int32_t ___PingLength_3;
	// System.Byte[] ExitGames.Client.Photon.PhotonPing::PingBytes
	ByteU5BU5D_t_1238178395_0* ___PingBytes_4;
	// System.Byte ExitGames.Client.Photon.PhotonPing::PingId
	uint8_t ___PingId_5;
};
