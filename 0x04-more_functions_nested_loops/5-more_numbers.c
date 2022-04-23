#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * more_numbers - 0 to 14
 *
 * Return: 0 Always success
 *
 */

void more_numbers(void)
{
	int i, cmpt;

	cmpt = 0;
	while (cmpt < 10)
	{
		for (i = 0; i < 14; i++)
		{
			if ((i / 10) > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		cmpt++;
	}
}


