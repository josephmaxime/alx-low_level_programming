#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - checks if is lowercase
 *
 * Return: 1 if c is lowercase
 *
 */

int main(void)
{
	long i, res, num;

	num = 612852475143;
	for (i = 2; num > 1; i++)
	{
		while (num % i == 0)
		{
			/* result = num / i; */
			num = num / i;
		}
		res = i;
	}
	printf("%ld", res);
	return (0);
}
