#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - multiply numbers
 * @d : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);
free(d);
}
