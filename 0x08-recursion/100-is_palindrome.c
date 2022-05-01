#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * isPal - recursive function check if s[min .. max] is palindrome.
 *
 * @s: string to check
 * @min: 0
 * @max: length of string
 *
 * Return: 1 if it is and 0 is not
 */

int isPal(char *s, int min, int max)
{
	if (s == e)
		return (1);

	/* if the first and last element of string are different */
	if (s[min] != s[max])
		return (0);
	if (min < max  + 1)
		return (isPal(s, s + 1, max - 1));
	return (1);
}

/**
 * is_palindrome - recursion with puts
 *
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int n;

	n = strlen(s);
	if (n == 0)
		return (1);
	return (isPal(s, 0, n - 1));
}
