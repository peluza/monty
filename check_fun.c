#include "holberton.h"

void (*check_fun(unsigned int lineNumber))(stack_t **, unsigned int)
{
    int i; 

	instruction_t fun[] = {
		{"push", push},
		{"pall", pall},
	};
    if (data.arguments[0])
    {
        for (i = 0; fun[i].opcode; i++)
        {
            if (strcmp(fun[i].opcode, data.arguments[0]) == 0)
                return (fun[i].f);
        }
        dprintf(STDERR_FILENO,"L %u: unknown instruction <opcode>\n", lineNumber);
        exit (EXIT_FAILURE);
    }
    return;
}