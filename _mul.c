#include "monty.h"
/**
 * mul - function to multiply top two elements on stack
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int mul = 0;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		printf("L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mul = temp->n + temp->next->n;
	temp->next->n = mul;

	_pop(stack, line_number);
}
