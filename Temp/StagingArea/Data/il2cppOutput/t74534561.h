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

struct  t74534561  : public t3012272455
{
public:
	t1972007546 * f2;
	float f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t74534561, f2)); }
	inline t1972007546 * fg2() const { return f2; }
	inline t1972007546 ** fag2() { return &f2; }
	inline void fs2(t1972007546 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t74534561, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
