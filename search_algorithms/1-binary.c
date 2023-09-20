#include "search_algos.h"

/**
 * binary_search - search a specific value the sorted array using binary search
 * @array: Pointer the first array element
 * @size: size of the array
 * @value: value to find
 *
 * Return: where the value is located or -1 if it not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
