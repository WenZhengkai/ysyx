#ifndef __COMMON_H__
#define __COMMON_H__
#include <stdint.h>


#ifdef CONFIG_ISA64
typedef uint64_t word_t;
typedef int64_t sword_t;
#define FMT_WORD "0x%016lx"
#else
typedef uint32_t word_t;
typedef int32_t sword_t;
#define FMT_WORD "0x%08x"
#endif

typedef word_t vaddr_t;


#endif
