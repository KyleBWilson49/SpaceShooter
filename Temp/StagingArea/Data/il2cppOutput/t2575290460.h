#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t3012272455.h"
#include "t3525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2575290460  : public t3012272455
{
public:
	float f2;
	float f3;
	t3525329789  f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2575290460, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2575290460, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2575290460, f4)); }
	inline t3525329789  fg4() const { return f4; }
	inline t3525329789 * fag4() { return &f4; }
	inline void fs4(t3525329789  value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
