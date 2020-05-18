#include "monty.h"
/**
 * main - main
 *@argc: the number of the chars
 *@argv: the char
 * Return: Always EXIT_SUCCES
 */
int number;

int main(int argc, char *argv[])
{
	stack_t *heade = NULL;
	FILE *stream;
	char *line = NULL, *str1 = NULL, *str2 = NULL;
	size_t len = 0;
	int lineNumber = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &len, stream) != EOF)
	{
		str1 = strtok(line, " \n\t");
		if (strcmp(str1, "push") == 0)
		{
			str2 = strtok(NULL, " \n\t");
			if (_isalpha(str2) == 0)
				number = atoi(str2);
			else
			{
				fprintf(stderr, "L%d: usage: push integer\n", lineNumber);
				exit(EXIT_FAILURE);
			}
		}
		if (str1)
			check_fun(lineNumber, str1, &heade);
		else
		{
			fprintf(stderr, "L<line_number>: unknown instruction %d\n", lineNumber);
			exit(EXIT_FAILURE);
		}
		lineNumber++;
	}
	free_line(&line);
	free_stack_t(heade);
	fclose(stream);
	return (EXIT_SUCCESS);
}