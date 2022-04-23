#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - 0 to 9
 *
 * Return: 0 Always success
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}


