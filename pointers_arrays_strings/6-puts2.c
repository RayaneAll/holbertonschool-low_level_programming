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
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
