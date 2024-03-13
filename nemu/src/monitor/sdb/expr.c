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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

word_t paddr_read(paddr_t addr, int len);

/* If you want to add a type, which is just an operator,
 * remeber to add information in enum about priority,
 * and in function check_pri(), 
 * and in function eval()
 * check if it influncts TK_DER
 * */
enum {
  TK_NOTYPE = 256, TK_EQ, TK_NEQ,TK_HEX,TK_REG,TK_AND,TK_DER,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},	// not equal
  {"\\-", '-'},		// substract
  {"\\*", '*'},		// mul
  {"\\/", '/'},		// div
  {"\\(", '('},		// left bracket
  {"\\)", ')'},		// right bracket
  {"0x[0-9a-f]+|0X[0-9A-Z]+", TK_HEX},	// hexadecimal-number
  {"[0-9]+", '1'},	// number
  {"\\$[0-9a-z]+",TK_REG},	// reg name
  {"&&", TK_AND},	// logic and
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

#define TOKENS_STR_LEN 32
typedef struct token {
  int type;
  char str[TOKENS_STR_LEN];
} Token;

int token_num = 0;
#define TOKENS_SIZE 1000
static Token tokens[TOKENS_SIZE] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;

  token_num = 0;
  regmatch_t pmatch;

  nr_token = 0;
  //reset tokens
  for(int i = 0; i< TOKENS_SIZE; i++){
  	tokens[i].type = 0;
//	strcpy(tokens[i].str,"\000");	
	for(int k = 0; k<TOKENS_STR_LEN; k++){
		tokens[i].str[k] = '\0';
	}
  }
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

      //  Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
       //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
	if( rules[i].token_type != TK_NOTYPE){
		tokens[token_num].type = rules[i].token_type;

	        switch (rules[i].token_type) {
		case '1':
		case TK_HEX:
		
			assert(TOKENS_STR_LEN>=substr_len);
			strncpy(tokens[token_num].str, substr_start, substr_len);break;
		case TK_REG:
			assert(TOKENS_STR_LEN>=substr_len);
			strncpy(tokens[token_num].str, substr_start + 1, substr_len - 1);break;



	         default: break;//TODO();
	        }

		token_num++;
	}
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  //test tokens
  //for(int k = 0;k < token_num;k++){
  //        printf("%d\t%s\n",tokens[k].type,tokens[k].str);
  //
  //}

	
  return true;
}


uint32_t eval(int boex, int eoex);

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  else{
    *success = true;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  /* fine the dereference */
	for( int i = 0; i< token_num; i++){
		if(tokens[i].type == '*' &&
			(i == 0 || 
			 (tokens[i-1].type != '1' && tokens[i-1].type != ')' && 
			  tokens[i-1].type != TK_HEX && tokens[i-1].type != TK_REG))){
			tokens[i].type = TK_DER;	
		}	
	
	}

  uint32_t val = 0;
  val = eval(0,token_num - 1);
  printf("value is %u\n", val);
  return val;
}
//PA1
/* Warning: must use this function restictly like make_token(), otherwise
 * may casuse assert()
 */
bool check_parentheses(int boex, int eoex){
	/*To check if there is a pair of parentheses matched*/
	if(tokens[boex].type != '(' || tokens[eoex].type != ')'){
		return false;
	}
	else{
		int pac = 0;	//parenthese counter
		for(int pos =  boex; pos <= eoex; pos++){
			(tokens[pos].type == '(')?pac++ : (tokens[pos].type == ')'?pac--:pac);
			if(pac < 0){
				/*the ')' is too much*/
				assert(0);
			}
			else if(pos > boex && pos < eoex && pac == 0){
				/*the first '(' and last ')' are not matched*/	
				return false;
			}
			else if(pos == eoex ){
				if(pac == 0)
					return true;
				else
					assert(0);	// the '(' is too much
			}
			else{};
		
		}
	}
	assert(0);
	return false;
}
/* Warning: this function is similar to check_parentheses(int boex, int eoex),without assert*/
bool check_parentheses_no_assert(int boex, int eoex){
	/*To check if there is a pair of parentheses matched*/
	if(tokens[boex].type != '(' || tokens[eoex].type != ')'){
		return false;
	}
	else{
		int pac = 0;	//parenthese counter
		for(int pos =  boex; pos <= eoex; pos++){
			(tokens[pos].type == '(')?pac++ : (tokens[pos].type == ')'?pac--:pac);
			if(pac < 0){
				/*the ')' is too much*/
				//assert(0);
				return false;
			}
			else if(pos > boex && pos < eoex && pac == 0){
				/*the first '(' and last ')' are not matched*/	
				return false;
			}
			else if(pos == eoex ){
				if(pac == 0)
					return true;
				else
					//assert(0);	// the '(' is too much
					return false;
			}
			else{};
		
		}
	}
	assert(0);
	return false;
}
//PA1
	/*priority of operators*/
enum{
	PRI_MIN = 0,PRI_AND,PRI_EQ ,PRI_PLUS , PRI_MUL , PRI_DER,PRI_MAX
};
//PA1
int check_pri(int type){
	switch(type){
		case '+' : return PRI_PLUS; break;
		case '-' : return PRI_PLUS; break;
		case  '*' :return PRI_MUL; break;
		case '/':  return PRI_MUL; break;
		case TK_EQ: 
		case TK_NEQ:
			   return PRI_EQ; break;
		case TK_AND: return PRI_AND; break;
		case TK_DER: return PRI_DER; break;
		default: assert(0);
	}
}

//PA1
bool is_operator(int type){
	if(type == '+' 
		|| type == '-'
		|| type == '*'
		|| type == '/'
		|| type == TK_EQ
		|| type == TK_NEQ
		|| type == TK_AND
		|| type == TK_DER){
		return true;	
	}
	else{
		return false;
	}
}
//PA1
int check_main_operator(int boex, int eoex){
	/*Find the position of main operator*/
	int op = 0;
	int pos_temp =0;
	int minp = PRI_MAX;
	for(int pos = boex; pos <= eoex; pos++){
		if(tokens[pos].type == '('){
			pos_temp= pos++;
			while(check_parentheses_no_assert(pos_temp, pos) ==false){
				pos++;
			}
			continue;
		}	
		else if(is_operator(tokens[pos].type) == false){
			continue;	
		}
		else if(minp < check_pri(tokens[pos].type)){
			continue;	
		}
		else{
			minp = check_pri(tokens[pos].type);
			op = pos;
		}
	}

	return op;

}

//PA1
//calculate the expression's valuse
uint32_t eval(int boex, int eoex){	// begin of expression, end of expression
	if(boex > eoex){
		// Bad expression
		assert(0);
	
	}
	else if(boex == eoex){
		//Single token, which should be a number
		//Return the value of the number
		uint32_t val = 0;
		switch(tokens[boex].type){
			case '1':
				sscanf(tokens[boex].str, "%u",&val);break;
			case TK_HEX:
				sscanf(tokens[boex].str, "%x",&val);break;
			case TK_REG:
				bool success = false;
				val = isa_reg_str2val(tokens[boex].str, &success);
				assert(success == true);
				break;
			default: assert(0);
		
		}
		return val;
		
	}
	else if (check_parentheses(boex, eoex) == true){
		/*The expression is surrounded by a pair of matched parentheses;
		 * Just throw away the parentheses
		 * */	
		return eval(boex + 1, eoex -1);
	}
	else{
		int op = check_main_operator(boex, eoex);	//main operator's position
		uint32_t val1 = 0;
		uint32_t val2 = 0;
		if(tokens[op].type == TK_DER){
			/* add conditon if have new unary operator*/
			val2 = eval(op + 1, eoex);
		}
		else{
			val1 = eval(boex, op -1);
			val2 = eval(op + 1, eoex);
		}
		
		int op_type = tokens[op].type;
		switch(op_type){
			case '+': return val1 + val2;
			case '-': return val1 - val2;
			case '*': return val1 * val2;
			case '/': return val1 / val2;
			case TK_EQ: return val1 == val2;
			case TK_NEQ: return val1 != val2;
			case TK_AND: return val1 && val2;
			case TK_DER: 
				/* read from guest computer memory */
				     return paddr_read(val2, 4);
			default: assert(0);
		}
	
	}
	

	return 0;
}
