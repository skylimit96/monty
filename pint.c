#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @compteur: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int compteur)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", compteur);
		fclose(bus.fichier);
		free(bus.contenu);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
