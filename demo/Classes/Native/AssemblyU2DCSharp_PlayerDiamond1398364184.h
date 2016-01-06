#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1584899523_0;
// PhotonView
struct PhotonView_t_751779204_0;
// UnityEngine.Renderer
struct Renderer_t907796364_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// PlayerDiamond
struct  PlayerDiamond_t1398364184_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Transform PlayerDiamond::HeadTransform
	Transform_t1584899523_0 * ___HeadTransform_2;
	// System.Single PlayerDiamond::HeightOffset
	float ___HeightOffset_3;
	// PhotonView PlayerDiamond::m_PhotonView
	PhotonView_t_751779204_0 * ___m_PhotonView_4;
	// UnityEngine.Renderer PlayerDiamond::m_DiamondRenderer
	Renderer_t907796364_0 * ___m_DiamondRenderer_5;
	// System.Single PlayerDiamond::m_Rotation
	float ___m_Rotation_6;
	// System.Single PlayerDiamond::m_Height
	float ___m_Height_7;
};
