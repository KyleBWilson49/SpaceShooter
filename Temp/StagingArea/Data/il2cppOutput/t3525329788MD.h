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
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "t3525329788.h"
#include "Il2CppObject.h"

extern "C"  String_t* m3859776067 (t3525329788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  int32_t m128434585 (t3525329788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  bool m3404198849 (t3525329788 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t3525329788;
struct t3525329788_marshaled_pinvoke;

extern "C" void t3525329788_marshal_pinvoke(const t3525329788& unmarshaled, t3525329788_marshaled_pinvoke& marshaled);
extern "C" void t3525329788_marshal_pinvoke_back(const t3525329788_marshaled_pinvoke& marshaled, t3525329788& unmarshaled);
extern "C" void t3525329788_marshal_pinvoke_cleanup(t3525329788_marshaled_pinvoke& marshaled);

struct t3525329788;
struct t3525329788_marshaled_com;

extern "C" void t3525329788_marshal_com(const t3525329788& unmarshaled, t3525329788_marshaled_com& marshaled);
extern "C" void t3525329788_marshal_com_back(const t3525329788_marshaled_com& marshaled, t3525329788& unmarshaled);
extern "C" void t3525329788_marshal_com_cleanup(t3525329788_marshaled_com& marshaled);
