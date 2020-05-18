#include "monty.h"

/**
 *_isdigit - the search carater numeber
 *
 *@c: character is lowercase
 *
 * Return: Always 0 (Success)
 */

int _isdigit(char *c)
{
	int i;

	for (i = 0; c != NULL; i++)
	{
		if (c[i] >= 48 && c[i] <= 57)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
