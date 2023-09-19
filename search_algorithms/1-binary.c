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
	size_t mid, i;
	int result;
	
	if (array == NULL || size == 0)
		return -1;

	printf("Searching in array: %d", array[0]);
	for (i = 1; i < size; i++) {
		printf(", %d", array[i]);
	}
	printf("\n");

	mid = size / 2;

	if (array[mid] == value)
		return mid;

	if (array[mid] > value)
		return binary_search(array, mid, value);

	result = binary_search(array + mid + 1, size - mid - 1, value);

	if (result != -1)
		return mid + 1 + result;

	return -1;
}
