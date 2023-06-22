#include "monty.h"

/**
 * _pall - prints the value at the top of the stack, followed by a new line
 * @stack: dlistint_t
 * @line_number:  unsigned int for line number(void in this function)
 * Return: nothing
*/

void _pall(stack_t **stack,__attribute__((unused))unsigned int line_number)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
