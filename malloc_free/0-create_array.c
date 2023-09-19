#include "main.h"

/**
<<<<<<< HEAD
 * *create_array - create an array
 * 
 * @size: tell a size
 * @c: char c
 *
 * Return: Array char
 */



=======
 * create_array - Creates an array of characters
 *	initialized with a specific character.
 * @size: The size of the array.
 * @c: The character used to initialize the array.
 *
 * Return: On success, returns a pointer to the newly created array.
 *         On failure or if size is 0, returns NULL.
 */
>>>>>>> 2afcc1d65c8bb75a001211422cc9eca96b0da5bb
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
