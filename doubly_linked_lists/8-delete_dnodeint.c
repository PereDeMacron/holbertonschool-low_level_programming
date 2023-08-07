#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list.
 *
 * @head: A double pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: 1 if successful, -1 if the node cannot be deleted or the list is empty.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
