#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;
// PhotonView
struct PhotonView_t_751779204_0;

#include "mscorlib_System_Object_887538054.h"

// PhotonMessageInfo
struct  PhotonMessageInfo_t1537066398_0  : public Object_t
{
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t_1074427656_0 * ___sender_1;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t_751779204_0 * ___photonView_2;
};
