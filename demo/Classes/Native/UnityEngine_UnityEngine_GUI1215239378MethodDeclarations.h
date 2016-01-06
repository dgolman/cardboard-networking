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

// UnityEngine.GUISkin
struct GUISkin_t_1636059793_0;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t822037503_0;
// UnityEngine.GUIContent
struct GUIContent_t_1764161721_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;
// UnityEngine.TextEditor
struct TextEditor_t755371395_0;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1152670953_0;
// UnityEngine.Rect[]
struct RectU5BU5D_t1247557967_0;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t361791205_0;
// UnityEngine.Material
struct Material_t1701708784_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_818288618.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_ScaleMode_1345897372.h"
#include "UnityEngine_UnityEngine_FocusType_2134088055.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1345698031_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C"  DateTime_t_818288618_0  GUI_get_nextScrollStepTime_m719800559_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m_474454500_0 (Object_t * __this /* static, unused */, DateTime_t_818288618_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C"  int32_t GUI_get_scrollTroughSide_m_925075432_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C"  void GUI_set_scrollTroughSide_m1228634973_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m1213959601_0 (Object_t * __this /* static, unused */, GUISkin_t_1636059793_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t_1636059793_0 * GUI_get_skin_m_293512454_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m800823745_0 (Object_t * __this /* static, unused */, GUISkin_t_1636059793_0 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
extern "C"  void GUI_set_tooltip_m_1537683680_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C"  void GUI_Label_m1483857617_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m_11219960_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, String_t* ___text, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m_2001265027_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C"  void GUI_DrawTexture_m2033906102_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, Texture_t1814018354_0 * ___image, int32_t ___scaleMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C"  void GUI_DrawTexture_m1717108487_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, Texture_t1814018354_0 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C"  void GUI_DrawTexture_m1839804844_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, Texture_t1814018354_0 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
extern "C"  void GUI_Box_m_534684568_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Box_m_1287915052_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m885093907_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m485853658_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, Texture_t1814018354_0 * ___image, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m_488106433_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C"  bool GUI_DoRepeatButton_m_100796650_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, int32_t ___focusType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C"  String_t* GUI_PasswordFieldGetStrToShow_m1283548296_0 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle)
extern "C"  void GUI_DoTextField_m1314526082_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___id, GUIContent_t_1764161721_0 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String)
extern "C"  void GUI_DoTextField_m597815358_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___id, GUIContent_t_1764161721_0 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t822037503_0 * ___style, String_t* ___secureText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C"  void GUI_DoTextField_m_1100115499_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___id, GUIContent_t_1764161721_0 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t822037503_0 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C"  void GUI_HandleTextFieldEventForTouchscreen_m_567742145_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___id, GUIContent_t_1764161721_0 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t822037503_0 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t755371395_0 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForDesktop(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,UnityEngine.TextEditor)
extern "C"  void GUI_HandleTextFieldEventForDesktop_m_1196477917_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___id, GUIContent_t_1764161721_0 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t822037503_0 * ___style, TextEditor_t755371395_0 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Toggle_m_1712542388_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, bool ___value, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::Toolbar(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle)
extern "C"  int32_t GUI_Toolbar_m_449005627_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___selected, GUIContentU5BU5D_t1152670953_0* ___contents, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FindStyles(UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,System.String,System.String,System.String)
extern "C"  void GUI_FindStyles_m_91804827_0 (Object_t * __this /* static, unused */, GUIStyle_t822037503_0 ** ___style, GUIStyle_t822037503_0 ** ___firstStyle, GUIStyle_t822037503_0 ** ___midStyle, GUIStyle_t822037503_0 ** ___lastStyle, String_t* ___first, String_t* ___mid, String_t* ___last, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  int32_t GUI_CalcTotalHorizSpacing_m1193798691_0 (Object_t * __this /* static, unused */, int32_t ___xCount, GUIStyle_t822037503_0 * ___style, GUIStyle_t822037503_0 * ___firstStyle, GUIStyle_t822037503_0 * ___midStyle, GUIStyle_t822037503_0 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  int32_t GUI_DoButtonGrid_m_25342287_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___selected, GUIContentU5BU5D_t1152670953_0* ___contents, int32_t ___xCount, GUIStyle_t822037503_0 * ___style, GUIStyle_t822037503_0 * ___firstStyle, GUIStyle_t822037503_0 * ___midStyle, GUIStyle_t822037503_0 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C"  RectU5BU5D_t1247557967_0* GUI_CalcMouseRects_m1004387707_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___count, int32_t ___xCount, float ___elemWidth, float ___elemHeight, GUIStyle_t822037503_0 * ___style, GUIStyle_t822037503_0 * ___firstStyle, GUIStyle_t822037503_0 * ___midStyle, GUIStyle_t822037503_0 * ___lastStyle, bool ___addBorders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
extern "C"  int32_t GUI_GetButtonGridMouseSelection_m1444198773_0 (Object_t * __this /* static, unused */, RectU5BU5D_t1247557967_0* ___buttonRects, Vector2_t_725341338_0  ___mousePos, bool ___findNearest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  float GUI_HorizontalSlider_m899690739_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t822037503_0 * ___slider, GUIStyle_t822037503_0 * ___thumb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C"  float GUI_Slider_m_2025527602_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t822037503_0 * ___slider, GUIStyle_t822037503_0 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_HorizontalScrollbar_m2127981046_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  bool GUI_ScrollerRepeatButton_m_1789955770_0 (Object_t * __this /* static, unused */, int32_t ___scrollerID, Rect_t_981940947_0  ___rect, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_VerticalScrollbar_m1710564744_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C"  float GUI_Scroller_m520117136_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t822037503_0 * ___slider, GUIStyle_t822037503_0 * ___thumb, GUIStyle_t822037503_0 * ___leftButton, GUIStyle_t822037503_0 * ___rightButton, bool ___horiz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_BeginGroup_m_1147222007_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C"  void GUI_EndGroup_m_1950990870_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  Vector2_t_725341338_0  GUI_BeginScrollView_m_592902759_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, Vector2_t_725341338_0  ___scrollPosition, Rect_t_981940947_0  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t822037503_0 * ___horizontalScrollbar, GUIStyle_t822037503_0 * ___verticalScrollbar, GUIStyle_t822037503_0 * ___background, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C"  void GUI_EndScrollView_m_679744160_0 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  Rect_t_981940947_0  GUI_Window_m_884185373_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___clientRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___title, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m_2034628492_0 (Object_t * __this /* static, unused */, WindowFunction_t361791205_0 * ___func, int32_t ___id, GUISkin_t_1636059793_0 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DragWindow()
extern "C"  void GUI_DragWindow_m806512778_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C"  Color_t_388944582_0  GUI_get_color_m1489208189_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C"  void GUI_set_color_m_1990856604_0 (Object_t * __this /* static, unused */, Color_t_388944582_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_get_color_m1047250244_0 (Object_t * __this /* static, unused */, Color_t_388944582_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_set_color_m774536016_0 (Object_t * __this /* static, unused */, Color_t_388944582_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_changed()
extern "C"  bool GUI_get_changed_m1591686125_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m727947722_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
extern "C"  bool GUI_get_enabled_m_495227590_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
extern "C"  void GUI_Internal_SetTooltip_m2127802787_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m_1304958283_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m_1587287330_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0 * ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C"  Material_t1701708784_0 * GUI_get_blendMaterial_m_902120068_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C"  Material_t1701708784_0 * GUI_get_blitMaterial_m1516673786_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m_2100473027_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m1954108340_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0 * ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::SetNextControlName(System.String)
extern "C"  void GUI_SetNextControlName_m1893157449_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::GetNameOfFocusedControl()
extern "C"  String_t* GUI_GetNameOfFocusedControl_m_1179786051_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FocusControl(System.String)
extern "C"  void GUI_FocusControl_m1668337335_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoToggle_m286774485_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___id, bool ___value, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoToggle_m_1822771376_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0 * ___position, int32_t ___id, bool ___value, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C"  bool GUI_get_usePageScrollbars_m944581596_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C"  void GUI_InternalRepaintEditorWindow_m_1071760889_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C"  Rect_t_981940947_0  GUI_DoWindow_m_1563283580_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___clientRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___title, GUIStyle_t822037503_0 * ___style, GUISkin_t_1636059793_0 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean,UnityEngine.Rect&)
extern "C"  void GUI_INTERNAL_CALL_DoWindow_m104027050_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0 * ___clientRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___title, GUIStyle_t822037503_0 * ___style, GUISkin_t_1636059793_0 * ___skin, bool ___forceRectOnLayout, Rect_t_981940947_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DragWindow(UnityEngine.Rect)
extern "C"  void GUI_DragWindow_m_22246833_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DragWindow(UnityEngine.Rect&)
extern "C"  void GUI_INTERNAL_CALL_DragWindow_m269698750_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
