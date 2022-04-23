#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _atoi - convert string to integer
 *
 * @s: pointer
 * Return: 0 Always in success
 */

int _atoi(char *s)
{
	int i, length, sign;
	char *val;

	length = strlen(s);
	sign = 1;
	for (i = 0; i < length; i++)
	{
		if (!(isdigit(s[i])) && s[i] == '-')
		{
			sign = -1 * sign;
			sign *= sign;
		}
		else if (!(isdigit(s[i])) && s[i] == '+')
			sign *= sign;
		else
			val += (atoi(s[i]) + '0');
	}
	return (sign * atoi(val));
}
