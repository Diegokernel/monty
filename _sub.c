#include "monty.h"
/**
 * sub - function to subtract top two elements on stack
 * @stk: stack
 * @linenum: line number
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int sub = 0;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sub = temp->n - temp->next->n;
	temp->next->n = sub;

	_pop(stack, line_number);
}
