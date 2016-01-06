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

// ExitGames.Client.Photon.CmdLogSentReliable
struct CmdLogSentReliable_t_666690528_0;
// ExitGames.Client.Photon.NCommand
struct NCommand_t1920504657_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.CmdLogSentReliable::.ctor(ExitGames.Client.Photon.NCommand,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void CmdLogSentReliable__ctor_m1035862053_0 (CmdLogSentReliable_t_666690528_0 * __this, NCommand_t1920504657_0 * ___command, int32_t ___timeInt, int32_t ___rtt, int32_t ___variance, bool ___triggeredTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.CmdLogSentReliable::ToString()
extern "C"  String_t* CmdLogSentReliable_ToString_m514622429_0 (CmdLogSentReliable_t_666690528_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
