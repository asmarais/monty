#include "monty.h"
#include <stdio.h>


vars gvars;
/**
 * main - runs the monty intrepreter
 * @argc: the number of argument
 * @argv: a pointer to the array of arguments
 * Return: 1 if success and -1 otherwise
 */

int main(int argc, char **argv)
{
	FILE *f;
	stack_t *stack = NULL;
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t read;
	int token;
	

	gvars.line_number = 0;
	gvars.cmd = NULL;
	gvars.raw_input = NULL;

	if (argc != 2)
	{
		fprintf(stdout, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	if (f == NULL)
	{
		fprintf(stdout, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&lineptr, &n, f)) != -1)
	{
		gvars.line_number++;
		token = tokenize(lineptr);
		if (token != -1)
		{
			find_op(&stack);
			if (gvars.ret_val == -1)
			{
				free(lineptr);
				_free(stack);
				fclose(f);
				exit(EXIT_FAILURE);
			}
		}
	}
	free(lineptr);
	_free(stack);
	fclose(f);
	
	return (gvars.ret_val);
}
