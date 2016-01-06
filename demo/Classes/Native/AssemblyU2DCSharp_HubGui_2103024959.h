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
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t822037503_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "AssemblyU2DCSharp_HubGui_DemoBtn1221066763.h"

// HubGui
struct  HubGui_t_2103024959_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.GUISkin HubGui::Skin
	GUISkin_t_1636059793_0 * ___Skin_2;
	// UnityEngine.Vector2 HubGui::scrollPos
	Vector2_t_725341338_0  ___scrollPos_3;
	// System.String HubGui::demoDescription
	String_t* ___demoDescription_4;
	// HubGui/DemoBtn HubGui::demoBtn
	DemoBtn_t1221066763_0  ___demoBtn_5;
	// HubGui/DemoBtn HubGui::webLink
	DemoBtn_t1221066763_0  ___webLink_6;
	// UnityEngine.GUIStyle HubGui::m_Headline
	GUIStyle_t822037503_0 * ___m_Headline_7;
};
