#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - created array of integers.
 *
 * @max: maximum.
 * @min: minimum.
 * Return: return newly created array of integers.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, mem;

	if (min >= max)
		return (NULL);

	ptr = malloc(max - min + 1);
	if (ptr == NULL)
		return (NULL);

	mem = min
	for (; (i < max - min + 1); i++)
	{
		ptr[i] = mem;
		mem += i;
	}

	return (ptr);
}
