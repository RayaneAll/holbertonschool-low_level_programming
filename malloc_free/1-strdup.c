#include "main.h"
#include <stdlib.h>

/**
 * mult - multiply numbers
 * @a : variable for the first number
 * @b : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strdup(char *str)
{
	char *dest;

	dest = malloc(*str);
	if (str == 0)
	{
		return (0);
	}
	if (dest == 0)
	{
		return (0);
	}
	while (*str != '\0')
	{
		*dest = *str;
		dest++;
		str++;
	}
	*dest = '\0';
	return (dest);
	free(dest);
}
