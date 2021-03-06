#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strlen_recursion - recursion with puts
 *
 * @s: string
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}
	length = 1 + _strlen_recursion(++s);
	return (length);
}
