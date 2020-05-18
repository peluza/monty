#include "monty.h"

/**
 * _isalpha - description
 *@c: varibale
 * Return: Always 0 (Success)
 */

int _isalpha(char *c)
{
	int i;

	for (i = 0; c != NULL; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			return (1);
		if (c[i] >= 65  && c[i] <= 90)
			return (1);
		else
			return (0);
	}
	return (0);
}
