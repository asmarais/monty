#include "monty.h"

/**
 * find_op - finds the name of the operator
 * @stack: pointer to the stack
 * Return: 1 on success
 */

int find_op(stack_t **stack)
{
	int i = 0;

	instruction OP[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL},
	};

	while (OP[i].opcode != NULL)
	{
		if (strcmp(gvars.cmd, OP[i].opcode) == 0)
		{
			OP[i].f(stack, gvars.line_number);
			return (1);
		}
		i++;
	}
	fprintf(stdout, "L%d: unknown instruction %s\n",
	gvars.line_number, gvars.cmd);
	return (-1);
}
