#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array of integers
 * @grid:2 dimensional array of integers to eb freed
 * @height:height of grid
 */

void free_grid(int **grid, int height)
{
	int mee;

	for (mee = 0; mee < height; mee++)
		free(grid[mee]);
	free(grid);
}
