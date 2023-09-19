#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: On success, returns a pointer to
 *		the newly allocated 2D array.
 *         On failure or if width or height is less
 *		than or equal to 0, returns NULL.
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoD[hgt_index] = malloc(sizeof(int) * width);

		if (twoD[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twoD[hgt_index]);

			free(twoD);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twoD[hgt_index][wid_index] = 0;
	}

	return (twoD);
}