#include "main.h"

/**
 * print_square - multiply numbers
 * @size : bien
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
