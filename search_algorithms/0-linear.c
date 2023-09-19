#include "search_algos.h"

/**
 * linear_search - search a specific value with linear order
 *
 * @array: pointer the first array element
 * @size: number of elements in the array.
 * @value: value to search
 *
 * Return: i if the value is found else return -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return -1;
}
  