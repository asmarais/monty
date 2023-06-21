#include "monty.h"

/**
 * _pop - The opcode pop removes the top element of the stack.
 * @stack: a pointer that points at the top of the stack
 * @line_number: the number of the line
 * Return: void
 */
void _pop(stack_t **stack, int line_number)
{
	stack_t *ptr;

	if (*stack == NULL)
	{
		fprintf(stdout, "%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	ptr = (*stack)->next;
	*stack = ptr;
	ptr = ptr->prev;
	(*stack)->prev = NULL;
	free(temp);

}
