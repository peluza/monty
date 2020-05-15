#include "monty.h"
/**
 *free_all - free all
 *@entrada: characters is punters at punters
 *@stack: characters is the struct
 * Return: Always 0 (Success)
 */
void free_all(char **entrada, stack_t *stack)
{
	free_line(entrada);
	free_stack_t(stack);
}
