#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _puts_recursion - recursion with puts
 *
 * @s: string
 */

void _puts_recursion(char *s)
{
	int i, length;

	length = strlen(s);
	for (i = 0; i < length; i++)
		_putchar(s[i]);
}
