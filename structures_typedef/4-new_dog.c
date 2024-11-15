#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - multiply numbers
 * @name : variable for the first number
 * @age : variable for the seconde number
 * @owner : betty
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(strlen(name) + 1);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
strcpy(dog->name, name);
dog->owner = malloc(strlen(owner) + 1);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
