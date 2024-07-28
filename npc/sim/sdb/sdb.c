#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

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

void sdb_mainloop(){
	// batch_mode
	
	for(char *str; (str = rl_gets()) !=NULL;){
	
	}


}
