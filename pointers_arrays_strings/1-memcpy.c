#include "main.h"

/**
 * _memcpy - multiply numbers
 * @dest : variable for the first number
 * @src : variable for the seconde number
 * @n : betty
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
