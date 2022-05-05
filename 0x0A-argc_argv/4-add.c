#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

	if (argc == 1)
	{
	}
	result = 0;
	for (i = 1; argv[i]; i++)
	{
		if (isdigit(*argv[i]))
			result += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
