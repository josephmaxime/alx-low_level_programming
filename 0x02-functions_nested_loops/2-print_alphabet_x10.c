#include <stdio.h>

#include <string.h>

#include "main.h"

/**
 * print_alphabet_x10 - display all*10 the letters of the alphabets
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
