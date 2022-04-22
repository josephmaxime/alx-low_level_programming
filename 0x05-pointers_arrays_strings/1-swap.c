#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * swap_int - change value of poiter to 98
 * @a: pointer
 * @b: pointer
 * Return: 0 Always in success
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
