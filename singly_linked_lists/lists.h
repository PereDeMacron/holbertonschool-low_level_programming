#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct list_t
{
    char *str;
    unsigned int len;
    struct list_t *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);

#endif 
