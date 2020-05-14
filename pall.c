#include "holberton.h"

void pall(stack_t **stack, unsigned int line_number)
{
    int nodes;
    stack_t *h = *stack;
    (void)line_number;

    if (stack == NULL);
        return;
    for (nodes = 0; h != NULL; nodes++)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}