#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CardboardHead
struct CardboardHead_t_732803653_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// CardboardOnGUIMouse
struct  CardboardOnGUIMouse_t1910693572_0  : public MonoBehaviour_t_92453903_0
{
	// CardboardHead CardboardOnGUIMouse::head
	CardboardHead_t_732803653_0 * ___head_2;
	// UnityEngine.Texture CardboardOnGUIMouse::pointerImage
	Texture_t1814018354_0 * ___pointerImage_3;
	// UnityEngine.Vector2 CardboardOnGUIMouse::pointerSize
	Vector2_t_725341338_0  ___pointerSize_4;
	// UnityEngine.Vector2 CardboardOnGUIMouse::pointerSpot
	Vector2_t_725341338_0  ___pointerSpot_5;
	// System.Boolean CardboardOnGUIMouse::pointerVisible
	bool ___pointerVisible_6;
	// System.Int32 CardboardOnGUIMouse::pointerX
	int32_t ___pointerX_7;
	// System.Int32 CardboardOnGUIMouse::pointerY
	int32_t ___pointerY_8;
};
