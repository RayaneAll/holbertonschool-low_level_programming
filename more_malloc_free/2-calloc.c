#include "main.h"
#include <stdlib.h>

/**
 * _calloc - multiply numbers
 * @nmemb : variable for the first number
 * @size : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int total_size;
    unsigned int i;
    char *char_ptr;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }
    total_size = nmemb * size;
    ptr = malloc(total_size);
    if (ptr == NULL)
    {
        return (NULL);
    }
    char_ptr = (char *)ptr;
    for (i = 0; i < total_size; i++)
    {
        char_ptr[i] = 0;
    }
    return (ptr);
}
