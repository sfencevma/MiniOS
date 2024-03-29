#ifndef _MIPS__TYPES_H_
#define _MIPS__TYPES_H_

#include <mips/include/_limits.h>

typedef char                        __int8_t;
typedef unsigned char               __uint8_t;
typedef short                       __int16_t;
typedef unsigned short              __uint16_t;
typedef int                         __int32_t;
typedef unsigned int                __uint32_t;

#ifdef __64__
typedef long                        __int64_t;
typedef unsigned long               __uint64_t;
#endif

typedef unsigned long               __clock_t;
typedef __int32_t                   __critical_t;
typedef double                      __double_t;
typedef float                       __float_t;

#if   defined __64__
typedef __int64_t                   __intmax_t;
typedef __int64_t                   __ptrdiff_t;
typedef __int64_t                   __register_t;
typedef __int64_t                   __segsz_t;
typedef __uint64_t                  __size_t;
typedef __int64_t                   __time_t;
typedef __int64_t                   __utime_t;
typedef __uint64_t                  __uintfptr_t;
typedef __uint64_t                  __uintptr_t;
#elif defined __32__
typedef __int32_t                   __intmax_t;
typedef __int32_t                   __ptrdiff_t;
typedef __int32_t                   __register_t;
typedef __int32_t                   __segsz_t;
typedef __uint32_t                  __size_t;
typedef __int32_t                   __time_t;
typedef __int32_t                   __utime_t;
typedef __uint32_t                  __uintfptr_t;
typedef __uint32_t                  __uintptr_t;
#elif defined __16__
typedef __int16_t                   __intmax_t;
typedef __int16_t                   __ptrdiff_t;
typedef __int16_t                   __register_t;
typedef __int16_t                   __segsz_t;
typedef __uint16_t                  __size_t;
typedef __int16_t                   __time_t;
typedef __int16_t                   __utime_t;
typedef __uint16_t                  __uintfptr_t;
typedef __uint16_t                  __uintptr_t;
#endif


#endif