#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str != NULL)
            printf("[%lu] %s\n", strlen(h->str), h->str);
        else
            printf("[0] (nil)\n");

        count++;
        h = h->next;
    }

    return count;
}
