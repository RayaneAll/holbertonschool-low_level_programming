#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees a list_t list.
* @head: The head of the list to be freed.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
