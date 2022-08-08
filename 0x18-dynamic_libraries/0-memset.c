#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - function fills the first n bytes
 *
 * @s: a pointer to the memory or buffer.
 * @b: the character to  fill with.
 * @n: the number bytes of the memory to fill.
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
