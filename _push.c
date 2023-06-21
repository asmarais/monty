#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: stack
 * @line_number: int
 * Return: nothing
*/

void _push(stack_t **stack, int line_number)
{
	stack_t *new;
	int n, i = 0;
	char *param = gvars.raw_input

	if (param)
	{
		if (param[0] == '-')
			i++;
		while (param[i] != '\0')
		{
			if (param[i] < 48 || param[i] > 57)
			{
				printf("L<%d>: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
			i++;
		}
	}
	else
	{
		printf("L<%d>: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		exit(EXIT_FAILURE);

	n = atoi(param);
	new->n = n;
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}_push.c
