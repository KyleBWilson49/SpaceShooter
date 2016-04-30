#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4287691406;
struct Type_t;

#include "Type_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3949082343  : public Type_t
{
public:
	t4287691406 * f7;
	Type_t * f8;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3949082343, f7)); }
	inline t4287691406 * fg7() const { return f7; }
	inline t4287691406 ** fag7() { return &f7; }
	inline void fs7(t4287691406 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3949082343, f8)); }
	inline Type_t * fg8() const { return f8; }
	inline Type_t ** fag8() { return &f8; }
	inline void fs8(Type_t * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
