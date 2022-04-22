#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - put chain of char
 *
 * @str: pointer
 * Return: 0 Always in success
 */

void puts2(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = 0; i < length; i++)
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		else 
			continue;
}
