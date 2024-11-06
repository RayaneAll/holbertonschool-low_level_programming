#include "main.h"
#include <stddef.h>

/**
 * _strstr - multiply numbers
 * @haystack : variable for the first number
 * @needle : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
		{
			return (begin);
		}
		haystack = begin + 1;
	}
	return (NULL);
}
