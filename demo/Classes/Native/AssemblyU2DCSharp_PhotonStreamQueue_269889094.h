#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t490374140_0;

#include "mscorlib_System_Object_887538054.h"

// PhotonStreamQueue
struct  PhotonStreamQueue_t_269889094_0  : public Object_t
{
	// System.Int32 PhotonStreamQueue::m_SampleRate
	int32_t ___m_SampleRate_0;
	// System.Int32 PhotonStreamQueue::m_SampleCount
	int32_t ___m_SampleCount_1;
	// System.Int32 PhotonStreamQueue::m_ObjectsPerSample
	int32_t ___m_ObjectsPerSample_2;
	// System.Single PhotonStreamQueue::m_LastSampleTime
	float ___m_LastSampleTime_3;
	// System.Int32 PhotonStreamQueue::m_LastFrameCount
	int32_t ___m_LastFrameCount_4;
	// System.Int32 PhotonStreamQueue::m_NextObjectIndex
	int32_t ___m_NextObjectIndex_5;
	// System.Collections.Generic.List`1<System.Object> PhotonStreamQueue::m_Objects
	List_1_t490374140_0 * ___m_Objects_6;
	// System.Boolean PhotonStreamQueue::m_IsWriting
	bool ___m_IsWriting_7;
};
