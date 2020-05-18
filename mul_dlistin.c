#include "monty.h"
/**
 *mul_dlistint - get the value of the node
 *@stack: the chars of the lists
 *@n: the value is at number
 *Return: the mul of the value in the head_t
 */
stack_t *mul_dlistint(stack_t **stack, const int n, unsigned int line_number)
{
	int len;
	stack_t *mul = NULL, *h = *stack;

	len = dlistint_len(h);
	if (len < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (h != NULL)
	{
		mul = h;
		mul = h->next;
		mul->n = mul->n * h->n;
		delete_dnodeint_at_index(stack, n, line_number);
	}
	return (mul);
}