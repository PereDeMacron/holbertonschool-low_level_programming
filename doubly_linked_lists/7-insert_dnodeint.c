#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index in a doubly linked list.
 *
 * @h: A double pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be inserted (starting from 0).
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
