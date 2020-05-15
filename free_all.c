#include "monty.h"

void free_all(char **entrada, stack_t *stack)
{
    free_line(entrada);
	free_stack_t(stack);
}