#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - change value of poiter to 98
 *
 * @s: pointer
 * Return: 0 Always in success
 */

void rev_string(char *s)
{
	int i;
	char *str;
	int length;

	length = strlen(s);
	*str = s[length];
	for (i = (length - 1); i >= 0; i--)
	{
		str[i] = s[i];
	}
	*s = *str;
}
