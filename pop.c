#include "monty.h"
/**
 *pop - delete in the elemnt 0 on the lists
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void pop(stack_t **stack, unsigned int line_number)
{
    delete_dnodeint_at_index(stack, line_number);
}