#include "monty.h"

/**
 * _pall - prints list
 * @stack: dlistint_t
 * Return: Nb of nodes
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
