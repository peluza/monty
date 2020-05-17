#include "monty.h"
/**
 *swap_list - swap two elements the list
 *@h: this is variable of the struct
 *@n: number of the line
 * Return: Always EXIT_SUCCES
 */
stack_t *swap_list(stack_t **h, const int n)
{
	(void)n;
	int j = 2, len;
	stack_t *tmp = *h;

	len = dlistint_len(*h);
	if (len < j)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", number);
		exit(EXIT_FAILURE);
	}
	(*h) = (*h)->next;
	tmp->next = (*h)->next;
	tmp->prev = (*h);
	(*h)->next = tmp;
	(*h)->prev = NULL;
	return (*h);
}
