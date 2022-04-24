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
	int i;

	for (i = n; i >= 1; i--)
		_putchar(a[i]);
}
