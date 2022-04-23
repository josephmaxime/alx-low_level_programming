#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks if is lowercase
 *
 * @c: the number to be checked
 *
 * Return: 1 if c is lowercase
 *
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}


