#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return pointer to newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer of that array
 */

char *_strdup(char *str)
{
	char *str_dup;
	int i, length;

	if (str == NULL)
		return (NULL);
	i = 0;
	length = strlen(str);
	str_dup = (char *)malloc(sizeof(*str) * length);
	while (i < length)
	{
		str_dup[i] = str[i];
		i++;
	}
	return (str_dup);
}
