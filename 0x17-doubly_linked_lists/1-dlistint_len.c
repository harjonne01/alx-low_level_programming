#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 *
 * @h: pointer to the head of the doubly linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h);
{
	size_t new_node;

	while (h != NULL)
	{
		h = h->next;
		new_node++;
	}
	return (new_node);
}
