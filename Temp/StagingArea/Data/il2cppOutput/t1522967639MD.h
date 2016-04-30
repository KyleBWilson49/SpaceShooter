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

struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "t1522967639.h"
#include "t3525329789.h"

extern "C"  t3525329789  m3201866877 (t1522967639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  String_t* m1391619614 (t1522967639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t1522967639;
struct t1522967639_marshaled_pinvoke;

extern "C" void t1522967639_marshal_pinvoke(const t1522967639& unmarshaled, t1522967639_marshaled_pinvoke& marshaled);
extern "C" void t1522967639_marshal_pinvoke_back(const t1522967639_marshaled_pinvoke& marshaled, t1522967639& unmarshaled);
extern "C" void t1522967639_marshal_pinvoke_cleanup(t1522967639_marshaled_pinvoke& marshaled);

struct t1522967639;
struct t1522967639_marshaled_com;

extern "C" void t1522967639_marshal_com(const t1522967639& unmarshaled, t1522967639_marshaled_com& marshaled);
extern "C" void t1522967639_marshal_com_back(const t1522967639_marshaled_com& marshaled, t1522967639& unmarshaled);
extern "C" void t1522967639_marshal_com_cleanup(t1522967639_marshaled_com& marshaled);
