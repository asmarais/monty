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
	int check;

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
			check = find_op(&stack);
			if (check == -1)
			{
				fclose(f);
				_free(stack);
				exit(EXIT_FAILURE);
			}
		}
	}
	fclose(f);
	_free(stack);
	return (1);
}
