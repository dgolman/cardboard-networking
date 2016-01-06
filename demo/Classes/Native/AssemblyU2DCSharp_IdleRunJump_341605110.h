#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t607439280_0;
// PhotonView
struct PhotonView_t_751779204_0;
// PhotonTransformView
struct PhotonTransformView_t_215491014_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// IdleRunJump
struct  IdleRunJump_t_341605110_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Animator IdleRunJump::animator
	Animator_t607439280_0 * ___animator_2;
	// System.Single IdleRunJump::DirectionDampTime
	float ___DirectionDampTime_3;
	// System.Boolean IdleRunJump::ApplyGravity
	bool ___ApplyGravity_4;
	// System.Single IdleRunJump::SynchronizedMaxSpeed
	float ___SynchronizedMaxSpeed_5;
	// System.Single IdleRunJump::TurnSpeedModifier
	float ___TurnSpeedModifier_6;
	// System.Single IdleRunJump::SynchronizedTurnSpeed
	float ___SynchronizedTurnSpeed_7;
	// System.Single IdleRunJump::SynchronizedSpeedAcceleration
	float ___SynchronizedSpeedAcceleration_8;
	// PhotonView IdleRunJump::m_PhotonView
	PhotonView_t_751779204_0 * ___m_PhotonView_9;
	// PhotonTransformView IdleRunJump::m_TransformView
	PhotonTransformView_t_215491014_0 * ___m_TransformView_10;
	// System.Single IdleRunJump::m_SpeedModifier
	float ___m_SpeedModifier_11;
};
