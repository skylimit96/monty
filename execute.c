#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @compteur: line_counter
* @fichier: poiner to monty file
* @contenu: line content
* Return: no return
*/
int execute(
	char *contenu,
	stack_t **stack,
	unsigned int compteur,
	FILE *fichier)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall},
				{"add", f_add},
				{"queue", f_queue},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(contenu, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, compteur);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", compteur, op);
		fclose(fichier);
		free(contenu);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
