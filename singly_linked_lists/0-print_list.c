#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/*
 *print_list - ...
 *
 * @h : count
 *
 * return : count
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
