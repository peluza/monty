#include "holberton.h"

/**
 * free_stack_t - free the memory
 * @head: the lis for the estruct
 */

void free_data_t(char **arguments)
{
    int i = 0;

	if (arguments == NULL)
		return;
	if  (arguments[i]!= NULL)
    {
        free(arguments[i]);
        arguments[i++];
        free_data_t(arguments);
    }	
	free(arguments);
}