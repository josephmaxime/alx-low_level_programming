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
	int i;

	str = malloc(size);
	str[0] = c;
	if (size == 0)
		return (NULL);
	str = malloc(sizeof(*str) * size);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
