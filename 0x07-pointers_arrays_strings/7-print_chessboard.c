#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - first occurrence of string
 *
 * @a: array of two dimensions
 */

void print_chessboard(char (*a)[8])
{
	int i, j, length;

	length = sizeof(a) / 8;
	for (i = 0; i < length; i++)
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
}
