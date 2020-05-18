#include "monty.h"
/**
 *div - div to list
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void fun_div(stack_t **stack, unsigned int line_number)
{
	int n = 0;
	
	div_dlistint(stack, n, line_number);
}
