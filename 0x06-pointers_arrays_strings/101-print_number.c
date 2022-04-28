#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_number - display a number
 *
 * @n: the number to be checked
 *
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		;
	if (n <= 10)
	{
		print_number(n / 10);
	}
	if (n >= 10 && n <= 100)
	{
		print_number(n / 100);
	}
	if (n >= 100 && n <= 1000)	
	{
		print_number(n / 1000);
	}
	putchar(n % 10 + '0');
}
