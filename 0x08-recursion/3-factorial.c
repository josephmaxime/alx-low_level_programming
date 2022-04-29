#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * factorial - factorials
 *
 * @n: int
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	factorial(0) = 1;
	return (n * factorial(n - 1));
}
