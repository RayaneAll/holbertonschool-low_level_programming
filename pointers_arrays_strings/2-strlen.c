#include "main.h"

/**
 * _strlen - multiply numbers
 * @s : betty
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
