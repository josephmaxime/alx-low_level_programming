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
	int val = n;
	/* while (val > 1)
	{
		val = n >> i;
		if (val & 1)
			putchar('1');
		else
			putchar('0');
	} */
	if (val > 1)
	{
		print_binary(val >> 1);
	}
	putchar((val & 1) + '0');
}
