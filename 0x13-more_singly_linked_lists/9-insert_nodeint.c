#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *existing = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	while (existing != NULL && i < idx - 1)
	{
		existing = existing->next;
		i++;
	}

	if (existing == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = existing->next;
	existing->next = new_node;

	return (new_node);
}
