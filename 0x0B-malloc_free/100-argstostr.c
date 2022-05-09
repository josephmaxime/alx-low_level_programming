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
	int length1;
	char *str_concat;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	while (0 < ac)
		length = strlen(argv[ac]);
		str_concat = (char *)malloc(sizeof(char) * length);
		if (str_concat == NULL)
			return (NULL);
		strcat(str_concat, argv[ac]);
		printf("\n");
	return (str_concat);
}
