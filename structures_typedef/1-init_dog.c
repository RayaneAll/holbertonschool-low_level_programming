#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - multiply numbers
 * @d : variable for the first number
 * @name : variable for the seconde number
 * @age : variable for the seconde number
 * @owner : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
