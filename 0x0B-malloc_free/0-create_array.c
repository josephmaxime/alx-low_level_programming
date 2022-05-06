#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - create an array of char
 *
 * @size: size of array
 * @c: char of initialize
 *
 * Return: pointer of that array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char *)malloc(sizeof(*str) * size);
	if (str == NULL || size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
