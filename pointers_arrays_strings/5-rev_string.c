#include "main.h"

/**
 * rev_string - multiply numbers
 * @s : bien
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void rev_string(char *s)
{
	int first;
	int last;
	char temp;

	first = 0;
	last = *s - 1;

	while (first < last)
	{
		temp = first;
		first = last;
		last = temp;
		first++;
		last--;
	}
}
