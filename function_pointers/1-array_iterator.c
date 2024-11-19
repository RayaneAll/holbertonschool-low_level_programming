#include <stddef.h>

/**
 * array_iterator - multiply numbers
 * @array : variable for the first number
 * @size : variable for the seconde number
 * @action : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
