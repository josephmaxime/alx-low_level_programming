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
	int i, sum, mod_3, mod_5;

	for (i = 0; i <= 1024; i++)
	{
		sum = 0;
		mod_3 = i % 3;
		mod_5 = i % 5;
		if (mod_3 == 0 || mod_5 == 0)
		{
			sum += i;
		}
	}

	printf("%d", sum);
	printf("\n");
	return (0);
}
