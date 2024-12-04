#include "lists.h"

/**
* dlistint_len - Counts the number of elements in a doubly linked list.
* @h: Pointer to the head of the list.
*
* Return: Number of elements in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
