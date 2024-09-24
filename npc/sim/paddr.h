#ifndef __PADDR_H__
#define __PADDR_H__

#include<stdint.h>
#include"include/common.h"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"

#define PMEM64 1
#ifdef PMEM64
typedef uint64_t paddr_t;
#define FMT_ADDR "%016lx"
#else
typedef uint32_t paddr_t;
#define FMT_ADDR "%08x"
#endif

#define	CONFIG_MSIZE	0x8000000
#define CONFIG_MBASE	0x80000000

#define CONFIG_PC_RESET_OFFSET 0X0
#define PMEM_LEFT	((paddr_t)CONFIG_MBASE)
#define PMEM_RIGTH	((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR	(PMEM_LEFT + CONFIG_PC_RESET_OFFSET)
uint32_t pmem[CONFIG_MSIZE] = {};

static inline bool in_pmem(paddr_t addr) {
	return addr - CONFIG_MBASE < CONFIG_MSIZE; 
}

bool npc_in_pmem(paddr_t addr) {
	return in_pmem(addr);
}
uint32_t *guest_to_host(paddr_t paddr)
{
	return (uint32_t *) (paddr + (paddr_t)pmem - CONFIG_MBASE);
}
word_t host_read(void *addr, int len)
{
	switch(len){
		case 1: return *(uint8_t *)addr;  break;
		case 2: return *(uint16_t *)addr; break;
		case 4: return *(uint32_t *)addr; break;
		case 8: return *(uint64_t *)addr; break;
		default: printf("unknow len in host_read()\n");assert(0);	
	}
}
word_t pmem_read(paddr_t addr, int len)
{
	return host_read(guest_to_host(addr), len);
}
word_t paddr_read(paddr_t addr, int len)
{
	//TODO:check the boundary of the memeory
	return pmem_read(addr, len);
}
void host_write(void* addr, int len, word_t Data)
{
	switch(len){
		case 1: *(uint8_t *) addr = Data; break;
		case 2: *(uint16_t *)addr = Data; break;
		case 4:	*(uint32_t *)addr = Data; break;
		case 8: *(uint64_t *)addr = Data; break;
		default: assert(0);
	}
}
void pmem_write(paddr_t addr, int len, word_t Data)
{
	host_write(guest_to_host(addr), len, Data);
}
void paddr_write(paddr_t addr, int len, word_t Data)
{
	//TODO:check the boundary of the memory
	pmem_write(addr, len, Data);
}

#endif
