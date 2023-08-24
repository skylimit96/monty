#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @compteur: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int compteur)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", compteur);
		fclose(bus.fichier);
		free(bus.contenu);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
