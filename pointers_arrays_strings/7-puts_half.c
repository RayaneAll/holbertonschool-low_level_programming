#include "main.h"

/**
 * mult - multiply numbers
 * @a : variable for the first number
 * @b : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void puts_half(char *str)
{
	int half;

	half = 0;
	while (str[half] != '\0')
	{
		half++;
	}
	half--;
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
