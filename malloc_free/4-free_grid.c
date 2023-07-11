#include "main.h"

/**
 * free_grid - Frees a 2D array of integers.
 * @grid: The 2D array to be freed.
 * @height: The height of the 2D array.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
