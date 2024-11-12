#include "main.h"
#include <stdlib.h>

/**
 * _strdup - multiply numbers
 * @str : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strdup(char *str)
{
	char *dest;
	int i;
	int len;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = str[i];
	}
	dest[len] = '\0';
	return (dest);
}
