#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the linked list
 * @head: pointer to a pointer to the linked list's head
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;

	if (new_node != NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->next = (*head);
	new_node->len = len;
	(*head) = new_node;

	return (new_node);
}
