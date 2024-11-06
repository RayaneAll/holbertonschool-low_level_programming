#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - multiply numbers
 * @s : variable for the first number
 * @accept : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strpbrk(char *s, char *accept)
{
	do {
		if (*accept++ == *s)
		{
			return (s);
		}
		s++;
	} while (*accept != '\0');
	return (NULL);
}
