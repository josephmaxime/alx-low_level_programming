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
	long i, num;

	num = 612852475143;
	for (i = 2; num > 1; i++)
	{
		while (num % i == 0 && 1)
		{
			/* result = num / i; */
			num = num / i;
		}
		
	}
	printf("%ld", i);
	return (0);
}
