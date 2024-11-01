#include "main.h"

/**
 * _strlen - multiply letters
 *
 * @s : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcat - multiply letters
 *
 * @dest : variable for the first number
 * @src : definition
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = _strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return(dest);
}
