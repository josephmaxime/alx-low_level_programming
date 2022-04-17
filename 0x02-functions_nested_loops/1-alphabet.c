#include <stdio.h>

#include <string.h>

#include "main.h"

/**
 * print_alphabet - display all the letters of the alphabets
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
