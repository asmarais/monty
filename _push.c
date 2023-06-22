#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: stack
 * @line_number: int
 * Return: nothing
*/

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	int n;
	char *param = gvars.raw_input;
	printf("%s",param);
	printf("%d", check_val(param));
	if (param == NULL || check_val(param) == -1)
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
}
