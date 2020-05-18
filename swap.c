#include "monty.h"
/**
 *swap - swap the elemnts of the list
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int n = 0;
	
	swap_list(stack, n, line_number);
}