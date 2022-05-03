#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if is lowercase
 *
 * @c: the number to be checked
 *
 * Return: 1 if c is uppercase
 *
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}


