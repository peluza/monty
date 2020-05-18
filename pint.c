#include "monty.h"
/**
 *pint - delete in the elemnt 0 on the lists
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void pint(stack_t **stack, unsigned int line_number)
{
	print_dlisttop(*stack, line_number);
}