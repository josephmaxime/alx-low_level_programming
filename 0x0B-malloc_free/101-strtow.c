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
	int length, i, count;
	char **str_concat;
	char delimiter[] = "";
	char *token = strtok(str, delimiter);

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	count = 0;
	while(*str != '\0')
	{
		if (str == delimiter)
		{
			count++;
		}
		str ++;
	}
	count += length + 1;
	str_concat = malloc(sizeof(char *) * count);
	if (str_concat == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (token != NULL)
	{
		str_concat[i] = token;
		token = strtok(NULL, delimiter);
		i++;
	}
	return (str_concat);
}
