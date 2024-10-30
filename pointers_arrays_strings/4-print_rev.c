#include "main.h"

/**
 * print_rev - multiply numbers
 * @s : betty
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_rev(char *s)
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
