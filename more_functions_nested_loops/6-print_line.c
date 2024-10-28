#include "main.h"

/**
 * print_line - affiche ligne
 * @n : variable for line
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar(n * 95);
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
