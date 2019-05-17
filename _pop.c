#include "monty.h"
/**
 * pop - delete head node
 * @stack: pointer to the head of the list
 * @line_number: current line number in main for error handling
 * Return: none
 */
void _pop(stack_t **head, unsigned int line_num)
{
	stack_t *tmp;

	if (!head || !*head)
	{
		printf("L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	if ((*head)->next)
	{
		*head = (*head)->next;

		(*head)->prev = NULL;
		free(tmp);
	}
	else
	{
		free(tmp);
		*head = NULL;
	}
}
