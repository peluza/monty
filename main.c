#include "holberton.h"

data_t data;

int main(int argc, char *argv[])
{
	FILE *stream;
	char *line = NULL, *value, *tocken;
	size_t len = 0;
	ssize_t nread;
    int x;
    stack_t *header = NULL;
    int lineNumber = 1;
    
    data.status = 0;
    data.arguments = NULL;
    if (argc != 2) 
    {
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");
	if (stream == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}
	nread = getline(&line, &len, stream);
    while (nread != -1 && data.status == 0)
    {
        tocken = strdup(line);
        value = strtok(tocken, " \n\t");
	    x = 0;
	    while (value != NULL)
	    {
            data.arguments[x] = strdup(value);
		    value = strtok(NULL, " \n\t");
		    x++;
	    }
        if (data.arguments)
            check_fun(lineNumber)(&header, lineNumber);
        free_data_t(data.arguments);
        lineNumber++;
    }
    free(line);
    free_stack_t(header);
    free(tocken);
	fclose(stream);
    if(data.status == EXIT_FAILURE)
        exit(EXIT_FAILURE);
    return (EXIT_SUCCESS);
}