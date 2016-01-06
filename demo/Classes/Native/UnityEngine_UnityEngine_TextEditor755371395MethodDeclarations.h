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

// UnityEngine.TextEditor
struct TextEditor_t755371395_0;
// System.String
struct String_t;
// UnityEngine.Event
struct Event_t_386895759_0;
struct Event_t_386895759_0_marshaled;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappin1798931458.h"
#include "UnityEngine_UnityEngine_TextEditor_CharacterType1188684375.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp_1427236540.h"

// System.Void UnityEngine.TextEditor::.ctor()
extern "C"  void TextEditor__ctor_m1029296947_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::get_text()
extern "C"  String_t* TextEditor_get_text_m_1632996822_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_text(System.String)
extern "C"  void TextEditor_set_text_m_1421697305_0 (TextEditor_t755371395_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
extern "C"  Rect_t_981940947_0  TextEditor_get_position_m_1511437961_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_position(UnityEngine.Rect)
extern "C"  void TextEditor_set_position_m1757326908_0 (TextEditor_t755371395_0 * __this, Rect_t_981940947_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
extern "C"  int32_t TextEditor_get_cursorIndex_m_1036109084_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
extern "C"  void TextEditor_set_cursorIndex_m_455683903_0 (TextEditor_t755371395_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
extern "C"  int32_t TextEditor_get_selectIndex_m847319678_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
extern "C"  void TextEditor_set_selectIndex_m_2023681701_0 (TextEditor_t755371395_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C"  void TextEditor_ClearCursorPos_m_307328318_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C"  void TextEditor_OnFocus_m1604527178_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C"  void TextEditor_OnLostFocus_m1599980550_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
extern "C"  void TextEditor_GrabGraphicalCursorPos_m192984232_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event)
extern "C"  bool TextEditor_HandleKeyEvent_m1630561141_0 (TextEditor_t755371395_0 * __this, Event_t_386895759_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
extern "C"  bool TextEditor_DeleteLineBack_m_244291363_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
extern "C"  bool TextEditor_DeleteWordBack_m1423005555_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
extern "C"  bool TextEditor_DeleteWordForward_m_2047916197_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Delete()
extern "C"  bool TextEditor_Delete_m_1703583358_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Backspace()
extern "C"  bool TextEditor_Backspace_m_1597226902_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C"  void TextEditor_SelectAll_m_1351598570_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectNone()
extern "C"  void TextEditor_SelectNone_m1425185029_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
extern "C"  bool TextEditor_get_hasSelection_m1781822098_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C"  bool TextEditor_DeleteSelection_m1201672204_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C"  void TextEditor_ReplaceSelection_m1188267705_0 (TextEditor_t755371395_0 * __this, String_t* ___replace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Insert(System.Char)
extern "C"  void TextEditor_Insert_m1131670643_0 (TextEditor_t755371395_0 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveRight()
extern "C"  void TextEditor_MoveRight_m_207267236_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLeft()
extern "C"  void TextEditor_MoveLeft_m_2121838295_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveUp()
extern "C"  void TextEditor_MoveUp_m2143317757_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveDown()
extern "C"  void TextEditor_MoveDown_m1953831684_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineStart()
extern "C"  void TextEditor_MoveLineStart_m_1633322738_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineEnd()
extern "C"  void TextEditor_MoveLineEnd_m_1865084409_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
extern "C"  void TextEditor_MoveGraphicalLineStart_m1209754461_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
extern "C"  void TextEditor_MoveGraphicalLineEnd_m537871382_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextStart()
extern "C"  void TextEditor_MoveTextStart_m1434665397_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextEnd()
extern "C"  void TextEditor_MoveTextEnd_m_1106585490_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
extern "C"  int32_t TextEditor_IndexOfEndOfLine_m1755139103_0 (TextEditor_t755371395_0 * __this, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
extern "C"  void TextEditor_MoveParagraphForward_m_1478437607_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
extern "C"  void TextEditor_MoveParagraphBackward_m_84157455_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveCursorToPosition(UnityEngine.Vector2)
extern "C"  void TextEditor_MoveCursorToPosition_m541380254_0 (TextEditor_t755371395_0 * __this, Vector2_t_725341338_0  ___cursorPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToPosition(UnityEngine.Vector2)
extern "C"  void TextEditor_SelectToPosition_m406326665_0 (TextEditor_t755371395_0 * __this, Vector2_t_725341338_0  ___cursorPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectLeft()
extern "C"  void TextEditor_SelectLeft_m1358467604_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectRight()
extern "C"  void TextEditor_SelectRight_m308033233_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectUp()
extern "C"  void TextEditor_SelectUp_m_1982665048_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectDown()
extern "C"  void TextEditor_SelectDown_m1139170287_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextEnd()
extern "C"  void TextEditor_SelectTextEnd_m175926179_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextStart()
extern "C"  void TextEditor_SelectTextStart_m1272765354_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MouseDragSelectsWholeWords(System.Boolean)
extern "C"  void TextEditor_MouseDragSelectsWholeWords_m_907522440_0 (TextEditor_t755371395_0 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DblClickSnap(UnityEngine.TextEditor/DblClickSnapping)
extern "C"  void TextEditor_DblClickSnap_m1086666601_0 (TextEditor_t755371395_0 * __this, uint8_t ___snapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
extern "C"  int32_t TextEditor_GetGraphicalLineStart_m_2039037741_0 (TextEditor_t755371395_0 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
extern "C"  int32_t TextEditor_GetGraphicalLineEnd_m_656213684_0 (TextEditor_t755371395_0 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
extern "C"  int32_t TextEditor_FindNextSeperator_m_1912021673_0 (TextEditor_t755371395_0 * __this, int32_t ___startPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::isLetterLikeChar(System.Char)
extern "C"  bool TextEditor_isLetterLikeChar_m985832713_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
extern "C"  int32_t TextEditor_FindPrevSeperator_m1092722199_0 (TextEditor_t755371395_0 * __this, int32_t ___startPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordRight()
extern "C"  void TextEditor_MoveWordRight_m1611060338_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
extern "C"  void TextEditor_MoveToStartOfNextWord_m1275371419_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
extern "C"  void TextEditor_MoveToEndOfPreviousWord_m_187311720_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
extern "C"  void TextEditor_SelectToStartOfNextWord_m_1523354480_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
extern "C"  void TextEditor_SelectToEndOfPreviousWord_m_1113373363_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Char)
extern "C"  int32_t TextEditor_ClassifyChar_m_455181176_0 (TextEditor_t755371395_0 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
extern "C"  int32_t TextEditor_FindStartOfNextWord_m_162480257_0 (TextEditor_t755371395_0 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
extern "C"  int32_t TextEditor_FindEndOfPreviousWord_m2038394172_0 (TextEditor_t755371395_0 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordLeft()
extern "C"  void TextEditor_MoveWordLeft_m_123519917_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordRight()
extern "C"  void TextEditor_SelectWordRight_m1449160295_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordLeft()
extern "C"  void TextEditor_SelectWordLeft_m979636158_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
extern "C"  void TextEditor_ExpandSelectGraphicalLineStart_m_16681150_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
extern "C"  void TextEditor_ExpandSelectGraphicalLineEnd_m885198139_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
extern "C"  void TextEditor_SelectGraphicalLineStart_m348597512_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
extern "C"  void TextEditor_SelectGraphicalLineEnd_m31947905_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
extern "C"  void TextEditor_SelectParagraphForward_m_1984361084_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
extern "C"  void TextEditor_SelectParagraphBackward_m1412083942_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentWord()
extern "C"  void TextEditor_SelectCurrentWord_m_1024144360_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,System.Int32)
extern "C"  int32_t TextEditor_FindEndOfClassification_m_388795658_0 (TextEditor_t755371395_0 * __this, int32_t ___p, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentParagraph()
extern "C"  void TextEditor_SelectCurrentParagraph_m469508226_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern "C"  void TextEditor_UpdateScrollOffsetIfNeeded_m_358759316_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C"  void TextEditor_UpdateScrollOffset_m_1225793894_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DrawCursor(System.String)
extern "C"  void TextEditor_DrawCursor_m_69440009_0 (TextEditor_t755371395_0 * __this, String_t* ___newText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp)
extern "C"  bool TextEditor_PerformOperation_m1276141663_0 (TextEditor_t755371395_0 * __this, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C"  void TextEditor_SaveBackup_m1589758352_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Cut()
extern "C"  bool TextEditor_Cut_m_672907027_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C"  void TextEditor_Copy_m645385702_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C"  String_t* TextEditor_ReplaceNewlinesWithSpaces_m_118139698_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C"  bool TextEditor_Paste_m_42128770_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
extern "C"  void TextEditor_MapKey_m368710468_0 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::InitKeyActions()
extern "C"  void TextEditor_InitKeyActions_m_1390254337_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DetectFocusChange()
extern "C"  void TextEditor_DetectFocusChange_m993735446_0 (TextEditor_t755371395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClampTextIndex(System.Int32&)
extern "C"  void TextEditor_ClampTextIndex_m707900960_0 (TextEditor_t755371395_0 * __this, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
