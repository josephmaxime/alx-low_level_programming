#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include "main.h"

/**
 * print_last_digit - checks absolute value
 * @n: the number to be checked
 *
 * Return: absolute value
 */
int print_last_digit(int n)
{
	int res;

	res = abs(n % 10);
	_putchar('0' + res);
	return (res);
}
