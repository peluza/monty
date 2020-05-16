#include "monty.h"

/**
 * free_stack_t - free the memory
 * @stack: the lis for the estruct
 */

void free_stack_t(stack_t *stack)
{
	if (stack == NULL)
		return;
	if ((*stack).next != NULL)
		free_stack_t((*stack).next);
	free(stack);
}