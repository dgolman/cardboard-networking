#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Cardboard
struct Cardboard_t1550393659_0;
// BaseVRDevice
struct BaseVRDevice_t1612809342_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;
// System.Uri
struct Uri_t18014439_0;
// CardboardUILayer
struct CardboardUILayer_t_1803195006_0;
// System.Action
struct Action_t2132293834_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// Cardboard
struct  Cardboard_t1550393659_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean Cardboard::distortionCorrection
	bool ___distortionCorrection_3;
	// System.Boolean Cardboard::vrModeEnabled
	bool ___vrModeEnabled_4;
	// System.Boolean Cardboard::enableAlignmentMarker
	bool ___enableAlignmentMarker_5;
	// System.Boolean Cardboard::enableSettingsButton
	bool ___enableSettingsButton_6;
	// System.Boolean Cardboard::tapIsTrigger
	bool ___tapIsTrigger_7;
	// System.Single Cardboard::neckModelScale
	float ___neckModelScale_8;
	// System.Boolean Cardboard::autoDriftCorrection
	bool ___autoDriftCorrection_9;
	// System.Boolean Cardboard::syncWithCardboardApp
	bool ___syncWithCardboardApp_10;
	// UnityEngine.Vector2 Cardboard::defaultComfortableViewingRange
	Vector2_t_725341338_0  ___defaultComfortableViewingRange_13;
	// System.Uri Cardboard::DefaultDeviceProfile
	Uri_t18014439_0 * ___DefaultDeviceProfile_14;
	// System.Boolean Cardboard::updated
	bool ___updated_15;
	// CardboardUILayer Cardboard::uiLayer
	CardboardUILayer_t_1803195006_0 * ___uiLayer_16;
	// System.Action Cardboard::OnTrigger
	Action_t2132293834_0 * ___OnTrigger_17;
	// System.Action Cardboard::OnTilt
	Action_t2132293834_0 * ___OnTilt_18;
	// System.Boolean Cardboard::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19;
	// System.Boolean Cardboard::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_20;
	// System.Boolean Cardboard::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_21;
	// System.Boolean Cardboard::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_22;
};
struct Cardboard_t1550393659_0_StaticFields{
	// Cardboard Cardboard::sdk
	Cardboard_t1550393659_0 * ___sdk_2;
	// BaseVRDevice Cardboard::device
	BaseVRDevice_t1612809342_0 * ___device_11;
	// UnityEngine.RenderTexture Cardboard::stereoScreen
	RenderTexture_t1203146108_0 * ___stereoScreen_12;
};
