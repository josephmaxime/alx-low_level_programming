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
	unsigned int i, j, isPrime;

	for (i = 2; i <= 612852475143; i++)
	{
		/* Check 'i' for factor of num */
		if (612852475143 % i == 0)
		{
			/* Check 'i' for Prime */
			isPrime = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if ((i % j) == 0)
				{
					isPrime = 0;
					break;
				}
			}
			/* If 'i' is Prime number and factor of num */
			if (isPrime == 1)
			{
				printf("%ld, ", i);
			}
		}
	}
	return (0);
}
