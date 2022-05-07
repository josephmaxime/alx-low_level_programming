#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free grid
 *
 * @grid: array of two dim
 * @height: height of array
 *
 */

void free_grid(int **grid, int height)
{
	int i, j, length;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
			free(grid[j]);
	}	
	free(grid);
}
