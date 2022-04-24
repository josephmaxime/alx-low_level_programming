#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_triangle - print triangle of #
 *
 * @size: size of triangle
 *
 * Return: 1 if c is uppercase
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			if (i != size)
			{
				for (j = 1; j <= size - i; j++)
				{
					_putchar(' ');
				}
				for (j = size - i; j < size; j++)
				{
					_putchar('#');
				}
			}
			else
			{
				for (j = 1; j <= size; j++)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}


