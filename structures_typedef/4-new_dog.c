#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - multiply numbers
 * @str : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int _strlen(char *str)
{
int length = 0;
while (str[length] != '\0')
length++;
return (length);
}

/**
 * _strcpy - multiply numbers
 * @dest : variable for the first number
 * @src : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

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
dog->name = malloc(_strlen(name) + 1);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
_strcpy(dog->name, name);
dog->owner = malloc(_strlen(owner) + 1);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
