#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include "main.h"

/**
 * _isalpha - checks if is lowercase letter
 * @c: the number to be checked
 *
 * Return: 1 if c is letter lowercase
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
