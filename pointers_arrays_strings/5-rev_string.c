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
	last = 0;

	while (s[last] != '\0')
	{
		last++;
	}
	last--;
	while (first < last)
	{
		temp = s[first];
		s[first] = s[last];
		s[last] = temp;
		first++;
		last--;
	}
}
