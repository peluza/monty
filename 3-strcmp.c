#include "monty.h"

/**
 * _strcmp - the funtion is compare the caracter
 *
 * @s1: punter one
 * @s2: punter two
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
