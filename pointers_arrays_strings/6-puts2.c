#include "main.h"

/**
 * puts2 - multiply numbers
 * @str : betty
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
