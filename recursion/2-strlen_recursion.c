#include "main.h"

/**
 * _strlen_recursion - multiply numbers
 * @s : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return (i);
}
