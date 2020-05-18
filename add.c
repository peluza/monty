#include "monty.h"
/**
 *add - add to list
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void add(stack_t **stack, unsigned int line_number)
{
	int n = 0;
	
	sum_dlistint(stack, n, line_number);
}