#include "monty.h"

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

	if (argc != 2)
	{
		fprintf(stdout, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stdout, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}
