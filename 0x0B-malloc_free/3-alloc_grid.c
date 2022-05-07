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
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[i]);
			free(array);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}
