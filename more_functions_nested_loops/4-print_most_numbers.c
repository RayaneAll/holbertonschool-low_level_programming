#include "main.h"

/**
 * print_most_numbers - affiche les nombres de 0 a 9 sauf 2 et 4
 *
 * Descritpion : affiche les nombres de 0 a 9 sauf 2 et 4
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	while (n != 2© || n != 4)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
