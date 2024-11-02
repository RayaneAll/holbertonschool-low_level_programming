#include "main.h"

/**
 * string_toupper - multiply numbers
 * @str : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
