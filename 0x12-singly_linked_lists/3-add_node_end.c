#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	int i;

	for (i = 0; str[i]; i++)

	new_node->str = (char *)malloc((len + 1) * sizeof(char));
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	strcpy(new_node->str, str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *temp = *head;
	while
		(temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	}
	return (new_node);
}
