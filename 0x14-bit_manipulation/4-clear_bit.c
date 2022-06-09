#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * clear_bit - set a bit of the number biggin at 0 to index .
 *
 * @n: pointer of integer.
 * @index: index of a bit.
 * Return: 1 for true and 0 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int init;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	init = ~(1 << index);
	*n = *n & init;
	return (1);
}
