#include "main.h"

/**
 * _pow_recursion - multiply numbers
 * @x : variable for the first number
 * @y : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
