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
        char tmp;
	int length;

	length = strlen(s);
	for (i = 0; i < length/2; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length -i - 1] = tmp;
	}
}
