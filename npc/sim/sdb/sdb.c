#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "../include/macro.h"
#include "../dpi/dpi_fun.h"
#include "../paddr.h"
#include "../include/utils.h"
#include "../include/difftest.h"

extern Vtop* top;
extern VerilatedVcdC* tfp;
extern void cpu_exec(uint64_t n);

extern NPCState npc_state;
/* We use the 'readline' library to proviede more flexibility to read from strdin. */
static char* rl_gets() {
	static char *line_read = NULL;
	
	if(line_read) {
		free(line_read);
		line_read = NULL;
	}

	line_read = readline("(npc) ");

	if(line_read && *line_read) {
		add_history(line_read);
	}

	return line_read;
}

static int cmd_q (char *args) {
	return -1;
}
static int cmd_si (char *args);
static int cmd_c (char *args);
static int cmd_r (char *args);
static int cmd_x (char *args);

static int cmd_si (char *args){
	char *arg = strtok(args, " ");
	uint64_t n ;
	arg == NULL? n = 1:sscanf(arg, "%ld", &n);
	cpu_exec(n);
	return 0;
}
static int cmd_c (char *args) {
	cpu_exec(-1);
	return 0;
}

static int cmd_r (char *args) {
	dump_gpr();
	return 0;
}

static int cmd_x(char *args){
	char *arg = strtok(args, " ");
	int n = 0;
	word_t ret;
	paddr_t addr = 0;
	sscanf(arg, "%d", &n);

	sscanf(strtok(NULL, " "), FMT_ADDR , &addr);

	printf("[***** scan the memory *****]\n");
	
	paddr_t temp_addr = addr;
	for(int i = 0;i < n; i++){
		ret = pmem_read(temp_addr);
		printf("0x" FMT_ADDR ": " FMT_WORD "\n", temp_addr , ret);
		temp_addr += 4;
	}
	printf("[***** scan finish *********]\n");
	return 0;
}
static struct {
	const char *name;
	const char *description;
	int (*handler) (char *);
} cmd_table [] = {
	{"q", "Exit NPC simulation", cmd_q},
	{"c", "continue the execution of the program", cmd_c},
	{"si", "Exectue the program ", cmd_si},
	{"r", "print the registers ", cmd_r},
	{"x", "scan the memory ", cmd_x},
	/* TODO: Add more commands */
};

#define NR_CMD ARRLEN(cmd_table)
void sdb_mainloop(){
	// batch_mode
	
	for(char *str; (str = rl_gets()) !=NULL;){
		char *str_end = str + strlen(str);

		/* extract the first token as the command */
		char *cmd = strtok(str, " ");
		if (cmd == NULL) {continue; }

		/* treat the remaining sting as the arguments,
		 * witch may need further parsing
		 */
		char *args = cmd + strlen(cmd) + 1;
		if (args >= str_end){
			args = NULL;
		}
	#ifdef CONFIG_DEVICE
	#endif
		/* test for tokens */
		//printf("cmd: %s\nargs: %s\n", cmd, args);

		int i;
		for (i = 0; i < NR_CMD; i ++) {
			if(strcmp(cmd, cmd_table[i].name) == 0) {
				//printf("before cmd, npc_state: %d\n", npc_state.state);		// check the state of the simulation
				if(cmd_table[i].handler(args) < 0) {
				/* TODO: state transfer*/
					npc_state.state = npc_state.state == NPC_STOP ? NPC_QUIT : npc_state.state;
					return;
				}
				break;
			}
		}
		if (i == NR_CMD) {printf("Unknown command '%s'\n", cmd);}
	}
}
