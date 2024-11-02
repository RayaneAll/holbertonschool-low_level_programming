#include "main.h"

/**
 * _strcmp - multiply numbers
 * @s1 : variable for the first number
 * @s2 : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
