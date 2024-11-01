#include "main.h"

/**
 * _strncat - multiply numbers
 * @dest : variable for the first number
 * @src : variable for the seconde number
 * @n : betty
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
