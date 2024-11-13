#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - multiply numbers
 * @b : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
    {
        exit(98);        
    }
    return (ptr);
}
