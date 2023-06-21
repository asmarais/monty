#include "monty.h"

/**
 * _pall - prints the value at the top of the stack, followed by a new line
 * @stack: dlistint_t
*/

void _pall(stack_t *stack)
{
	stack_t *current = stack;

	if (stack == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
