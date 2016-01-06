#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t_1636059793_0;
// PhotonAnimatorView
struct PhotonAnimatorView_t_1236218109_0;
// UnityEngine.Animator
struct Animator_t607439280_0;

#include "AssemblyU2DCSharp_Photon_PunBehaviour_801502933.h"

// DemoMecanimGUI
struct  DemoMecanimGUI_t468142909_0  : public PunBehaviour_t_801502933_0
{
	// UnityEngine.GUISkin DemoMecanimGUI::Skin
	GUISkin_t_1636059793_0 * ___Skin_2;
	// PhotonAnimatorView DemoMecanimGUI::m_AnimatorView
	PhotonAnimatorView_t_1236218109_0 * ___m_AnimatorView_3;
	// UnityEngine.Animator DemoMecanimGUI::m_RemoteAnimator
	Animator_t607439280_0 * ___m_RemoteAnimator_4;
	// System.Single DemoMecanimGUI::m_SlideIn
	float ___m_SlideIn_5;
	// System.Single DemoMecanimGUI::m_FoundPlayerSlideIn
	float ___m_FoundPlayerSlideIn_6;
	// System.Boolean DemoMecanimGUI::m_IsOpen
	bool ___m_IsOpen_7;
};
