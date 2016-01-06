#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// NetworkedPlayer
struct  NetworkedPlayer_t_623898573_0  : public MonoBehaviour_t6853251_0
{
	// UnityEngine.GameObject NetworkedPlayer::avatar
	GameObject_t_184308134_0 * ___avatar_2;
	// UnityEngine.Transform NetworkedPlayer::playerGlobal
	Transform_t1584899523_0 * ___playerGlobal_3;
	// UnityEngine.Transform NetworkedPlayer::playerLocal
	Transform_t1584899523_0 * ___playerLocal_4;
	// UnityEngine.Vector3 NetworkedPlayer::correctAvatarPos
	Vector3_t_725341337_0  ___correctAvatarPos_5;
	// UnityEngine.Quaternion NetworkedPlayer::correctAvatarRot
	Quaternion_t1989680039_0  ___correctAvatarRot_6;
};
