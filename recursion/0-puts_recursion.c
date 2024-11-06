#include "main.h"

/**
 * _puts_recursion - multiply numbers
 * @s : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
