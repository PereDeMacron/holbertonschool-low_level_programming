#include "lists.h"

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