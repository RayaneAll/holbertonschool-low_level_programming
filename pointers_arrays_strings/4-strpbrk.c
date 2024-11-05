#include "main.h"
#include <stddef.h>

/**
 * mult - multiply numbers
 * @a : variable for the first number
 * @b : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strpbrk(char *s, char *accept)
{
	do
	{
		if (*accept++ == *s)
		{
			return (s);
		}
		s++;
	} while (*accept != '\0');
	return (NULL);
}
