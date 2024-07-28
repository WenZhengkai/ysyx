#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "../include/macro.h"

/* We use the 'readline' library to proviede more flexibility to read from strdin. */
struct sdb_stru{
	bool end;
};
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

static struct {
	const char *name;
	const char *description;
	int (*handler) (char *);
} cmd_table [] = {
	{"q", "Exit NPC simulation", cmd_q},

	/* TODO: Add more commands */
};

#define NR_CMD ARRLEN(cmd_table)

void sdb_mainloop(sdb_stru *sdb_info){
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
		printf("cmd: %s\nargs: %s\n", cmd, args);

		int i;
		for (i = 0; i < NR_CMD; i ++) {
			if(strcmp(cmd, cmd_table[i].name) == 0) {
				printf("cmd_table:%s\n",cmd);
				if(cmd_table[i].handler(args) < 0) {
				/* TODO: state transfer*/
					sdb_info->end = true;
					return;
				}
				break;
			}
		}
		printf("NR_CMD:%d\n",NR_CMD);
		if (i == NR_CMD) {printf("Unknown command '%s'\n", cmd);}
	}
}
