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
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "AssemblyU2DCSharp_GUICustomAuth_GuiState_1828600756.h"

// GUICustomAuth
struct  GUICustomAuth_t1694441785_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Rect GUICustomAuth::GuiRect
	Rect_t_981940947_0  ___GuiRect_2;
	// System.String GUICustomAuth::authName
	String_t* ___authName_3;
	// System.String GUICustomAuth::authToken
	String_t* ___authToken_4;
	// System.String GUICustomAuth::authDebugMessage
	String_t* ___authDebugMessage_5;
	// GUICustomAuth/GuiState GUICustomAuth::guiState
	int32_t ___guiState_6;
	// UnityEngine.GameObject GUICustomAuth::RootOf3dButtons
	GameObject_t_184308134_0 * ___RootOf3dButtons_7;
};
