#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - return pointer to allocated to the newly allocate memory
 *
 * @n: size of string
 * @s2: string
 * @s1: string
 * Return: pointer to allocated for contain s1 and s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length, length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = strlen(s1);
	length2 = strlen(s2);
	if (n >= length2)
	{
		n = length2;
	}
	ptr = malloc(sizeof(char *) * (length + n + 1));
	if (ptr == NULL)
		return (NULL);
	strcat(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
