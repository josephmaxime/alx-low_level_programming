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
	int  number_1, number_2;
	char *op;
	/* char op_b[] = {'+','-','*','/','%'}; */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	number_1 = atoi(argv[1]);
	number_2 = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL || op[1] != '\0' || argv[2] == ".")
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && number_2 == 0) || (*op == '%' && number_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	switch (op[0])
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			printf("%d\n", get_op_func(argv[2])(number_1, number_2));
			break;
		default:
		printf("Error\n");
		exit(99);
	}
	return (0);
}
