#include "monty.h"
/**
 *swap_list - swap two elements the list
 *@h: this is variable of the struct
 *@n: number of the line
 * Return: Always EXIT_SUCCES
 */
stack_t *swap_list(stack_t **h, const int n, unsigned int line_number)
{
	(void)n;
	unsigned int len;
	stack_t *tmp = *h;

	len = dlistint_len(*h);
	if (len < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*h) = (*h)->next;
	tmp->next = (*h)->next;
	tmp->prev = (*h);
	(*h)->next = tmp;
	(*h)->prev = NULL;
	return (*h);
}
