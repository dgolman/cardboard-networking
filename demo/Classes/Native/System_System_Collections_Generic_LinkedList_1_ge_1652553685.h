﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedListNode_1_t1359841741_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "mscorlib_System_Object_887538054.h"

// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct  LinkedList_1_t_1652553685_0  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1::count
	uint32_t ___count_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1::version
	uint32_t ___version_3;
	// System.Object System.Collections.Generic.LinkedList`1::syncRoot
	Object_t * ___syncRoot_4;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::first
	LinkedListNode_1_t1359841741_0 * ___first_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::si
	SerializationInfo_t526833679_0 * ___si_6;
};