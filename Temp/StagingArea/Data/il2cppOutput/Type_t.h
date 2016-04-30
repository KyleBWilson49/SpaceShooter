#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3431720054;
struct t1585748256;
struct Il2CppObject;

#include "MemberInfo_t.h"
#include "t1864875887.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  Type_t  : public MemberInfo_t
{
public:
	t1864875887  f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(Type_t, f0)); }
	inline t1864875887  fg0() const { return f0; }
	inline t1864875887 * fag0() { return &f0; }
	inline void fs0(t1864875887  value)
	{
		f0 = value;
	}
};

struct Type_t_SFs
{
public:
	uint16_t f1;
	t3431720054* f2;
	t1585748256 * f3;
	t1585748256 * f4;
	t1585748256 * f5;
	Il2CppObject * f6;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(Type_t_SFs, f1)); }
	inline uint16_t fg1() const { return f1; }
	inline uint16_t* fag1() { return &f1; }
	inline void fs1(uint16_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(Type_t_SFs, f2)); }
	inline t3431720054* fg2() const { return f2; }
	inline t3431720054** fag2() { return &f2; }
	inline void fs2(t3431720054* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(Type_t_SFs, f3)); }
	inline t1585748256 * fg3() const { return f3; }
	inline t1585748256 ** fag3() { return &f3; }
	inline void fs3(t1585748256 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(Type_t_SFs, f4)); }
	inline t1585748256 * fg4() const { return f4; }
	inline t1585748256 ** fag4() { return &f4; }
	inline void fs4(t1585748256 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(Type_t_SFs, f5)); }
	inline t1585748256 * fg5() const { return f5; }
	inline t1585748256 ** fag5() { return &f5; }
	inline void fs5(t1585748256 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(Type_t_SFs, f6)); }
	inline Il2CppObject * fg6() const { return f6; }
	inline Il2CppObject ** fag6() { return &f6; }
	inline void fs6(Il2CppObject * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
