#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CardboardiOSDevice
struct CardboardiOSDevice_t_851660312_0;
// System.Collections.Generic.List`1<System.String>
struct List_1_t_293602512_0;
// System.Uri
struct Uri_t18014439_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"

// System.Void CardboardiOSDevice::.ctor()
extern "C"  void CardboardiOSDevice__ctor_m_2040346770_0 (CardboardiOSDevice_t_851660312_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C"  bool CardboardiOSDevice_SupportsNativeDistortionCorrection_m210658036_0 (CardboardiOSDevice_t_851660312_0 * __this, List_1_t_293602512_0 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C"  bool CardboardiOSDevice_SupportsNativeUILayer_m1879774734_0 (CardboardiOSDevice_t_851660312_0 * __this, List_1_t_293602512_0 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetVRModeEnabled(System.Boolean)
extern "C"  void CardboardiOSDevice_SetVRModeEnabled_m238427693_0 (CardboardiOSDevice_t_851660312_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetSettingsButtonEnabled(System.Boolean)
extern "C"  void CardboardiOSDevice_SetSettingsButtonEnabled_m2141597591_0 (CardboardiOSDevice_t_851660312_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C"  void CardboardiOSDevice_SetAutoDriftCorrectionEnabled_m_680717842_0 (CardboardiOSDevice_t_851660312_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetTapIsTrigger(System.Boolean)
extern "C"  void CardboardiOSDevice_SetTapIsTrigger_m_433155184_0 (CardboardiOSDevice_t_851660312_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SetDefaultDeviceProfile(System.Uri)
extern "C"  bool CardboardiOSDevice_SetDefaultDeviceProfile_m_1875290497_0 (CardboardiOSDevice_t_851660312_0 * __this, Uri_t18014439_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::Init()
extern "C"  void CardboardiOSDevice_Init_m_1361207002_0 (CardboardiOSDevice_t_851660312_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::PostRender(System.Boolean)
extern "C"  void CardboardiOSDevice_PostRender_m454272419_0 (CardboardiOSDevice_t_851660312_0 * __this, bool ___vrMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::OnFocus(System.Boolean)
extern "C"  void CardboardiOSDevice_OnFocus_m1424928380_0 (CardboardiOSDevice_t_851660312_0 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::OnPause(System.Boolean)
extern "C"  void CardboardiOSDevice_OnPause_m_1415871590_0 (CardboardiOSDevice_t_851660312_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::ShowSettingsDialog()
extern "C"  void CardboardiOSDevice_ShowSettingsDialog_m1600148734_0 (CardboardiOSDevice_t_851660312_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::isOpenGLAPI()
extern "C"  bool CardboardiOSDevice_isOpenGLAPI_m_738298663_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setVRModeEnabled(System.Boolean)
extern "C"  void CardboardiOSDevice_setVRModeEnabled_m339614221_0 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setSettingsButtonEnabled(System.Boolean)
extern "C"  void CardboardiOSDevice_setSettingsButtonEnabled_m1667517303_0 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setSyncWithCardboardEnabled(System.Boolean)
extern "C"  void CardboardiOSDevice_setSyncWithCardboardEnabled_m_1920221679_0 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::readProfile()
extern "C"  void CardboardiOSDevice_readProfile_m_957621537_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::setDefaultDeviceProfile(System.Byte[],System.Int32)
extern "C"  bool CardboardiOSDevice_setDefaultDeviceProfile_m1013486234_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___profileData, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::isOnboardingDone()
extern "C"  bool CardboardiOSDevice_isOnboardingDone_m_206193039_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::launchSettingsDialog()
extern "C"  void CardboardiOSDevice_launchSettingsDialog_m306938964_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::launchOnboardingDialog()
extern "C"  void CardboardiOSDevice_launchOnboardingDialog_m126809164_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
