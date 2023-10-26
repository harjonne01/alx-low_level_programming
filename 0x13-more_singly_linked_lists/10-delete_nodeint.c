#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: index of the node that should be deleted.
 *
 * Return: 1 (if it succeeded), or -1 (if it failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *existing = *head;
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (existing != NULL || (existing->next) != NULL)
			return (-1);
		existing = existing->next;
		i++;
	}


	temp = existing->next;
	existing->next = temp->next;
	free(temp);

	return (1);
}

