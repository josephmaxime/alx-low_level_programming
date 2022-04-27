#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fill memory with a constatnt byte
 *
 * @s:memory to fill
 * @b: char
 * @n: number of bit
 *
 * Return: pointers of char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b
	}
	return (s);
}
