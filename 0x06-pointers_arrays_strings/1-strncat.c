#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings with n
 *
 * @dest: destination
 * @src: source
 * @n: length of word
 *
 * Return: string of concatenate
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ch;
	int len_dest, i;

	i = 0;
	len_dest = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';
	return (dest);
}
