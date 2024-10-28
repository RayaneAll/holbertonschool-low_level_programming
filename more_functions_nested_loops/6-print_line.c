#include "main.h"

/**
 * print_line - affiche ligne
 * @n : variable for line
 *
 * Descritpion : multiply variable a and variable b
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
