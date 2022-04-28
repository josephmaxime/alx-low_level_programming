#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

/**
 * rot13 - rotate a place of letter
 *
 * @s: strings
 *
 * Return: string of concatenate
 */

char *rot13(char *s)
{
	int i, key, length;

	key = 13;
	length = strlen(s);
	for (i = 0; i < length; i++)
	{
		if (isalpha(s[i]))
		{
			s[i] = (s[i] + key) % 26;
		}
	}
	return (s);
}
