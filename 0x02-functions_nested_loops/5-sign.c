#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include "main.h"

/**
 * print_sign - checks if is lowercase letter
 * @n: the number to be checked
 *
 * Return: if n > 0 : 1 && + ? -1 && -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
