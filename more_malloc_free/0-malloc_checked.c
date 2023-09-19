#include "main.h"

/**
 * malloc_checked -  allocate memory
 *
 * @b: function
 * Return: On success, returns On failure or if s1 or s2 is NULL, return NULL.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
