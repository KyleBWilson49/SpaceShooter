﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2121638921;
struct t1320879058;
struct String_t;
struct t1612618265;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t456245315  : public Il2CppObject
{
public:

public:
};

struct t456245315_SFs
{
public:
	t2121638921 * f0;
	t2121638921 * f1;
	t1320879058 * f2;
	String_t* f3;
	Il2CppObject * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t456245315_SFs, f0)); }
	inline t2121638921 * fg0() const { return f0; }
	inline t2121638921 ** fag0() { return &f0; }
	inline void fs0(t2121638921 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t456245315_SFs, f1)); }
	inline t2121638921 * fg1() const { return f1; }
	inline t2121638921 ** fag1() { return &f1; }
	inline void fs1(t2121638921 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t456245315_SFs, f2)); }
	inline t1320879058 * fg2() const { return f2; }
	inline t1320879058 ** fag2() { return &f2; }
	inline void fs2(t1320879058 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t456245315_SFs, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t456245315_SFs, f4)); }
	inline Il2CppObject * fg4() const { return f4; }
	inline Il2CppObject ** fag4() { return &f4; }
	inline void fs4(Il2CppObject * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
