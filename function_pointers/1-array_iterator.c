#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - exec func given as a parameter on each element of an array
 *
 * @size: size of
 * @array: an array
 * @action: .
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
