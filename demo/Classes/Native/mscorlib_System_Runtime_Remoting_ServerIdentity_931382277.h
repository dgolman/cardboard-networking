#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t1484498776_0;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1677259445_0;
// System.Runtime.Remoting.Contexts.Context
struct Context_t_1732618593_0;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t_1599480145_0;

#include "mscorlib_System_Runtime_Remoting_Identity_1227012328.h"

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t_931382277_0  : public Identity_t_1227012328_0
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t1484498776_0 * ____serverObject_8;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.ServerIdentity::_serverSink
	Object_t * ____serverSink_9;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t_1732618593_0 * ____context_10;
	// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::_lease
	Lease_t_1599480145_0 * ____lease_11;
};
