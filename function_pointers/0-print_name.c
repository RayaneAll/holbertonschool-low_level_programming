#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - multiply numbers
 * @name : variable for the first number
 * @f : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
