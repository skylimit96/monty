#include "monty.h"
/**
 * addnode - adds a new node
 * @head: stacks head
 * @n: nv_value
 * Return: none
*/
void addnode(stack_t **head, int n)
{

	stack_t *nv_node, *ax;

	ax = *head;
	nv_node = malloc(sizeof(stack_t));
	if (nv_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ax)
		ax->prev = nv_node;
	nv_node->n = n;
	nv_node->next = *head;
	nv_node->prev = NULL;
	*head = nv_node;
}
