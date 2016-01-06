#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t_902802116_0;
// UnityEngine.Animator
struct Animator_t607439280_0;
// PhotonView
struct PhotonView_t_751779204_0;
// PhotonTransformView
struct PhotonTransformView_t_215491014_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// RPGMovement
struct  RPGMovement_t_431284259_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single RPGMovement::ForwardSpeed
	float ___ForwardSpeed_2;
	// System.Single RPGMovement::BackwardSpeed
	float ___BackwardSpeed_3;
	// System.Single RPGMovement::StrafeSpeed
	float ___StrafeSpeed_4;
	// System.Single RPGMovement::RotateSpeed
	float ___RotateSpeed_5;
	// UnityEngine.CharacterController RPGMovement::m_CharacterController
	CharacterController_t_902802116_0 * ___m_CharacterController_6;
	// UnityEngine.Vector3 RPGMovement::m_LastPosition
	Vector3_t_725341337_0  ___m_LastPosition_7;
	// UnityEngine.Animator RPGMovement::m_Animator
	Animator_t607439280_0 * ___m_Animator_8;
	// PhotonView RPGMovement::m_PhotonView
	PhotonView_t_751779204_0 * ___m_PhotonView_9;
	// PhotonTransformView RPGMovement::m_TransformView
	PhotonTransformView_t_215491014_0 * ___m_TransformView_10;
	// System.Single RPGMovement::m_AnimatorSpeed
	float ___m_AnimatorSpeed_11;
	// UnityEngine.Vector3 RPGMovement::m_CurrentMovement
	Vector3_t_725341337_0  ___m_CurrentMovement_12;
	// System.Single RPGMovement::m_CurrentTurnSpeed
	float ___m_CurrentTurnSpeed_13;
};
