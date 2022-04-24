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

	/* ch = strtok(src, n);*/
	for (i = 0; i < n; i++)
		ch[i] = src[i];
	return (strcat(dest, ch));
}
