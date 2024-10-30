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

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] != s[0])
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
