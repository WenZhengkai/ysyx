#include<stdint.h>
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
#define	CONFIG_MSIZE	0x8000000
#define CONFIG_MBASE	0x80000000
uint32_t pmem[CONFIG_MSIZE] = {};
uint32_t *guest_to_host(uint32_t paddr)
{
	return (uint32_t *) (paddr + pmem - CONFIG_MBASE);
}
uint32_t host_read(uint32_t *addr)
{
	return *addr;
}
uint32_t pmem_read(uint32_t addr)
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


