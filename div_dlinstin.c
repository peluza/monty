#include "monty.h"
/**
 *div_dlistint - get the value of the node
 *@head: the chars of the lists
 *Return: the sub of the value in the head_t
 */
stack_t *div_dlistint(stack_t **stack, const int n, unsigned int line_number)
{
	unsigned int len;
	stack_t *div = NULL, *h = *stack;

	len = dlistint_len(h);
	if (len < 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (h->n != 0)
	{
		div = h;
		div = h->next;
		div->n = h->n / div->n;
		delete_dnodeint_at_index(stack, n, line_number);
	}
    else
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
    }
	return (div);
}