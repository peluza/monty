#include "holberton.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *h = *stack;
	int p;
	int i = 0;
	(void)line_number;

  if (h == NULL)
		return;
	if (data.arguments[1])
	{
		for (i = 0; data.arguments[1][i]; i++)
		{
			if ((data.arguments[1][i] < '0' || data.arguments[1][i] > '9') && data.arguments[1][i] != '-')
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	p = atoi(data.arguments[1]);
	new = (stack_t *)malloc(sizeof(stack_t));
	if (new == NULL)
		return;
	new->n = p;
	new->next = h;
	h = new;
}