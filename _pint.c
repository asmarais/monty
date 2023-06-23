#include "monty.h"

/**
 * _pint - prints the value at the top of the stack, followed by a new line
 * @stack: stack
 * @line_number: int
 * Return: nothing
*/

void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L<%d>: can't pint, stack empty\n", line_number);
		gvars.ret_val = -1;
		return;
	}
	printf("%d\n", (*stack)->n);
}
