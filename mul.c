#include "monty.h"
/**
 *mul - mul to list
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int n = 0;
	
	mul_dlistint(stack, n, line_number);
}
