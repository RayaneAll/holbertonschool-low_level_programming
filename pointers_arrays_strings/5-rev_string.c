#include "main.h"
#include <stdio.h>
#include <string.h>

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
	last = strlen(s) - 1;

	while (first < last)
	{
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
		first++;
		last--;
	}
}
