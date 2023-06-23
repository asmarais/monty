#include "monty.h"

/**
 * _add - The opcode add adds the top two elements of the stack.
 * @stack: pointer that points at the head of a stack
 * @line_number: the number of the line
 * Return: nothing
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't swap, stack too short\n",
			line_number);
		gvars.ret_val = -1;
		return;
	}
	ptr = *stack;
	(ptr->next)->n += ptr->n;
	(ptr->next)->prev = NULL;
	*stack = ptr->next;
	free(ptr);
}
