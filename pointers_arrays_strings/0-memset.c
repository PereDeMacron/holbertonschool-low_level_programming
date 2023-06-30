#include "main.h"

/**
 * _memset - Fills a block of memory with a particular value.
 * @s: Pointer to the memory block to be filled.
 * @c: Value to be set.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the filled memory block.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s;
	unsigned char value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
