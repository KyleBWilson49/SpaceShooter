#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4012695102;
struct Il2CppObject;
struct t2186276747;

#include "Il2CppObject.h"
#include "t3525329789.h"
#include "t1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2982032675  : public Il2CppObject
{
public:
	int32_t f0;
	t4012695102 * f1;
	t3525329789  f2;
	t1891715979  f3;
	int32_t f4;
	Il2CppObject * f5;
	t2186276747 * f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2982032675, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2982032675, f1)); }
	inline t4012695102 * fg1() const { return f1; }
	inline t4012695102 ** fag1() { return &f1; }
	inline void fs1(t4012695102 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2982032675, f2)); }
	inline t3525329789  fg2() const { return f2; }
	inline t3525329789 * fag2() { return &f2; }
	inline void fs2(t3525329789  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2982032675, f3)); }
	inline t1891715979  fg3() const { return f3; }
	inline t1891715979 * fag3() { return &f3; }
	inline void fs3(t1891715979  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2982032675, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2982032675, f5)); }
	inline Il2CppObject * fg5() const { return f5; }
	inline Il2CppObject ** fag5() { return &f5; }
	inline void fs5(Il2CppObject * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2982032675, f6)); }
	inline t2186276747 * fg6() const { return f6; }
	inline t2186276747 ** fag6() { return &f6; }
	inline void fs6(t2186276747 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
