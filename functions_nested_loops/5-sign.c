#include "main.h"

/**
 * print_alphabet - imprime alphabet en minucscule, suivi d'un saut de ligne
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}
