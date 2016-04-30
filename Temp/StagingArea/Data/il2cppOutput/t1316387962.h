#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2537380935;
struct t4012695102;
struct t284553113;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1316387962  : public t3012272455
{
public:
	float f2;
	float f3;
	t2537380935 * f4;
	t4012695102 * f5;
	t284553113 * f6;
	float f7;
	float f8;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1316387962, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1316387962, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1316387962, f4)); }
	inline t2537380935 * fg4() const { return f4; }
	inline t2537380935 ** fag4() { return &f4; }
	inline void fs4(t2537380935 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1316387962, f5)); }
	inline t4012695102 * fg5() const { return f5; }
	inline t4012695102 ** fag5() { return &f5; }
	inline void fs5(t4012695102 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1316387962, f6)); }
	inline t284553113 * fg6() const { return f6; }
	inline t284553113 ** fag6() { return &f6; }
	inline void fs6(t284553113 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1316387962, f7)); }
	inline float fg7() const { return f7; }
	inline float* fag7() { return &f7; }
	inline void fs7(float value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1316387962, f8)); }
	inline float fg8() const { return f8; }
	inline float* fag8() { return &f8; }
	inline void fs8(float value)
	{
		f8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
