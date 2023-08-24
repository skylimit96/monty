#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: top of the stack
 * @compteur: not gonna be used
 * Return: none
*/
void f_pall(stack_t **head, unsigned int compteur)
{
	stack_t *h;
	(void)compteur;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
