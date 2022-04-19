#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include "main.h"

/**
 * times_table - 9 time tables
 *
 * Return: time
 */
void times_table(void)
{
	int times, number, res, next;

	for (times = 0; times < 10; times++)
	{
		for (number = 0; number < 10; number++)
		{
			if (number < 9)
			{
				res = times * number;
				next = times * (number + 1);
				if ((res < 10) && (next < 10))
				{
					printf("%d,  ", res);
					/*_putchar(',');*/
					/*_putchar(' ');*/
					/*_putchar(' ');*/
				}
				else if ((res < 10) && (next >= 10))
				{
					printf("%d, ", res);
					/*_putchar(',');*/
					/*_putchar(' ');*/
				}
				else
				{
					printf("%d, ", res);
					/*_putchar(',');*/
					/*_putchar(' ');*/
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
