#include "monty.h"

/**
 *print_dlistint - prints all the elemts of the dlistsint_s
 *@h: the lists for the estruct
 *Return:  the name of the nodos
 */

int print_dlistint(stack_t **stack)
{
	unsigned int nodes = 0;
	stack_t *h = *stack;

	if (stack == 0)
		return (0);
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}