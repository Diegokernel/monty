#include "monty.h"
int global_var;
/**
 * push - pushes an element to the stack
 * @line_number: line number
 * @stack: double pointer to top of stack
 * Return: void
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	(void) line_number;
	new = malloc(sizeof(stack_t));
	if (!new)
		return;
	new->n = global_var;
	new->prev = NULL;

	if (!*stack)
	{
		new->next = NULL;
		*stack = new;
		return;
	}
	new->next = *stack;
	(*stack)->prev = new;
	*stack = new;
}
