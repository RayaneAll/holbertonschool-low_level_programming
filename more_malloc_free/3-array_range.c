#include "main.h"
#include <stdlib.h>

/**
 * array_range - multiply numbers
 * @min : variable for the first number
 * @max : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int *array_range(int min, int max)
{
    int *tab;
    int i;
    int size;

    if (min > max)
    {
        return (NULL);
    }
    size = max - min + 1;
    tab = malloc(size * sizeof(int));
    if (tab == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        tab[i] = min + i;
    }
    return (tab);
}
