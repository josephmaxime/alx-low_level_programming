#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include "main.h"

/**
 * print_times_table - n times table
 * @n: number of tables to print
 * Return: time
 */
void print_times_table(int n)
{
	int times, number, res, next;

	if ((n >= 0) && (n <= 15))
	{
		for (times = 0; times < n + 1; times++)
		{
			for (number = 0; number < n + 1; number++)
			{
				if (number < n)
				{
					res = times * number;
					next = times * (number + 1);
					if (next < 10)
					{
						printf("%d,   ", res);
					}
					else if ((next >= 10) && (next < 100))
					{
						printf("%d,  ", res);
					}
					else
					{
						printf("%d, ", res);
					}
				}
				else
				{
					res = times * number;
					printf("%d", res);
				}
			}
		printf("\n");
		}
	}
	else
	{
		;
	}
}
