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

	if (width == 0 || height == 0)
		return (NULL);
	if (width < 0 || height < 0)
		return (NULL);
	array = malloc(sizeof(*array) * width);
	for (i = 0; i < width; i++)
		array[i] = malloc(sizeof(**array) * height);
	if (array == NULL)
		return (NULL);
	free(array);
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	return (array);
}
