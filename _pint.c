#include "monty.h"

/**
 * _pint - pushes an element to the stack
 * @stack: stack
 * @line_number: int
 * Return: nothing
*/

void _pint(stack_t *stack, int line_number)
{
	if (*stack == NULL)
	{
		printf("L<%d>: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
