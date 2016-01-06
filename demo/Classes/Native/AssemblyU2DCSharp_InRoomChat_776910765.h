#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t_293602512_0;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// InRoomChat
struct  InRoomChat_t_776910765_0  : public MonoBehaviour_t6853251_0
{
	// UnityEngine.Rect InRoomChat::GuiRect
	Rect_t_981940947_0  ___GuiRect_2;
	// System.Boolean InRoomChat::IsVisible
	bool ___IsVisible_3;
	// System.Boolean InRoomChat::AlignBottom
	bool ___AlignBottom_4;
	// System.Collections.Generic.List`1<System.String> InRoomChat::messages
	List_1_t_293602512_0 * ___messages_5;
	// System.String InRoomChat::inputLine
	String_t* ___inputLine_6;
	// UnityEngine.Vector2 InRoomChat::scrollPos
	Vector2_t_725341338_0  ___scrollPos_7;
};
struct InRoomChat_t_776910765_0_StaticFields{
	// System.String InRoomChat::ChatRPC
	String_t* ___ChatRPC_8;
};
