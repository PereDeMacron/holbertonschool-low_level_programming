#include "main.h"

/**
 * print_array - Prints elements of an array.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
