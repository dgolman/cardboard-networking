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

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// Autowalk
struct  Autowalk_t_1134806029_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean Autowalk::isWalking
	bool ___isWalking_3;
	// CardboardHead Autowalk::head
	CardboardHead_t_732803653_0 * ___head_4;
	// System.Single Autowalk::speed
	float ___speed_5;
	// System.Boolean Autowalk::walkWhenTriggered
	bool ___walkWhenTriggered_6;
	// System.Boolean Autowalk::walkWhenLookDown
	bool ___walkWhenLookDown_7;
	// System.Double Autowalk::thresholdAngle
	double ___thresholdAngle_8;
	// System.Boolean Autowalk::freezeYPosition
	bool ___freezeYPosition_9;
	// System.Single Autowalk::yOffset
	float ___yOffset_10;
};
