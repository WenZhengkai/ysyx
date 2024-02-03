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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"#include <stdint.h>\n"
"#pragma GCC diagnostic push\n"
"#pragma GCC diagnostic ignored \"-fwrapv\"\n"
"int main() { "
"  uint32_t result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}\n"
"#pragma GCC diagnostic pop\n";
//PA1
void gen(char* c){
	strcat(buf,c);
}
//PA1
void gen_num(){
	uint32_t num = rand() % 4294967295+ 1;	
	char temp[11] = {};
	sprintf(temp,"%u",num);
	strcat(buf,temp);
}
//PA1
void gen_rand_op(){
	uint32_t num = rand() % 4 + 1;
	char op[2];
	switch(num){
		case 1:strcpy( op ,"+");break;
		case 2:strcpy( op ,"-");break;
		case 3:strcpy( op ,"*");break;
		case 4:strcpy( op ,"/");break;	
		default: assert(0);
	}
	strcat(buf,op);
}
uint32_t choose(uint32_t n){
	uint32_t num = rand() % n + 0;
	return num;
}
static void gen_rand_expr() {
  //buf[0] = '\0';
  switch ((strlen(buf)>8000)?0:choose(4)){
  	case 0: gen_num(); break;
	case 1: gen("("); gen_rand_expr(); gen(")"); break;
	case 2: gen(" ");gen_rand_expr();break;
	default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    strcpy(buf,"\0");
    gen_rand_expr();
    
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
