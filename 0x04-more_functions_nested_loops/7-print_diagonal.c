#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - print line
 *
 * @n: the number to be checked
 *
 * Return: 1 if c is uppercase
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
