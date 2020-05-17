#include "monty.h"
/**
 *sum_dlistint - get the value of the node
 *@head: the chars of the lists
 *Return: the mul of the value in the head_t
 */
stack_t *mul_dlistint(stack_t **stack, const int n)
{
        (void)n;
        int j = 2, len;
        stack_t *mul = NULL, *h = *stack;

        len = dlistint_len(h);
        if (len < j)
        {
                fprintf(stderr, "L%u: can't mul, stack too short\n", number);
                exit(EXIT_FAILURE);
        }

        if (h != NULL)
        {
                mul = h;
                mul = h->next;
                mul->n = mul->n * h->n;
                delete_dnodeint_at_index(stack, 0);
        }
        return (mul);
}