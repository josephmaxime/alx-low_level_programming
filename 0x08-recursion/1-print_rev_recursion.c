#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _print_rev_recursion - recursion with puts
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	char c;

	if (*s == '\0')
	{
		return;
	}
	c = *s;
	_puts_recursion(++s);	
	_putchar(c);
}
