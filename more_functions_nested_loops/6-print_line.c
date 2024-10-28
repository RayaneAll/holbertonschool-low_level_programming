#include "main.h"

/**
 * mult - multiply numbers
 * @a : variable for the first number
 * @b : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar(n * '_');
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
