#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - change value of poiter to 98
 *
 * @s: pointer
 * Return: 0 Always in success
 */

void print_rev(char *s)
{
	int i;
	int length;

	length = strlen(s);
	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
