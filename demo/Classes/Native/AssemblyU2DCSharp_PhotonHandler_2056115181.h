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
// PhotonHandler
struct PhotonHandler_t_2056115181_0;
// System.Diagnostics.Stopwatch
struct Stopwatch_t_1779390746_0;
// System.Type
struct Type_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"
#include "AssemblyU2DCSharp_CloudRegionCode404377275.h"

// PhotonHandler
struct  PhotonHandler_t_2056115181_0  : public MonoBehaviour_t6853251_0
{
	// System.Int32 PhotonHandler::updateInterval
	int32_t ___updateInterval_4;
	// System.Int32 PhotonHandler::updateIntervalOnSerialize
	int32_t ___updateIntervalOnSerialize_5;
	// System.Int32 PhotonHandler::nextSendTickCount
	int32_t ___nextSendTickCount_6;
	// System.Int32 PhotonHandler::nextSendTickCountOnSerialize
	int32_t ___nextSendTickCountOnSerialize_7;
};
struct PhotonHandler_t_2056115181_0_StaticFields{
	// PhotonHandler PhotonHandler::SP
	PhotonHandler_t_2056115181_0 * ___SP_3;
	// System.Boolean PhotonHandler::sendThreadShouldRun
	bool ___sendThreadShouldRun_8;
	// System.Diagnostics.Stopwatch PhotonHandler::timerToStopConnectionInBackground
	Stopwatch_t_1779390746_0 * ___timerToStopConnectionInBackground_9;
	// System.Boolean PhotonHandler::AppQuits
	bool ___AppQuits_10;
	// System.Type PhotonHandler::PingImplementation
	Type_t * ___PingImplementation_11;
	// CloudRegionCode PhotonHandler::BestRegionCodeCurrently
	int32_t ___BestRegionCodeCurrently_12;
};
