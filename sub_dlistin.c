#include "monty.h"
/**
 *sum_dlistint - get the value of the node
 *@head: the chars of the lists
 *Return: the sub of the value in the head_t
 */
stack_t *sub_dlistint(stack_t **stack, const int n)
{
        (void)n;
        int j = 2, len;
        stack_t *sub = NULL, *h = *stack;

        len = dlistint_len(h);
        if (len < j)
        {
                fprintf(stderr, "L%u: can't sub, stack too short\n", number);
                exit(EXIT_FAILURE);
        }

        if (h != NULL)
        {
                sub = h;
                sub = h->next;
                sub->n = sub->n - h->n;
                delete_dnodeint_at_index(stack, 0);
        }
        return (sub);
}