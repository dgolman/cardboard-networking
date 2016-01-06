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

// ExitGames.Client.Photon.CmdLogReceivedAck
struct CmdLogReceivedAck_t1721907978_0;
// ExitGames.Client.Photon.NCommand
struct NCommand_t1920504657_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.CmdLogReceivedAck::.ctor(ExitGames.Client.Photon.NCommand,System.Int32,System.Int32,System.Int32)
extern "C"  void CmdLogReceivedAck__ctor_m1147551496_0 (CmdLogReceivedAck_t1721907978_0 * __this, NCommand_t1920504657_0 * ___command, int32_t ___timeInt, int32_t ___rtt, int32_t ___variance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.CmdLogReceivedAck::ToString()
extern "C"  String_t* CmdLogReceivedAck_ToString_m1237657063_0 (CmdLogReceivedAck_t1721907978_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
