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
	for (i = 2; i <= num / 2; i++)
	{
		while(num % i == 0)
		{
			printf("%l, ", i);
			num = num / i;
		}
	}
	return (0);
}
