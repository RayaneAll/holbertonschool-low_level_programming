#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Descritpion : print numbers
 * Return: no return
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
