#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry code
 *
 * Return: 0 Always for success
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 10;
	while (i < 10)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

