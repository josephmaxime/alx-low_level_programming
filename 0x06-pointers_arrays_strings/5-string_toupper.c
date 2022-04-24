#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 *
 * @str:
 *
 * Return: string of concatenate
 */

char *string_toupper(char *str)
{
	int i;
	char ch;

	i = 0;
	while (str[i])
	{
		ch = toupper(str[i]);
		str[i] = ch;
		i++;
	}
	return (str);
}
