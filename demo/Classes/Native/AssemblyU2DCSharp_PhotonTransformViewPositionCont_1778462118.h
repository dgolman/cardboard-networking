#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t_1820556442_0;
// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t1059934803_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// PhotonTransformViewPositionControl
struct  PhotonTransformViewPositionControl_t_1778462118_0  : public Object_t
{
	// PhotonTransformViewPositionModel PhotonTransformViewPositionControl::m_Model
	PhotonTransformViewPositionModel_t_1820556442_0 * ___m_Model_0;
	// System.Single PhotonTransformViewPositionControl::m_CurrentSpeed
	float ___m_CurrentSpeed_1;
	// System.Double PhotonTransformViewPositionControl::m_LastSerializeTime
	double ___m_LastSerializeTime_2;
	// UnityEngine.Vector3 PhotonTransformViewPositionControl::m_SynchronizedSpeed
	Vector3_t_725341337_0  ___m_SynchronizedSpeed_3;
	// System.Single PhotonTransformViewPositionControl::m_SynchronizedTurnSpeed
	float ___m_SynchronizedTurnSpeed_4;
	// UnityEngine.Vector3 PhotonTransformViewPositionControl::m_NetworkPosition
	Vector3_t_725341337_0  ___m_NetworkPosition_5;
	// System.Collections.Generic.Queue`1<UnityEngine.Vector3> PhotonTransformViewPositionControl::m_OldNetworkPositions
	Queue_1_t1059934803_0 * ___m_OldNetworkPositions_6;
	// System.Boolean PhotonTransformViewPositionControl::m_UpdatedPositionAfterOnSerialize
	bool ___m_UpdatedPositionAfterOnSerialize_7;
};
