#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * flip_bits - number of bits you would need to flip
 * to get from number to another.
 *
 * @n: number.
 * @m: number.
 * Return: number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k_n, k_m;
	unsigned long int next;
	unsigned int nb = 0;

	for (next = 0; next < (sizeof(n) * 8); next++)
	{
		k_n = n >> next;
		k_m = m >> next;
		if ((k_n & 1) != (k_m & 1))
			nb++;
	}

	return (nb);
}
