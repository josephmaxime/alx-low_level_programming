#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * print_binary - convert int to binary.
 *
 * @n: number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int val = n;

	if (val > 1)
	{
		print_binary(val >> 1);
	}
	putchar((val & 1) + '0');
}
