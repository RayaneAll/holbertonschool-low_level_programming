#include "main.h"

/**
 * print_number - multiply numbers
 * @n : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0'); 
}

/**
 * print_diagsums - multiply numbers
 * @a : variable for the first number
 * @size : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - i - 1)];
	}

	print_number(sum1);
	_putchar('-');
	_putchar('-');
	print_number(sum2);
	_putchar('\n');
}
