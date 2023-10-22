#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the linked list
 * @head: pointer to a pointer to the linked list's head
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{ return (NULL);
	}

	new_node->str = strdup(str);
	new_node->next  = NULL;

	if (*head == NULL)
	{
		list_t *head;

		while (head->next != NULL)
		{
			head = head->next;
		}

		head->next = new_node;
	}
	return (*head);
}
