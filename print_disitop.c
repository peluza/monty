#include "monty.h"

void print_dlisttop(const stack_t *h, unsigned int line_number)
{
	if (h == 0)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", h->n);
}