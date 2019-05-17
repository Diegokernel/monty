#include "monty.h"
/**
 * swap - swapping first two elements on top of stack
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL)
		return;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;

	(*stack)->next = temp->next;
	temp->next = *stack;
	temp->prev = NULL;
	(*stack)->prev = temp;

	*stack = temp;
}
