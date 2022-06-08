#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * get_bit - get a bit of the number by index .
 *
 * @n: number.
 * @index: index of a bit.
 * Return: a bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > (n * 8))
		return (-1);

	val = n >> index;
	if (val & 1)
		return (1);
	else
		return (0);
}
