#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry code
 *
 * Return: 0 Always for sucsess
 *
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
