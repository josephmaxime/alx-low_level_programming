#include <stdio.h>

#include <string.h>

#include "main.h"

/**
 * _islower - checks if is lowercase
 * @c: the number to be checked
 *
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
