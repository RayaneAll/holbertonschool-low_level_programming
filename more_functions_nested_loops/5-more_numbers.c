#include "main.h"

/**
 * more_numbers - bien
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
		for (j = 0; j < 15; j++)
			_putchar(j + '0');
	}
	_putchar('\n');
}
