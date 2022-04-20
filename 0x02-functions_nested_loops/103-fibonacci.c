#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include "main.h"

/**
 * main - display sum of the natural numbers multiples of 3 or 5 below 1024
 *
 * Return: 0 always for success
 */

int main(void)
{
	int i, mod_2;
	int init_1, init_2, next, sum;

	init_1 = 1;
	init_2 = 2;
	sum = 2;
	next = 0;
	while (sum <= 4000000)
	{
		next = init_1 + init_2;
		init_1 = init_2;
		init_2 = next;
		mod_2 = next % 2;
		if (mod_2 == 0)
		{
			sum += next;
		}
	}

	printf("%d", sum);
	printf("\n");
	return (0);
}
