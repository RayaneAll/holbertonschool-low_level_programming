#include "main.h"
#include <stdio.h>

/**
 * print_array - multiply numbers
 * @a : variable for the first number
 * @n : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
