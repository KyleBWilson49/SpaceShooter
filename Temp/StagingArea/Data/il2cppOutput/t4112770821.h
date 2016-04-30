#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3875263730;

#include "t3875263730.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4112770821  : public t3875263730
{
public:
	t3875263730 * f13;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t4112770821, f13)); }
	inline t3875263730 * fg13() const { return f13; }
	inline t3875263730 ** fag13() { return &f13; }
	inline void fs13(t3875263730 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
