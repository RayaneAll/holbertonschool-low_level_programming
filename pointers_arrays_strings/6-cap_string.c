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
	int cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if (cap && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		cap = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			cap = 1;
		}
		else if (str[i] == ',' || str[i] == ';' || str[i] == '.')
		{
			cap = 1;
		}
		else if (str[i] == '!' || str[i] == '?' || str[i] == '"')
		{
			cap = 1;
		}
		else if (str[i] == '(' || str[i] == ')')
		{
			cap = 1;
		}
		else if (str[i] == '{' || str[i] == '}')
		{
			cap = 1;
		}
		i++;
	}
	return (str);
}
