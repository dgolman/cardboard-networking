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

// ExitGames.Client.Photon.CmdLogItem
struct CmdLogItem_t1174831409_0;
// ExitGames.Client.Photon.NCommand
struct NCommand_t1920504657_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.CmdLogItem::.ctor()
extern "C"  void CmdLogItem__ctor_m_1021748539_0 (CmdLogItem_t1174831409_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.CmdLogItem::.ctor(ExitGames.Client.Photon.NCommand,System.Int32,System.Int32,System.Int32)
extern "C"  void CmdLogItem__ctor_m1447448681_0 (CmdLogItem_t1174831409_0 * __this, NCommand_t1920504657_0 * ___command, int32_t ___timeInt, int32_t ___rtt, int32_t ___variance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.CmdLogItem::ToString()
extern "C"  String_t* CmdLogItem_ToString_m21153646_0 (CmdLogItem_t1174831409_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
