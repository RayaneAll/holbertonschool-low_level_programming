#include "main.h"

/**
 * reverse_array - multiply numbers
 * @a : variable for the first number
 * @n : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	i = 0;
	temp = 0;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
