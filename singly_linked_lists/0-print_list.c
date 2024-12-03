#include "lists.h"
#include <stdio.h>

/**
* print_list - multiply numbers
* @h : variable for the first number
*
* Descritpion : multiply variable a and variable b
* Return: return 0
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
			count++;
			h = h->next;
		}
	}
	return (count);
}
