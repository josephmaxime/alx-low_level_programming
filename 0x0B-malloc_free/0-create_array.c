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

	str = malloc(size);
	str[0] = c;
	return (str);
}
