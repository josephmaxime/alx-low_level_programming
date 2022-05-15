#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry code.
 *
 * @argc: arguments count
 * @argv: arguments.
 * Return: 0 on surccess.
 *
 */

int main(int argc, char *argv[])
{
	int number_1, number_2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	number_1 = atoi(argv[1]);
	number_2 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(number_1, number_2));
	return (0);
}
