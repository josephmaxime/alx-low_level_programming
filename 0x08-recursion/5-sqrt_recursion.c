#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * square_root_wrapper - helper
 * @n: int
 * @min: int
 * @max: int
 *
 *Return: int
 */

int square_root_wrapper(int n, int min, int max)
{
	if (min <= max)
	{
		if ((n / min) == min && (n % min) == 0)
			return (min);
		else
			return (square_root_wrapper(n, min + 1, max));
	}
	return (-1);
}


/**
 * _sqrt_recursion - factorials
 *
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_root_wrapper(n, 1, n));
}
