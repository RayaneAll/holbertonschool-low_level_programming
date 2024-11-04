#include "main.h"

/**
 * _memset - multiply numbers
 * @s : variable for the first number
 * @b : variable for the seconde number
 * @n : bien
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
