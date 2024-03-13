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

#include <common.h>
#include "stdio.h"
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
	/* test expression */
/*	FILE *fp = fopen("tools/gen-expr/input","r");
	char buf[65536] = {};
	uint32_t val =0;
	uint32_t res = 0;
	bool success = true;
	while(fgets(buf,65536,fp)){
		char *res_s = strtok(buf," ");
		char *expr_s = strtok(NULL,"\n");
		sscanf(res_s,"%u",&res);
		val = expr(expr_s, &success);
		strcpy(buf,"\0");
		printf("val: %u res: %u expr: %s\n\n", val,res,expr_s);
	}
	fclose(fp);
*/	
  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
