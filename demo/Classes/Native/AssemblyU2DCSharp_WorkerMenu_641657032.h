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

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// WorkerMenu
struct  WorkerMenu_t_641657032_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.GUISkin WorkerMenu::Skin
	GUISkin_t_1636059793_0 * ___Skin_2;
	// UnityEngine.Vector2 WorkerMenu::WidthAndHeight
	Vector2_t_725341338_0  ___WidthAndHeight_3;
	// System.String WorkerMenu::roomName
	String_t* ___roomName_4;
	// UnityEngine.Vector2 WorkerMenu::scrollPos
	Vector2_t_725341338_0  ___scrollPos_5;
	// System.Boolean WorkerMenu::connectFailed
	bool ___connectFailed_6;
	// System.String WorkerMenu::errorDialog
	String_t* ___errorDialog_9;
	// System.Double WorkerMenu::timeToClearDialog
	double ___timeToClearDialog_10;
};
struct WorkerMenu_t_641657032_0_StaticFields{
	// System.String WorkerMenu::SceneNameMenu
	String_t* ___SceneNameMenu_7;
	// System.String WorkerMenu::SceneNameGame
	String_t* ___SceneNameGame_8;
};
