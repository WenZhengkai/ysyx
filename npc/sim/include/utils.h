#ifndef __UTILS_H__
#define __UTILS_H__

#include "common.h"

// -----------state ------------------
enum {NPC_RUNNING, NPC_END, NPC_QUIT};

typedef struct {
	int state;
	word_t halt_pc;
	uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;




#endif
