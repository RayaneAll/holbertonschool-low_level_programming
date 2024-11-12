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
	tab = malloc(size * sizeof(char) + 1);
	if (tab == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
	free(tab);
}
