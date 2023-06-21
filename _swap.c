#include "monty.h"

/**
 * _swap - The opcode swap swaps the top two elements of the stack.
 * @stack: a pointer that points atthe top of a stack
 * @line_number: the number of the line
 * Return: nothing
 */

void _swap(stack_t **stack, int line_number)
{
	stack_t *first, *second;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	first = *stack;
	second = (*stack)->next;
	(*stack)->prev = second;
	(*stack)->next = second->next;
	second->prev = NULL;
	second->next = first;
	*stack = second;
	free(second);
	free(first);
}
