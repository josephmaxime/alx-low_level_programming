#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int result, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = 1;
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
