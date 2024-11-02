#include "main.h"

/**
 * cap_string - multiply numbers
 * @str : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.')
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] == '!' || str[i] == '?' || str[i] == '"')
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] == '(' || str[i] == ')')
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] == '{' || str[i] == '}')
		{
			str[i] = str[i] - 32;
		}
		else
		{
			i++;
		}
		i++;
	}
}
