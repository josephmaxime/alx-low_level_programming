#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: pointer of that array
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int length1, length2;

	length1 = strlen(s1);
	length2 = strlen(s2);

	if (s1 == NULL)
	{
		str_concat = (char *)malloc(length2 + 1);
		str_concat =  strcat("", s2);
	}
	else if (s2 == NULL)
	{
		str_concat = (char *)malloc(length1 + 1);
		str_concat = strcat(s1, "");
	}
	else
	{
		str_concat = (char *)malloc(length1 + length2 + 1);
		if (str_concat == NULL)
			return (NULL);
		str_concat = strcat(s1, s2);
	}
	/* str_concat[length1 + length2] = '\0'; */
	return (str_concat);
}
