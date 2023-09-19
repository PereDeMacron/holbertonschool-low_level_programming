#include "lists.h"

/**
 * free_dlistint - Frees all the nodes in a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: None.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
