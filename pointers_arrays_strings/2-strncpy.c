#include "main.h"

/**
 * _strncpy - multiply numbers
 * @dest : variable for the first number
 * @src : variable for the seconde number
 * @n : variable
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
