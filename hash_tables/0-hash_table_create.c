#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;  
    /*Déclaration d'un pointeur vers une table de hachage*/
    unsigned long int i;

    ht = malloc(sizeof(hash_table_t));
    /*Allocation mémoire pour la table de hachage*/
    if (ht == NULL)
        return (NULL);
        /*Si l'allocation échoue, on retourne NULL*/

    ht->size = size;
    /*On assigne la taille passée en paramètre à la structure*/

    ht->array = malloc(sizeof(hash_node_t *) * size);
    /*Allocation mémoire pour le tableau de pointeurs*/
    if (ht->array == NULL) {
        free(ht);
        /*Si l'allocation échoue, on libère la mémoire allouée pour la table de hachage*/
        return (NULL);
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;
        /*Initialisation de chaque élément du tableau à NULL*/

    return (ht);
    /*On retourne le pointeur vers la nouvelle table de hachage*/
}
