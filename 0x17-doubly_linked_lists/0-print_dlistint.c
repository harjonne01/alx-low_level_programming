#include "lists.h"

/**
 * print_dlistint - print the elements of a doubly linked list
 *
 * @h: pointer to the head of the doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_node++;
	}
	return (num_node);
}
