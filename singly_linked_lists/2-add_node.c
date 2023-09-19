#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 *
 * @head: A double pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
    char *dup;
    list_t *new;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    dup = strdup(str);
    if (dup == NULL)
    {
        free(new);
        return (NULL);
    }

    new->str = dup;
    new->len = strlen(str);
    new->next = *head;

    *head = new;

    return (new);
}
