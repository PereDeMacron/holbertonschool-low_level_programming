#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 *
 * @head: A double pointer to the head of the doubly linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    new->next = *head;
    
    if (*head != NULL)
        (*head)->prev = new;

    *head = new;

    return (new);
}
