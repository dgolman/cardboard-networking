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

// UnityEngine.GUIStyle
struct GUIStyle_t822037503_0;
// UnityEngine.Event
struct Event_t_386895759_0;
struct Event_t_386895759_0_marshaled;
// UnityEngine.SliderState
struct SliderState_t305709255_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SliderHandler23797248.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_EventType563663691.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C"  void SliderHandler__ctor_m_77393405_0 (SliderHandler_t23797248_0 * __this, Rect_t_981940947_0  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t822037503_0 * ___slider, GUIStyle_t822037503_0 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
extern "C"  float SliderHandler_Handle_m_1885380784_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern "C"  float SliderHandler_OnMouseDown_m_336964350_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern "C"  float SliderHandler_OnMouseDrag_m_334855916_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern "C"  float SliderHandler_OnMouseUp_m1318588539_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern "C"  float SliderHandler_OnRepaint_m_30416474_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C"  int32_t SliderHandler_CurrentEventType_m_316733607_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C"  int32_t SliderHandler_CurrentScrollTroughSide_m1606169264_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C"  bool SliderHandler_IsEmptySlider_m_1771386792_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern "C"  bool SliderHandler_SupportsPageMovements_m_78355259_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C"  float SliderHandler_PageMovementValue_m_1634081939_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C"  float SliderHandler_PageUpMovementBound_m_1751225953_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C"  Event_t_386895759_0 * SliderHandler_CurrentEvent_m721596197_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C"  float SliderHandler_ValueForCurrentMousePosition_m493574741_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern "C"  float SliderHandler_Clamp_m_76012586_0 (SliderHandler_t23797248_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C"  Rect_t_981940947_0  SliderHandler_ThumbSelectionRect_m_597643750_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C"  void SliderHandler_StartDraggingWithValue_m_420023363_0 (SliderHandler_t23797248_0 * __this, float ___dragStartValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern "C"  SliderState_t305709255_0 * SliderHandler_SliderState_m1456191352_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C"  Rect_t_981940947_0  SliderHandler_ThumbRect_m1881961532_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C"  Rect_t_981940947_0  SliderHandler_VerticalThumbRect_m1406344678_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C"  Rect_t_981940947_0  SliderHandler_HorizontalThumbRect_m_1605407688_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C"  float SliderHandler_ClampedCurrentValue_m_1288455956_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C"  float SliderHandler_MousePosition_m303335016_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C"  float SliderHandler_ValuesPerPixel_m41869331_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C"  float SliderHandler_ThumbSize_m_1260555599_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
extern "C"  float SliderHandler_MaxValue_m44679317_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
extern "C"  float SliderHandler_MinValue_m_1778288665_0 (SliderHandler_t23797248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
