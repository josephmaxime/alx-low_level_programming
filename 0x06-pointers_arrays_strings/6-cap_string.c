#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalize all word
 *
 * @str: string
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && isalpha(s[i]))
			s[i] = toupper(s[i]);
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j] && isalpha(s[i + 1]))
			{
				s[i + 1] = toupper(s[i + 1]);
			}
		}
	}
	return (s);
}
