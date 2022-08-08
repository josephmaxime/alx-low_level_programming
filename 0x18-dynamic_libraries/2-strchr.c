#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - search first first c in string s
 *
 * @s: a pointer to char
 * @c: the character
 *
 * Return: a pointer to the memory area s.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
