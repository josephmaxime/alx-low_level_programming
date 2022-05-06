#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * change_coins - function to calculate number of coins
 *
 * @number: number to change to coins
 *
 * Return: integer
 */
int change_coins(int number)
{	int coins;

	coins = 0;
	if (number >= 25)
		coins += (number / 25) + change_coins(number % 25);
	else if (number >= 10)
		coins += (number / 10) + change_coins(number % 10);
	else if (number >= 5)
		coins += (number / 5) + change_coins(number % 5);
	else if (number >= 2)
		coins += (number / 2) + change_coins(number % 2);
	else if (number >= 1)
		coins += 1;
	else if (number == 0)
		coins += 0;
	return (coins);
}
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
	int number_coins, i, length;
	char elt;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		length = strlen(argv[1]);
		for (i = 0; i < length; i++)
		{
			elt = argv[1][i];
			if (!isdigit(elt))
			{
				return (0);
			}
		}
		number_coins = change_coins(atoi(argv[1]));
	}
	printf("%d\n", number_coins);
	return (0);
}
