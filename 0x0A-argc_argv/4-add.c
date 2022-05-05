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
	int result, i, j, length;
	char elt;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		result = 0;
		for (j = 1; j < argc; j++)
		{
			length = strlen(argv[j]);
			for (i = 0; i < length; i++)
			{
				elt = argv[j][i];
				if (!isdigit(elt))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[j]);
		}
		printf("%d\n", result);
	}
	return (0);
}
