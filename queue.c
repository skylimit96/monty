#include "monty.h"
/**
 * addqueue - add node to queue
 * @n: nv_value
 * @head: head of the stack
 * Return: none
*/
void addqueue(stack_t **head, int n)
{
	stack_t *nv_node, *ax;

	ax = *head;
	nv_node = malloc(sizeof(stack_t));
	if (nv_node == NULL)
	{
		printf("Error\n");
	}
	nv_node->n = n;
	nv_node->next = NULL;
	if (ax)
	{
		while (ax->next)
			ax = ax->next;
	}
	if (!ax)
	{
		*head = nv_node;
		nv_node->prev = NULL;
	}
	else
	{
		ax->next = nv_node;
		nv_node->prev = ax;
	}
}
