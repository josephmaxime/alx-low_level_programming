#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * set_bit - set a bit of the number biggin at 0 to index .
 *
 * @n: array of integer.
 * @index: index of a bit.
 * Return: 1 for true and 0 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int init = 1;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	init = 1 << index;
	*n = *n | init; 
	return (1);
}
