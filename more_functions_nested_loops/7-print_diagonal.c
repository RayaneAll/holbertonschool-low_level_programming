#include "main.h"

/**
 * print_diagonal - bien
 * @n : cool
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
