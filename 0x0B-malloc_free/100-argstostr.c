#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates concatenates all the arguments
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer of that array
 */

char *argstostr(int ac, char **av)
{
	int length;
	char *str_concat = "";

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	while (ac > 0)
	{
		length = strlen(av[ac]);
		str_concat = (char *)malloc(sizeof(char) * length + 1);
		if (str_concat == NULL)
			return (NULL);
		strcat(str_concat, av[ac]);
		printf("\n");
	}
	return (str_concat);
}
