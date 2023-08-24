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
/**
 * f_queue - prints the top
 * @head: stack head
 * @compteur: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int compteur)
{
	(void)head;
	(void)compteur;
	bus.lifi = 1;
}
