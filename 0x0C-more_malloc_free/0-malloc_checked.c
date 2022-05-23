#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - return pointer to allocated memory
 *
 * @b: size to allocated
 * Return: pointer to allocated for true or 98 for fail.
 */

void *malloc_checked(unsigned int b)
{
	size_t *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
