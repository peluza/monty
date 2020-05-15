#include "holberton.h"
/**
 *push - add to list
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	int i = 0;
	(void)line_number;

	if (*stack == NULL)
		return;
	new = (stack_t *)malloc(sizeof(stack_t));
	if (new == NULL)
		return;
	new->n = number;
	new->next = *stack;
	*stack = new;
}
