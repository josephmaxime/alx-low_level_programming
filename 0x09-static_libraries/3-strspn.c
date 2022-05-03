#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - get length of a prefix
 *
 * @s: a pointer
 * @accept: the substring
 *
 * Return: a pointer to the memory area s.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
