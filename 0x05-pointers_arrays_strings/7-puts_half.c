#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - put chain of char
 *
 * @str: pointer
 * Return: 0 Always in success
 */

void puts_half(char *str)
{
	int i, length, n;

	length = strlen(str);
	n = (length - 1) / 2;
	if (length % 2 == 0)
		for (i = length / 2; i < length; i++)
			_putchar(str[i]);
	else
		for (i = n; i < length; i++)
			_putchar(str[i]);

	_putchar('\n');
}
