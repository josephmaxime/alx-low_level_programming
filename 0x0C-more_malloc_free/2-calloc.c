#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: array elements.
 * @size: size bit.
 * Return: return array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
	{
		tmp[i] = 0;
	}

	return (ptr);
}
