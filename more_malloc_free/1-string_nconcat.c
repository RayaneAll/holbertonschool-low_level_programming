#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatène deux chaînes de caractères
 * @s1: la première chaîne
 * @s2: la deuxième chaîne
 * @n: le nombre de caractères de s2 à concaténer
 *
 * Return: un pointeur vers la nouvelle chaîne, ou NULL en cas d'échec
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int len1;
    unsigned int len2;
    unsigned int i;
    unsigned int j;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    len1 = strlen(s1);
    len2 = strlen(s2);
    if (n >= len2)
    {
        n = len2;
    }
    result = malloc(len1 + n + 1);
    if (result == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < len1; i++)
    {
        result[i] = s1[i];
    }
    for (j = 0; j < n; j++)
    {
        result[i + j] = s2[j];
    }
    result[i + j] = '\0';

    return (result);
}
