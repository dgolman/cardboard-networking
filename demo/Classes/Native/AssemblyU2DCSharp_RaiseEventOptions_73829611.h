#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RaiseEventOptions
struct RaiseEventOptions_t_73829611_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;

#include "mscorlib_System_Object_887538054.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_EventCac_484234374.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Receive_1727062853.h"

// RaiseEventOptions
struct  RaiseEventOptions_t_73829611_0  : public Object_t
{
	// ExitGames.Client.Photon.EventCaching RaiseEventOptions::CachingOption
	uint8_t ___CachingOption_1;
	// System.Byte RaiseEventOptions::InterestGroup
	uint8_t ___InterestGroup_2;
	// System.Int32[] RaiseEventOptions::TargetActors
	Int32U5BU5D_t1872284309_0* ___TargetActors_3;
	// ExitGames.Client.Photon.ReceiverGroup RaiseEventOptions::Receivers
	uint8_t ___Receivers_4;
	// System.Byte RaiseEventOptions::SequenceChannel
	uint8_t ___SequenceChannel_5;
	// System.Boolean RaiseEventOptions::ForwardToWebhook
	bool ___ForwardToWebhook_6;
	// System.Boolean RaiseEventOptions::Encrypt
	bool ___Encrypt_7;
};
struct RaiseEventOptions_t_73829611_0_StaticFields{
	// RaiseEventOptions RaiseEventOptions::Default
	RaiseEventOptions_t_73829611_0 * ___Default_0;
};
