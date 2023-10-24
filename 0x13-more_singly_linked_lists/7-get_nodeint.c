#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the index in a linked list
 * @head: first node in the linked list
 * @index: index of the node
 *
 * Return: pointer to the node we're looking for
 * or NULL, if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}

	return (NULL);
}
