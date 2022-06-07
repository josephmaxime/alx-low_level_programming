#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * isbinary - test if pointing on char 0 or 1.
 *
 * @b: pointer of char.
 * Return: integer.
 */
int isbinary(const char *b)
{
	int i = 0, val = 1;

	while (b[i])
	{
		if (b[i] != '0' || b[i] != '1')
		{
			val = 0;
			break;
		}
		i++;
	}

	return (val);
}

/**
 * binary_to_uint - convert binary number to and unsigned int
 *
 * @b: binary number.
 * Return: unsigned number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k = 1;
	unsigned int length, num = 0;

	if (b == NULL)
		return (0);
	if (isbinary(b) == 0)
		return (0);

	length = strlen(b);
	for (i = length - 1; i > 0; i--)
	{
		if (b[i] == '1')
			num += k;
		k *= 2;
	}

	return (num);
}
