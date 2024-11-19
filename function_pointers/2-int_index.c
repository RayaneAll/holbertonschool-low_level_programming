#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - multiply numbers
 * @array : variable for the first number
 * @size : variable for the seconde number
 * @cmp : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}
