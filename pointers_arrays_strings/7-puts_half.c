#include "main.h"

/**
 * puts_half - multiply numbers
 * @str : betty
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		i++;
	}
	i = i / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
