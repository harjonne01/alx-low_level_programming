#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *existing;

	while (head != NULL)
	{
		existing = head;
		head = head->next;
		free(existing);
	}
}
