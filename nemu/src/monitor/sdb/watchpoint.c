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

#include "sdb.h"
#include "watchpoint.h"
#define NR_WP 32

//typedef struct watchpoint {
//  int NO;
//  struct watchpoint *next;
//
//  /* TODO: Add more members if necessary */
//  char *exstr;
//  uint32_t exval;
//
//} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){
	WP *wp;
	/* release from free_*/
	if(free_ == NULL){
		assert(0);
	}
	wp = free_;
	free_ = free_->next;
	/* add to head*/
	wp->next = head;
	head = wp;
	return wp;
}

void free_wp(WP *wp){
	/* release from head*/
	if(head == NULL){
		printf("Warning: There are no more watchpoints\n");
		return;
	}
	else if(wp == NULL){
		printf("Warning: \"NULL\" cannot be used in free_wp\n");
		return;
	}
	else if(wp == head){
		head = head->next;
	}
	else{
		WP *pre = head;
		while(pre->next != wp){
			assert(pre != NULL);
			if(pre == NULL){
				printf("Warning: no such watchpoint with pointer of wp\n");
				return;
			}
			pre = pre->next;
		}
		pre->next = pre->next->next;
		pre = NULL;
	}
	
	/* add to free_*/ 
	wp->next = free_;
	free_ = wp;
	return;
}
/* scan the watchpoint */
bool scan_wp(){
	WP *tmp = head;
	bool success = false;
	uint32_t val = 0;
	bool changed = false;
	while(tmp != NULL){
		val = expr(tmp->exstr,&success);
		assert(success == true);
		if(val != tmp->exval){
			//record the changed watchpoint
			changed = true;	
			printf("NO.%d changed: %u -> %u\n", tmp->NO, tmp->exval, val);	
			//change the value of watchpoint
			tmp->exval = val;
		}
		//next wathpoint
		tmp = tmp->next;
	}
	return changed;
}

void wp_display( WP* tmp){
	if(tmp == NULL){
		printf("Num\tType\t\tWhat\n");	
		return;
	}
	else if( tmp->next== NULL){
		printf("Num\tType\t\tWhat\n");
		printf("%d\thw watchpoint\t%s\n",tmp->NO,tmp->exstr);
		return;
	}
	else{
		wp_display(tmp->next);
		printf("%d\thw watchpoint\t%s\n",tmp->NO,tmp->exstr);
		return;
	}

//	printf("Num\tType\t\tWhat\n");
//	WP* tmp = head;
//	while(tmp != NULL){
//		printf("%d\thw watchpoint\t%s\n",tmp->NO,tmp->exstr);
//		tmp = tmp->next;
//	}
//	return;
}

WP* wp_head(){
	return head;
}

WP* num2wp(int n){
	WP *tmp = head;
	while(tmp != NULL){
		if( tmp->NO == n ){
			return tmp;
		}
		else{
			tmp = tmp->next;
		}
	}
	printf("Warning: no watchpoint of NO.%d\n",n);
	return NULL;
}
