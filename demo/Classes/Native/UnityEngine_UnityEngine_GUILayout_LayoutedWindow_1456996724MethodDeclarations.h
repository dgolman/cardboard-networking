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

// UnityEngine.GUILayout/LayoutedWindow
struct LayoutedWindow_t_1456996724_0;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t361791205_0;
// UnityEngine.GUIContent
struct GUIContent_t_1764161721_0;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t_1479612077_0;
// UnityEngine.GUIStyle
struct GUIStyle_t822037503_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// System.Void UnityEngine.GUILayout/LayoutedWindow::.ctor(UnityEngine.GUI/WindowFunction,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[],UnityEngine.GUIStyle)
extern "C"  void LayoutedWindow__ctor_m70994485_0 (LayoutedWindow_t_1456996724_0 * __this, WindowFunction_t361791205_0 * ___f, Rect_t_981940947_0  ___screenRect, GUIContent_t_1764161721_0 * ___content, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout/LayoutedWindow::DoWindow(System.Int32)
extern "C"  void LayoutedWindow_DoWindow_m1441924070_0 (LayoutedWindow_t_1456996724_0 * __this, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
