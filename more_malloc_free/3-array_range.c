#include "main.h"

/**
 * array_range - create an array of integer
 *
 * @min: min
 * @max: max
 * Return: On success, returns On failure or if s1 or s2 is NULL, return NULL.
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	return (NULL);

	for (index = 0; index < size; index++)
	array[index] = min++;

	return (array);
}
