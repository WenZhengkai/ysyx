#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__
#include "../difftest/dut.c"
#include "utils.h"

//enum {DIFFTEST_TO_DUT, DIFFTEST_TO_REF};
#ifdef CONFIG_DIFFTEST
void difftest_step();

#else
static inline void difftest_step() {}

#endif
void init_difftest(long img_size);

#endif
