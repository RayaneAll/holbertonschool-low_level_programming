#include "main.h"

/**
 * _sqrt_recursion - multiply numbers
 * @n : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - multiply numbers
 * @n : variable for the first number
 * @i : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, i + 1));
}
