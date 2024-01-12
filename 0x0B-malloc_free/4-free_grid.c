#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this fn frees the prev 2 dimensional grid
 * @grid: grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
