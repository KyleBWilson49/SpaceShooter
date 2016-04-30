#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4287691406;
struct t765486855;
struct String_t;
struct Type_t;

#include "Type_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3267237648  : public Type_t
{
public:
	t4287691406 * f7;
	t765486855 * f8;
	String_t* f9;
	Type_t * f10;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3267237648, f7)); }
	inline t4287691406 * fg7() const { return f7; }
	inline t4287691406 ** fag7() { return &f7; }
	inline void fs7(t4287691406 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3267237648, f8)); }
	inline t765486855 * fg8() const { return f8; }
	inline t765486855 ** fag8() { return &f8; }
	inline void fs8(t765486855 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t3267237648, f9)); }
	inline String_t* fg9() const { return f9; }
	inline String_t** fag9() { return &f9; }
	inline void fs9(String_t* value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3267237648, f10)); }
	inline Type_t * fg10() const { return f10; }
	inline Type_t ** fag10() { return &f10; }
	inline void fs10(Type_t * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
