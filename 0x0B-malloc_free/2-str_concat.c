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

	if (s1 == NULL)
	{
		s1 = "";
		length1 = 0;
	}
	else
		length1 = strlen(s1);
	if (s2 == NULL)
	{
		s2 = "";
		length2 = 0;
	}
	else
		length2 = strlen(s2);
	str_concat = (char *)malloc(length1 + length2 + 1);
	if (str_concat == NULL)
		return (NULL);
	strcat(str_concat, s1);
	strcat(str_concat, s2);
	return (str_concat);
}
