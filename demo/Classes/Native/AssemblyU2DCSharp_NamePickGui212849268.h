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
// ChatGui
struct ChatGui_t_1283621016_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// NamePickGui
struct  NamePickGui_t212849268_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Vector2 NamePickGui::GuiSize
	Vector2_t_725341338_0  ___GuiSize_3;
	// System.String NamePickGui::InputLine
	String_t* ___InputLine_4;
	// UnityEngine.Rect NamePickGui::guiCenteredRect
	Rect_t_981940947_0  ___guiCenteredRect_5;
	// ChatGui NamePickGui::chatComponent
	ChatGui_t_1283621016_0 * ___chatComponent_6;
	// System.String NamePickGui::helpText
	String_t* ___helpText_7;
};
