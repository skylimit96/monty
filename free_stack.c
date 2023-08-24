#include "monty.h"
/**
* free_stack - free the list
* @head: stacks head
*/
void free_stack(stack_t *head)
{
	stack_t *ax;

	ax = head;
	while (head)
	{
		ax = head->next;
		free(head);
		head = ax;
	}
}
