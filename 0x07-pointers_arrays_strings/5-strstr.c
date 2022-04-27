#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - first occurrence of string
 *
 * @haystack: a pointer to the memory or buffer.
 * @needle: string
 *
 * Return: a pointer to the memory area s.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strpbrk(haystack, needle));
}
