#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}

	return (c);
}
