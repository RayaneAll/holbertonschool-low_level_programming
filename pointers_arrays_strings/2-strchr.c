#include "main.h"
#include <stddef.h>

/**
 * _strchr - multiply numbers
 * @s : variable for the first number
 * @c : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
