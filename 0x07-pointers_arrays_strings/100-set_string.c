#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * set_string - set the value of pointer to a char
 *
 * @s: double pointer of char
 * @to: pointer of char
 *
 * Return: a pointer to the memory area s.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
