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

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_R, TYPE_B,
  TYPE_CI,	//Compress
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immCI() do{ *imm = (SEXT(BITS(i, 12, 12),1) << 5) | BITS(i, 6, 2);}while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31),1)<< 20) | (BITS(i,19,12)<< 12) | (BITS(i,20,20)<< 11) | (BITS(i,30,21)<< 1);} while(0)
#define immB() do{ *imm = (SEXT(BITS(i,31,31),1)<< 12)| (BITS(i,7,7)<<11)|(BITS(i,30,25)<<5)|(BITS(i,11,8)<<1);} while(0)

//char callflag = 0;
int ftrace_rs1 = 0;
int ftrace_rd = 0;
static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  ftrace_rs1 = rs1;
  *rd     = BITS(i, 11, 7);
  ftrace_rd = *rd;
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:		   immJ(); break;
    case TYPE_R: src1R(); src2R();	   break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_CI: 		   immCI(); break;
  }
}
int ftrace_count = 0;
void ftrace_call(word_t pc, word_t dnpc){
#ifdef CONFIG_FTRACE
	ftrace_count++;
	printf(FMT_WORD"(count=%d):\t",pc,ftrace_count);
	printf("call [func name]@"FMT_WORD"\n",dnpc);
//	if(!(dnpc==0x80000010||dnpc==0x8000005c||
//				dnpc==0x800000a4||
//				dnpc==0x80000108||
//				dnpc==0x800001b0||
//				dnpc==0x800001c8||
//				dnpc==0x80000248||
//				dnpc==0x80000254))
//		printf("error\n");
#endif
	return;
}
void ftrace_ret(word_t pc, word_t dnpc){
#ifdef CONFIG_FTRACE
	ftrace_count--;
	printf(FMT_WORD,pc);
	printf("(count=%d):\t",ftrace_count);
	printf("return [func name]@"FMT_WORD"\n",dnpc);
#endif
	return;
}
void ftrace_check(word_t pc, word_t dnpc){
#ifdef CONFIG_FTRACE
	(ftrace_rd==0 && ftrace_rs1 == 1)?ftrace_ret(pc,dnpc):ftrace_call(pc,dnpc);
#endif
	return;
}
//>>>CSR>>>//
static inline word_t* csr_decode(word_t csr) {
  switch (csr) {
    case 0x300: return &cpu.mstatus;
    case 0x305: return &cpu.mtvec;
    case 0x342: return &cpu.mcause;
    case 0x341: return &cpu.mepc;
    default: panic("unimplemented CSR 0x%x", csr);
  }
  return NULL;
}

static void csrrw(word_t *dest, const word_t *src, word_t csrid){
    word_t *csr = csr_decode(csrid);
    word_t tmp = (src != NULL ? *src : 0);
    if (dest != NULL) { *dest = *csr; }
    if (src != NULL) { *csr = tmp; }  
}

static void csrrs(word_t *dest, const word_t *src, word_t csrid){
    word_t *csr = csr_decode(csrid);
    word_t tmp = (src != NULL ? *src : 0);
    if (dest != NULL) { *dest = *csr | *src; }
    if (src != NULL) { *csr = tmp; }  
}
//<<<CSR<<<//
static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;
  word_t TemR= 0;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) =  imm);

  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw	   , I, TemR = Mr(src1 + imm, 4),R(rd) = MUXDEF(CONFIG_ISA64,(SEXT(BITS(TemR,31,31),1)<<32 | BITS(TemR,31,0)),TemR));
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu	   , I, R(rd) = (word_t)Mr(src1 + imm, 4));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));	// sign extended imm
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw	   , S, Mw(src1 + imm, 4, src2));	// sign extended imm

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + (sword_t)imm);
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add	   , R, R(rd) = src1 + src2);	//don't konw how to ignore overflow
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub	   , R, R(rd) = src1 - src2);
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = (word_t)src1 < (word_t)imm?1:0);	//campare unsigned number

  INSTPAT("010 ? ????? ????? 01", li	   , CI, R(rd) = imm);
  INSTPAT("? ?????? ????? ????? 000 ???? ? 11000 11", beq  , B, s->dnpc = (src1 == src2)? s->pc + (sword_t)imm : s->dnpc);
  INSTPAT("? ?????? ????? ????? 001 ???? ? 11000 11", bne  , B, s->dnpc = (src1 != src2)? s->pc + (sword_t)imm : s->dnpc);


  INSTPAT("? ?????????? ? ???????? ????? 1101111", jal	   , J, s->dnpc = s->pc + (sword_t)imm, R(rd) = s->pc + 4,ftrace_call(s->pc,s->dnpc));
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, s->dnpc = src1 + (sword_t)imm, R(rd) = s->pc + 4,ftrace_check(s->pc,s->dnpc));


  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1 & (sword_t)imm);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem	   , R, R(rd) = (sword_t)src1 % (sword_t)src2);	
	/* have error in recursion.c*/
#ifdef CONFIG_ISA64
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(rd) = ((sword_t)src1)>>((word_t)(imm - 1024)));	
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = src1<<((word_t)imm));
  INSTPAT("000000? ????? ????? 101 ????? 00100 11",  srli  , I, R(rd) = ((word_t)src1)>>((word_t)imm));

  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll	   , R, R(rd) = ((word_t)src1)<<(src2 & 0x0000003f));	
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra	   , R, R(rd) = ((sword_t)src1)>>(src2 & 0x0000003f));
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl	   , R, R(rd) = ((word_t)src1)>>(src2 & 0x0000003f));	


#else
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I, R(rd) = ((sword_t)src1)>>((word_t)(imm - 1024)));	
  INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = src1<<((word_t)imm));
  INSTPAT("0000000 ????? ????? 101 ????? 00100 11",  srli  , I, R(rd) = ((word_t)src1)>>((word_t)imm));

  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll	   , R, R(rd) = ((word_t)src1)<<(src2 & 0x0000001f));	
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra	   , R, R(rd) = ((sword_t)src1)>>(src2 & 0x0000001f));
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl	   , R, R(rd) = ((word_t)src1)>>(src2 & 0x0000001f));	

  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R ,R(rd) = (word_t)((((int64_t)(sword_t)src1) * ((int64_t)(sword_t)src2))>>32));
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R ,R(rd) = (word_t)((((uint64_t)src1) * ((uint64_t)src2))>>32));

#endif


	/* have error in recursion.c*/
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu  , R, R(rd) = (word_t)src1 < (word_t)src2?(word_t)1:(word_t)0);
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor   , R, R(rd) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or    , R, R(rd) = src1 | src2);
/* have error in bit.c*/
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh    , S, Mw(src1 + (sword_t)imm, 2, src2));
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and   , R, R(rd) = src1 & src2);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1 ^ (sword_t)imm);
/* have error in bit.c*/
  INSTPAT("? ?????? ????? ????? 101 ???? ? 11000 11", bge  , B, s->dnpc = ((sword_t)src1 >= (sword_t)src2)? s->pc + (sword_t)imm : s->dnpc);

  INSTPAT("? ?????? ????? ????? 111 ???? ? 11000 11", bgeu  , B, s->dnpc = ((word_t)src1 >= (word_t)src2)? s->pc + (sword_t)imm : s->dnpc);

  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(rd) = (word_t)(src1 * src2));

  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(rd) = ((sword_t)src1 / (sword_t)src2));

  INSTPAT("? ?????? ????? ????? 100 ???? ? 11000 11", blt  , B, s->dnpc = ((sword_t)src1 < (sword_t)src2)? s->pc + (sword_t)imm : s->dnpc);
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = ((sword_t)src1 < (sword_t)src2)? 1:0);


  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh	   , I, R(rd) = (word_t)SEXT(BITS(Mr(src1 + imm, 2),15,0),16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu	   , I, R(rd) = (word_t)Mr(src1 + imm, 2));

  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(rd) = ((word_t)src1 % (word_t)src2));
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu    , R, R(rd) = ((word_t)src1 / (word_t)src2));

  INSTPAT("? ?????? ????? ????? 110 ???? ? 11000 11", bltu  , B, s->dnpc = ((word_t)src1 < (word_t)src2)? s->pc + (sword_t)imm : s->dnpc);

  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd	   , S, Mw(src1 + imm, 8, src2));	
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, TemR = src1 + src2, R(rd)=SEXT(BITS(TemR,31,0),32));
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, TemR= src1 + (sword_t)imm,R(rd)=SEXT(BITS(TemR,31,0),32));
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld	   , I, R(rd) = Mr(src1 + imm, 8));
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, TemR = ((word_t)src1)<<(src2 & 0x0000001f),R(rd)=SEXT(BITS(TemR,31 ,0),32));
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11",  srliw  , I, TemR = BITS(src1,31,0), TemR = ((word_t)TemR)>>((word_t)imm),R(rd)=SEXT(BITS(TemR,31,0),32));
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw    , R, TemR = (word_t)(src1 * src2), R(rd) = SEXT(BITS(TemR,31,0),32)); 
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw    , R, TemR = (word_t)((int32_t)BITS(src1,31,0)/ (int32_t)BITS(src2,31,0)), R(rd) = SEXT(BITS(TemR,31,0),32));
   INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw    , R, TemR = (word_t)((uint32_t)BITS(src1,31,0)/ (uint32_t)BITS(src2,31,0)), R(rd) = SEXT(BITS(TemR,31,0),32));
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, TemR = (word_t)((int32_t)BITS(src1,31,0) % (int32_t)BITS(src2,31,0)),R(rd) = SEXT(BITS(TemR,31,0),32));
   INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw   , R, TemR = (word_t)((uint32_t)BITS(src1,31,0) % (uint32_t)BITS(src2,31,0)),R(rd) = SEXT(BITS(TemR,31,0),32));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, TemR  = src1 - src2, R(rd) = SEXT(BITS(TemR,31,0),32));
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw   , I, TemR = src1<<((word_t)imm),R(rd) = SEXT(BITS(TemR,31,0),32));
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw   , I, TemR = (word_t)((int32_t)BITS(src1,31,0))>>((word_t)(imm - 1024)), R(rd) = SEXT(BITS(TemR,31,0),32));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, TemR = (word_t)((int32_t)BITS(src1,31,0))>>(src2 & 0x0000001f), R(rd) = SEXT(BITS(TemR,31,0),32));
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, TemR = (word_t)((uint32_t)BITS(src1,31,0))>>(src2 & 0x0000001f), R(rd) = SEXT(BITS(TemR,31,0),32));
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(rd) = ((sword_t)src1 < (sword_t)imm) ? (word_t)1 : (word_t)0);
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb    , I, R(rd) = SEXT(Mr(src1 + imm, 1),8));
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori   , I, R(rd) = src1 | imm);

  INSTPAT("???????????? ????? 001 ????? 1110011", csrrw, I, csrrw(&R(rd),&src1, imm));
  INSTPAT("???????????? ????? 010 ????? 1110011", csrrs, I, csrrs(&R(rd),&src1, imm));

  INSTPAT("000000000000 00000 000 00000 1110011", ecall, I, s->dnpc = isa_raise_intr(11,s->pc));

  INSTPAT("0011000 00010 00000 000 00000 1110011", mret, R, s->dnpc = isa_end_intr() );

  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));

  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
