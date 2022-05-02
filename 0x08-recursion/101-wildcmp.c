#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * wildcmp - compare two strins
 *
 * @s1: sting 1
 * @s2: string 2
 * Return: 1 if two strings are equals and 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && s1 != NULL)
		return (1);
	return (0);
}
