#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1972007546;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4051853642  : public t3012272455
{
public:
	float f2;
	t1972007546 * f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4051853642, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4051853642, f3)); }
	inline t1972007546 * fg3() const { return f3; }
	inline t1972007546 ** fag3() { return &f3; }
	inline void fs3(t1972007546 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
