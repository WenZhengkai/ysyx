#ifndef __PADDR_H__
#define __PADDR_H__

#include<stdint.h>
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
uint32_t *guest_to_host(paddr_t paddr)
{
	return (uint32_t *) (paddr + (paddr_t)pmem - CONFIG_MBASE);
}
uint32_t host_read(uint32_t *addr)
{
	return *addr;
}
uint32_t pmem_read(paddr_t addr)
{
	return host_read(guest_to_host(addr));
}
void host_write(uint32_t * addr, uint32_t Data)
{
	*addr = Data;	

}
void pmem_write(uint32_t addr, uint32_t Data)
{
	host_write(guest_to_host(addr), Data);
}

#endif
