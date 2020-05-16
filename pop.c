#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
    delete_dnodeint_at_index(stack, line_number);
}