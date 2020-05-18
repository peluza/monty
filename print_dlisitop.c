#include "monty.h"
/**
 *print_dlisttop - prints all the elemts of the dlistsint_s
 *@h: the lists for the estruct
 *@line_number: the number of the line
 *Return:  the name of the nodos
 */
void print_dlisttop(const stack_t *h, unsigned int line_number)
{
	if (h == 0)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", h->n);
}
