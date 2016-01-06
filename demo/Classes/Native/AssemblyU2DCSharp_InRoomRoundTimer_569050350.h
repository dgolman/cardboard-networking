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

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// InRoomRoundTimer
struct  InRoomRoundTimer_t_569050350_0  : public MonoBehaviour_t_92453903_0
{
	// System.Int32 InRoomRoundTimer::SecondsPerTurn
	int32_t ___SecondsPerTurn_3;
	// System.Double InRoomRoundTimer::StartTime
	double ___StartTime_4;
	// UnityEngine.Rect InRoomRoundTimer::TextPos
	Rect_t_981940947_0  ___TextPos_5;
	// System.Boolean InRoomRoundTimer::startRoundWhenTimeIsSynced
	bool ___startRoundWhenTimeIsSynced_6;
};
