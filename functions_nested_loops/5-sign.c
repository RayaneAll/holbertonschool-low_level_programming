#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number to check.
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
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
