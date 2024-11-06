#include "main.h"

/**
 * _print_rev_recursion - multiply numbers
 * @s : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
