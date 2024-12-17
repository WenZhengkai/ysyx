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
    // DPI import at ../vsrc/InstMem.v:15:30
    extern void npc_inst_read(int raddr, int* rdata);
    // DPI import at ../vsrc/InstMem.v:28:30
    extern void npc_nextPC_write(int nextPC);
    // DPI import at ../vsrc/DataMem.v:20:30
    extern void npc_pmem_read(int raddr, int* rdata);
    // DPI import at ../vsrc/DataMem.v:21:30
    extern void npc_pmem_write(int waddr, int wdata, char wmask);
    // DPI import at ../vsrc/ysyx_23060228_RegFile.v:24:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
