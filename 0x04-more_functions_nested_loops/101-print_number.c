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
		putchar('-');
		n = -n;
	}
	if (n != 0)
		print_number(n / 10);

	/* putchar(n % 10 + '0'); */
}
