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

// CardboardEye
struct CardboardEye_t_300735754_0;
// StereoController
struct StereoController_t1679119023_0;
// CardboardHead
struct CardboardHead_t_732803653_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.Void CardboardEye::.ctor()
extern "C"  void CardboardEye__ctor_m1179500640_0 (CardboardEye_t_300735754_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController CardboardEye::get_Controller()
extern "C"  StereoController_t1679119023_0 * CardboardEye_get_Controller_m_1598897486_0 (CardboardEye_t_300735754_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead CardboardEye::get_Head()
extern "C"  CardboardHead_t_732803653_0 * CardboardEye_get_Head_m1430956586_0 (CardboardEye_t_300735754_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Awake()
extern "C"  void CardboardEye_Awake_m1417105859_0 (CardboardEye_t_300735754_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Start()
extern "C"  void CardboardEye_Start_m126638432_0 (CardboardEye_t_300735754_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&,System.Single,System.Single,System.Single)
extern "C"  void CardboardEye_FixProjection_m_735517117_0 (CardboardEye_t_300735754_0 * __this, Matrix4x4_t1577636070_0 * ___proj, float ___near, float ___far, float ___ipdScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Setup()
extern "C"  void CardboardEye_Setup_m_285166405_0 (CardboardEye_t_300735754_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Render()
extern "C"  void CardboardEye_Render_m2114201658_0 (CardboardEye_t_300735754_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPreCull()
extern "C"  void CardboardEye_OnPreCull_m_2145327788_0 (CardboardEye_t_300735754_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C"  void CardboardEye_CopyCameraAndMakeSideBySide_m669497188_0 (CardboardEye_t_300735754_0 * __this, StereoController_t1679119023_0 * ___controller, float ___parx, float ___pary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
