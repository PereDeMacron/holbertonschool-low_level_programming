#include "hash_tables.h"
/*Inclure le fichier d'en-tête "hash_tables.h"*/

/*Définition de la fonction de hachage hash_djb2*/
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    /*Variable pour stocker le résultat du hachage*/
    int c;
    /*Variable pour stocker chaque caractère de la chaîne*/

    hash = 5381;
    /*Initialisation du hachage avec une valeur arbitraire*/

    /*Boucle pour traiter chaque caractère de la chaîne jusqu'à la fin (caractère nul)*/
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c;
        /*Formule de mise à jour du hachage : hash * 33 + valeur ASCII du caractère actuel*/
    }

    return (hash);
    /*Renvoyer la valeur finale du hachage calculée*/
}