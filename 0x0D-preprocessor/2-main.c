#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry code
 *
 * @argc: number of parameter
 * @argv: array of parameter
 *
 * Return: 0 Always true
 */

int main(int argc, char **argv)
{
	int i, length;

	if (argc == 0)
		length = strlen(argv[argc]);
		for (i = 0; i < length; i++)
			putchar(argv[argc][i]);
			putchar('\n');
	return (0);
}
