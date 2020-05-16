#include "monty.h"

/**
*_isdigit - the search carater numeber
*
*@c: character is lowercase
*
* Return: Always 0 (Success)
*/

int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		return (0);
	}
	if (c == '-')
	{
		return (1);
	}
	else
	{
		return (2);
	}
}
