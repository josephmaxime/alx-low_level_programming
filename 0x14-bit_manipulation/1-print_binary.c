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
	int i, val;
	for (i = 31; i >= 0; i--)
	{
		val = n >> i;
		if (val & 1)
			putchar('1');
		else
			putchar('0');
	}
}
