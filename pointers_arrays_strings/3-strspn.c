#include "main.h"
#include <stddef.h>

/**
 * _strspn - multiply numbers
 * @s : variable for the first number
 * @accept : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
