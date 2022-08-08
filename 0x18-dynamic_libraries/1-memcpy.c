#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function copy the first n bytes
 *
 * @dest: a pointer to the memory of destination.
 * @src: source of memory to copy.
 * @n: the number bytes of the memory to copy.
 *
 * Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
