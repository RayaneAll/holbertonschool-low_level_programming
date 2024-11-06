#include "main.h"

/**
 * factorial - multiply numbers
 * @n : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
