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

	i = 0;
	while (grid[i][0])
	{
		length++;
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < length; j++)
			free(grid[j]);
		free(grid);
	}
}
