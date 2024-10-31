#include "main.h"

/**
 * *_strcpy - multiply numbers
 * @dest : variable for the first number
 * @src : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < n && src[i] != aq\0aq ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = aq\0aq;
	}
	return (dest);
}
