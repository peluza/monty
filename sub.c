#include "monty.h"
/**
 *sub - sub to list
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void sub(stack_t **stack, unsigned int line_number)
{
	sub_dlistint(stack, line_number);
}