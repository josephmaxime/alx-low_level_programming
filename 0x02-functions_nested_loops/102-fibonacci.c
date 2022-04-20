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
	int i;
        double	init_1, init_2, next;

	init_1 = 1;
	init_2 = 2;
	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			next = init_1;
		}
		else if (i == 1)
		{
			next = init_2;
		}
		else
		{
			next = init_1 + init_2;
			init_1 = init_2;
			init_2 = next;
		}
		printf("%lf, ", next);
	}

	printf("\n");
	return (0);
}
