#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_most_numbers - 0 to 9
 *
 * Return: 0 Always success
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}


