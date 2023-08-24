#include "monty.h"
#include <stdio.h>
/**
* main - the main monty language interpreter
* @argc: args counter
* @argv: file location
* Return: 0 if it succeed
*/
int main(int argc, char *argv[])
{
	bus_t bus = {NULL, NULL, NULL, 0};
	char *contenu;
	size_t size = 0;
	ssize_t read_line = 1;
	FILE *fichier;
	stack_t *stack = NULL;
	unsigned int compteur = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fichier = fopen(argv[1], "r");
	bus.fichier = fichier;
	if (!fichier)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		contenu = NULL;
		read_line = getline(&contenu, &size, fichier);
		bus.contenu = contenu;
		compteur++;
		if (read_line > 0)
		{
			execute(contenu, &stack, compteur, fichier);
		}
		free(contenu);
	}
	free_stack(stack);
	fclose(fichier);
return (0);
}
