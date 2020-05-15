#include "holberton.h"
/**
 *pall - print to list
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void pall(stack_t **stack, unsigned int line_number)
{
	int nodes;
	stack_t *h = *stack;
	(void)line_number;

	if (h == NULL)
		return;
	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}