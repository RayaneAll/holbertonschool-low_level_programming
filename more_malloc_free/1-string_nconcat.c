#include "main.h"
#include <stdlib.h>

/**
 * _str_len - multiply numbers
 * @str : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

unsigned int _str_len(char *str)
{
	unsigned int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - multiply numbers
 * @s1 : variable for the first number
 * @s2 : variable for the seconde number
 * @n : betty
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _str_len(s1);
	len2 = _str_len(s2);
	if (n >= len2)
	{
		n = len2;
	}
	result = malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
