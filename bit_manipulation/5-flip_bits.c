#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		xor &= (xor - 1);
		bits++;
	}

	return (bits);
}
