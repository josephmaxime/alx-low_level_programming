#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 *
 * @str: array of char
 *
 * Return: pointer of that array
 */

char **strtow(char *str)
{
	int length, i;
	char *str_concat;
	char delimiter;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	length = strlen(str);
	str_concat = (char *)malloc(sizeof(char) * length);
	if (str_concat == NULL)
	{
		/* free(str_concat); */
		return (NULL);
	}
	delimiter = "";
	str_concat = strtok(str, delimiter);
	return (str_concat);
}
