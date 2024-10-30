#include "main.h"

/**
 * rev_string - multiply numbers
 * @s : bien
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void rev_string(char *s)
{
	int i;
	int j;

	i = 0;
	j = i - 1;
	while (s[i] != '\0')
	{
		i++;
	}
	_putchar('\n');
	while (s[j] != s[0])
	{
		j++;
	}
	_putchar('\n');
}
