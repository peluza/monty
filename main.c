#include "holberton.h"

/**
 * main - main
 *@argc: the number of the chars
 *@argv: the char
 * Return: Always EXIT_SUCCES
 */
int number;

int main(int argc, char *argv[])
{
	stack_t **heade;
	FILE *stream;
	char *line = NULL, *str1 = NULL, *str2 = NULL;
	size_t len = 0;
	ssize_t nread;
	int x;
	int lineNumber = 1;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while (nread = getline(&line, &len, stream) != EOF)
	{
		printf("line: %s", line);
		str1 = strtok(line, " \n\t");
		str2 = strtok(NULL, " \n\t");
		printf("date:%s - number:%s\n", str1, str2);
		if (isdigit(str2) == 0)
		{
			dprintf(stderr, "L %d : usage: push integer", lineNumber);
			exit(EXIT_FAILURE);
		}
		else
		{
			number = atoi(str2);
			printf("number: %d", number);
		}
		if (str1 != 0)
		{
			printf("date: %s", str1);
			check_fun(lineNumber, str1, heade);
		}
		lineNumber++;
	}
	free_line(&line);
	free_stack_t(heade);
	fclose(stream);
	return (EXIT_SUCCESS);
}
