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
	int length, i;
	char *str_concat;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac ; i++)
	{
		length += strlen(av[i]) + 1;
	}
	str_concat = (char *)malloc(sizeof(char) * length + 1);
	if (str_concat == NULL)
	{
		free(str_concat);
		return (NULL);
	}
	for (i = 0; i < ac ; i++)
	{
		strcat(str_concat, av[i]);
		strcat(str_concat, "\n");
	}
	return (str_concat);
}
