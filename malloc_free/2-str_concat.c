#include "main.h"
#include <stdlib.h>

/**
 * str_concat - multiply numbers
 * @s1 : variable for the first number
 * @s2 : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1;
	int len2;
	int i;
	int j;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat = malloc(len1 + len2 + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
