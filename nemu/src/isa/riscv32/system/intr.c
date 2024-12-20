/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */

  cpu.mcause = NO;
  cpu.mepc = epc;
#ifdef CONFIG_ETRACE
  printf("[ETRACE]:raise_instr, mcause = "FMT_WORD" mepc = "FMT_WORD" mtvec = "FMT_WORD"\n",cpu.mcause,cpu.mepc,cpu.mtvec);
#endif
  return cpu.mtvec;
}

word_t isa_end_intr() {
#ifdef CONFIG_ETRACE
  printf("[ETRACE]:mret, mepc="FMT_WORD"\n",cpu.mepc);
#endif
  return cpu.mepc + 4;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
