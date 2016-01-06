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
// System.Object
struct Object_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;

#include "mscorlib_System_Object_887538054.h"

// PhotonPlayer
struct  PhotonPlayer_t_1074427656_0  : public Object_t
{
	// System.Int32 PhotonPlayer::actorID
	int32_t ___actorID_0;
	// System.String PhotonPlayer::nameField
	String_t* ___nameField_1;
	// System.Boolean PhotonPlayer::isLocal
	bool ___isLocal_2;
	// System.Object PhotonPlayer::TagObject
	Object_t * ___TagObject_3;
	// ExitGames.Client.Photon.Hashtable PhotonPlayer::<customProperties>k__BackingField
	Hashtable_t1523952044_0 * ___U3CcustomPropertiesU3Ek__BackingField_4;
};
