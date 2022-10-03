#include "main.h"

/**
* free_grid - free a two dimensional array memory.
*
* @grid: two dimensional array
* @height: no of rows of the array
*
*/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
