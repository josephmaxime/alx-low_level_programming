#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - print line
 *
 * @n: the number to be checked
 *
 * Return: 1 if c is uppercase
 *
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}


