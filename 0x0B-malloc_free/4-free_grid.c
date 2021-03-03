#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid.
 * @grid: 2 dimensional array.
 * @height: Height.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
