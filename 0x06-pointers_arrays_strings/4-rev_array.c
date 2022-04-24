#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - compares two strings
 *
 * @a: string
 * @n: int
 *
 * Return: integer
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
