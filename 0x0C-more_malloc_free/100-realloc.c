#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - allocate memory to newly space.
 *
 * @ptr: pointer for a memory.
 * @old_size: size.
 * @new_size: new size.
 * Return: return array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;
	unsigned int i, mem;

	if (size == 0 && ptr != NULL)
		free(ptr);
		return (NULL);

	if (ptr == NULL)
	{
		tmp = malloc(new_size);
		return (tmp);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
		mem = old_size;
	else
		mem = new_size;

	tmp = malloc(new_size);
	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < mem; i++)
	{
		tmp[i] = ptr[i];
	}

	free(ptr);
	return (tmp);
}
