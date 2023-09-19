#include "main.h"

/**
 * _calloc - alloc mem for an array
 *
 * @nmemb: nmemb
 * @size: size
 * Return: On success, returns On failure or if s1 or s2 is NULL, return NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
	return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
	filler[index] = '\0';

	return (mem);
}
