#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - create an array of two dimensions
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: array [][]
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	array = malloc(width * sizeof(*array));
	for (i = 0; i < width; ++i)
		array[i] = malloc(height * sizeof(**array));
	if (array == NULL)
		return (NULL);
	if (width == 0 || height == 0)
		return (NULL);
	if (width < 0 || height < 0)
		return (NULL);
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	return (array);
}
