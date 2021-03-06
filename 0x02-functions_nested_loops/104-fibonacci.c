#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include "main.h"

/**
 * main - fibonacci(98)
 *
 * Return: 0 always for success
 */

int main(void)
{
	int i;
	unsigned long init_1, init_2, next;

	init_1 = 1;
	init_2 = 2;
	for (i = 0; i < 98; i++)
	{
		if (i == 0)
		{
			next = init_1;
			printf("%lu, ", next);
		}
		else if (i == 1)
		{
			next = init_2;
			printf("%lu, ", next);
		}
		else
		{
			if (i < 97)
			{
				next = init_1 + init_2;
				init_1 = init_2;
				init_2 = next;
				printf("%lu, ", next);
			}
			else
			{
				next = init_1 + init_2;
				init_1 = init_2;
				init_2 = next;
				printf("%lu", next);
			}
		}
	}

	printf("\n");
	return (0);
}
