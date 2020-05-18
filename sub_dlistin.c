#include "monty.h"
/**
 *sum_dlistint - get the value of the node
 *@head: the chars of the lists
 *Return: the sub of the value in the head_t
 */
stack_t *sub_dlistint(stack_t **stack, const int n, unsigned int line_number)
{
	unsigned int len;
	stack_t *sub = NULL, *h = *stack;

	len = dlistint_len(h);
	if (len < 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (h != NULL)
	{
		sub = h;
		sub = h->next;
		sub->n = h->n - sub->n;
		delete_dnodeint_at_index(stack, n, line_number);
	}
	return (sub);
}
