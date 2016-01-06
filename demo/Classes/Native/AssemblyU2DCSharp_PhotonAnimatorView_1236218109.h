#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t607439280_0;
// PhotonStreamQueue
struct PhotonStreamQueue_t_269889094_0;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t437065943_0;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t1317866799_0;
// PhotonView
struct PhotonView_t_751779204_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// PhotonAnimatorView
struct  PhotonAnimatorView_t_1236218109_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Animator PhotonAnimatorView::m_Animator
	Animator_t607439280_0 * ___m_Animator_2;
	// PhotonStreamQueue PhotonAnimatorView::m_StreamQueue
	PhotonStreamQueue_t_269889094_0 * ___m_StreamQueue_3;
	// System.Boolean PhotonAnimatorView::ShowLayerWeightsInspector
	bool ___ShowLayerWeightsInspector_4;
	// System.Boolean PhotonAnimatorView::ShowParameterInspector
	bool ___ShowParameterInspector_5;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::m_SynchronizeParameters
	List_1_t437065943_0 * ___m_SynchronizeParameters_6;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::m_SynchronizeLayers
	List_1_t1317866799_0 * ___m_SynchronizeLayers_7;
	// UnityEngine.Vector3 PhotonAnimatorView::m_ReceiverPosition
	Vector3_t_725341337_0  ___m_ReceiverPosition_8;
	// System.Single PhotonAnimatorView::m_LastDeserializeTime
	float ___m_LastDeserializeTime_9;
	// System.Boolean PhotonAnimatorView::m_WasSynchronizeTypeChanged
	bool ___m_WasSynchronizeTypeChanged_10;
	// PhotonView PhotonAnimatorView::m_PhotonView
	PhotonView_t_751779204_0 * ___m_PhotonView_11;
};
