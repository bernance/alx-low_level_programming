#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - A function that frees a 2 dimensional array
* @grid: A 2D array
* @height: the height of the grid
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
