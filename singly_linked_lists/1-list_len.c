#include "lists.h"
#include <stdio.h>

/**
* list_len - multiply numbers
* @h : variable for the first number
*
* Descritpion : multiply variable a and variable b
* Return: return 0
*/

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
count++;
h = h->next;
}
return (count);
}
