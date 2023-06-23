#include "monty.h"

/**
 * free_dlistint - Frees a linked stack_t list.
 * @head: The head of the stack_t list.
 */

void _free(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
