#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function to search an integer
 *
 * @array: array of arg to execute
 * @size: size of array
 * @cmp: pointer to a function you be use to compare values
 */
int array_iterator(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0) 
			return (i);
	}
	return (-1);
}
