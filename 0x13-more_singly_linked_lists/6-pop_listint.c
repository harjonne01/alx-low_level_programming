#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head node’s data (n).
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: the deleted data
 * or return 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}
