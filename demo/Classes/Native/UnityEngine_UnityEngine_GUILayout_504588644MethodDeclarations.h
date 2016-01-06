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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t_1479612077_0;
// UnityEngine.GUIStyle
struct GUIStyle_t822037503_0;
// UnityEngine.GUIContent
struct GUIContent_t_1764161721_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1152670953_0;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t361791205_0;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t1897899569_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m925445731_0 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m1421013860_0 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m_482920774_0 (Object_t * __this /* static, unused */, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m6468109_0 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1519327982_0 (Object_t * __this /* static, unused */, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextField_m_924056793_0 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_DoTextField_m_470599281_0 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Toggle_m_1115220968_0 (Object_t * __this /* static, unused */, bool ___value, String_t* ___text, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoToggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoToggle_m_1950053073_0 (Object_t * __this /* static, unused */, bool ___value, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,System.String[],UnityEngine.GUILayoutOption[])
extern "C"  int32_t GUILayout_Toolbar_m1048546399_0 (Object_t * __this /* static, unused */, int32_t ___selected, StringU5BU5D_t_816028754_0* ___texts, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  int32_t GUILayout_Toolbar_m1916473871_0 (Object_t * __this /* static, unused */, int32_t ___selected, GUIContentU5BU5D_t1152670953_0* ___contents, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_HorizontalSlider_m_1687445549_0 (Object_t * __this /* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_DoHorizontalSlider_m_776649048_0 (Object_t * __this /* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t822037503_0 * ___slider, GUIStyle_t822037503_0 * ___thumb, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C"  void GUILayout_Space_m559926739_0 (Object_t * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C"  void GUILayout_FlexibleSpace_m_978261107_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m722450062_0 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m_1871323978_0 (Object_t * __this /* static, unused */, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C"  void GUILayout_EndHorizontal_m556624369_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m_2139147652_0 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m_1169314908_0 (Object_t * __this /* static, unused */, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C"  void GUILayout_EndVertical_m_609436733_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C"  void GUILayout_BeginArea_m_174865427_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m_412848020_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___screenRect, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m_1728860395_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___screenRect, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C"  void GUILayout_EndArea_m755663130_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t_725341338_0  GUILayout_BeginScrollView_m247627737_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___scrollPosition, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t_725341338_0  GUILayout_BeginScrollView_m_787096146_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t822037503_0 * ___horizontalScrollbar, GUIStyle_t822037503_0 * ___verticalScrollbar, GUIStyle_t822037503_0 * ___background, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C"  void GUILayout_EndScrollView_m2116108639_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C"  void GUILayout_EndScrollView_m_1053907818_0 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t_981940947_0  GUILayout_Window_m_552016024_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___screenRect, WindowFunction_t361791205_0 * ___func, String_t* ___text, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t_981940947_0  GUILayout_DoWindow_m1233349823_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___screenRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_Width_m_2035345885_0 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinWidth(System.Single)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_MinWidth_m1816706679_0 (Object_t * __this /* static, unused */, float ___minWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_Height_m_520164412_0 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_ExpandWidth_m1724891333_0 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_ExpandHeight_m_1603824008_0 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
