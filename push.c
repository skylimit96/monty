#include "monty.h"
/**
 * f_push - push a node to the stack
 * @head: head of the stack
 * @compteur: numero de la ligne
 * Return: none
*/
void f_push(stack_t **head, unsigned int compteur)
{
	int n, a = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			a++;
		for (; bus.arg[a] != '\0'; a++)
		{
			if (bus.arg[a] < 48 || bus.arg[a] > 57)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", compteur);
			fclose(bus.fichier);
			free(bus.contenu);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", compteur);
		fclose(bus.fichier);
		free(bus.contenu);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
