#include "main.h"

/**
 * _puts - multiply numbers
 * @str : bien
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
