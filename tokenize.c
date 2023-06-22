#include "monty.h"

/**
 * tokenize - splits line content
 * @str: the number of argument
 * Return: 1 if success and -1 otherwise
 */

int tokenize(char *str)
{
	char *delim = " \r\t\n";

	/*if (!str)*/
	/*	return (-1);*/
	gvars.cmd = strtok(str, delim);
	if (gvars.cmd != NULL)
	{
	        gvars.raw_input= strtok(NULL, delim);
		if (gvars.raw_input)
			gvars.value = atoi(gvars.raw_input);
	}
	return (1);
}
