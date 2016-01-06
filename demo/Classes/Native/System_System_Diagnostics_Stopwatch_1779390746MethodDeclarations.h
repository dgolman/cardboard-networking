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

// System.Diagnostics.Stopwatch
struct Stopwatch_t_1779390746_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_393459662.h"

// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C"  void Stopwatch__ctor_m435104496_0 (Stopwatch_t_1779390746_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
extern "C"  void Stopwatch__cctor_m121241277_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern "C"  int64_t Stopwatch_GetTimestamp_m930365925_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern "C"  TimeSpan_t_393459662_0  Stopwatch_get_Elapsed_m892540484_0 (Stopwatch_t_1779390746_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern "C"  int64_t Stopwatch_get_ElapsedMilliseconds_m23977474_0 (Stopwatch_t_1779390746_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern "C"  int64_t Stopwatch_get_ElapsedTicks_m1015444840_0 (Stopwatch_t_1779390746_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Reset()
extern "C"  void Stopwatch_Reset_m_1918462563_0 (Stopwatch_t_1779390746_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C"  void Stopwatch_Start_m_617757712_0 (Stopwatch_t_1779390746_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Stop()
extern "C"  void Stopwatch_Stop_m_1682082858_0 (Stopwatch_t_1779390746_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
