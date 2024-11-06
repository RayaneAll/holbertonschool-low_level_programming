#include "main.h"

/**
 * check_prime - multiply numbers
 * @n : variable for the first number
 * @i : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - multiply numbers
 * @n : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}
