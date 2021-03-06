﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t_1258954026_0;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInput_1390847434.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// GazeInputModule
struct  GazeInputModule_t_1397820490_0  : public BaseInputModule_t_1390847434_0
{
	// System.Boolean GazeInputModule::vrModeOnly
	bool ___vrModeOnly_6;
	// UnityEngine.GameObject GazeInputModule::cursor
	GameObject_t_184308134_0 * ___cursor_7;
	// System.Single GazeInputModule::clickTime
	float ___clickTime_8;
	// UnityEngine.Vector2 GazeInputModule::hotspot
	Vector2_t_725341338_0  ___hotspot_9;
	// UnityEngine.EventSystems.PointerEventData GazeInputModule::pointerData
	PointerEventData_t_1258954026_0 * ___pointerData_10;
};
