#include "monty.h"
/**
 * _pall - prints all the values on the stack,
 * starting from the top of the stack.
 *
 * @head: pointer to an adress of the doubly linked list
 * @i: unused parameter
 *
 */
void _pall(stack_t **stack, unsigned int line_num)
{
	stack_t *current;

	(void)line_num;
	if (!*stack)
		return;
	current = *stack;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
