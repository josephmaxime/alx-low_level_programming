#include <stdio.h>

#include <string.h>

#include "main.h"

/**
 * main - Entry
 *
 * Return: 0 for succes
 *
 */

/* function _putchar() description */
int main(void)
{
	int i;
	String s = "_putchar\n";
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
