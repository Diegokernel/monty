#include "monty.h"
/**
 * free_stack - function frees all memory stored in heap
 *@head: pointer to head of linked list
 */
void free_stack(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
