#include "monty.h"
/**
 *pint - delete in the elemnt 0 on the lists
 *@stack: this is variable of the struct
 *@line_number: number of the line
 * Return: Always EXIT_SUCCES
 */
void pint(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty", line_number);
        exit(EXIT_FAILURE);
    } 
    print_dlisttop(*stack);
}