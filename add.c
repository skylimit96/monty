#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @compteur: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int compteur)
{
	stack_t *h;
	int len = 0, ax;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", compteur);
		fclose(bus.fichier);
		free(bus.contenu);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ax = h->n + h->next->n;
	h->next->n = ax;
	*head = h->next;
	free(h);
}
