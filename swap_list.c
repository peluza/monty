#include "monty.h"
/**
 *swap_list - swap two elements the list
 *@h: this is variable of the struct
 *@n: number of the line
 * Return: Always EXIT_SUCCES
 */
stack_t *swap_list(stack_t **h, unsigned int line_number)
{
	unsigned int len;
	stack_t *tmp = *h;

	len = dlistint_len(tmp);
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
