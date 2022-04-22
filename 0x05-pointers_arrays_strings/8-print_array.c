#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - change value of poiter to 98
 *
 * @n: pointer
 * @a: integer
 * Return: 0 Always in success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
