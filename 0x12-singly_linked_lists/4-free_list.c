#include <stdlib.h>
#include "lists.h"

/**
 * free_list - to free a linked list
 * @head: the list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
