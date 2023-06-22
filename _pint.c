#include "monty.h"

/**
 * _pint - prints the value at the top of the stack, followed by a new line
 * @stack: stack
 * @line_number: int
 * Return: nothing
*/

void _pint(stack_t **stack, int line_number)
{
	if (*stack == NULL)
	{
		printf("L<%d>: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
