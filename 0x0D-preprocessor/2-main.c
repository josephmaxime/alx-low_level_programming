#include <stdio.h>
#include <stdlib.h>

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

	length = strlen(argv[0]);
	for (i = 0; i < length; i++)
		putchar(argv[0][i]);
	return (0);
}
