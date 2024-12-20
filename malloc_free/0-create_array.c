#include "main.h"
#include <stdlib.h>

/**
 * create_array - multiply numbers
 * @size : variable for the first number
 * @c : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	tab = (char *) malloc(size * sizeof(char));
	if (tab == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	tab[i] = '\0';
	return (tab);
	free(tab);
}
