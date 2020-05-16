#include "monty.h"

void print_dlisttop(const stack_t *h)
{
	unsigned int nodes = 0;

	if (h == 0)
		return (0);
		
	printf("%d\n", h->n);
}