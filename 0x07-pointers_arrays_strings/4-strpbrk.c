#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - first occurrence of string
 *
 * @s: a pointer to the memory or buffer.
 * @accept: string
 *
 * Return: a pointer to the memory area s.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
