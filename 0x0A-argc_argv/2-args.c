#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry code
 *
 * @argc: number of parameter
 * @argv: array of string of parameter
 *
 * Return: 0 for always success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
