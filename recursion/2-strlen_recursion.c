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
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
