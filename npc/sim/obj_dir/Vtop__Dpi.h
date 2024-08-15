// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at ../vsrc/ysyx_23060228_LSU.v:11:30
    extern void npc_pmem_read(long long raddr, long long* rdata);
    // DPI import at ../vsrc/ysyx_23060228_LSU.v:12:30
    extern void npc_pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at ../vsrc/ysyx_23060228_RegFile.v:14:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
