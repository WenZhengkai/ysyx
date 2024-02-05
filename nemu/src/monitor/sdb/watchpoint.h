#ifndef WATCHPOINT_H
#define WATCHPOINT_H

typedef struct watchpoint{
	int NO;
	struct watchpoint *next;

	/* TODO: Add more members if necessary */
	char exstr[65536];
	uint32_t exval;
}WP;

#endif
