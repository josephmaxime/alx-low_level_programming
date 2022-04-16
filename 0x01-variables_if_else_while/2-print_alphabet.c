/**
 * main - Entry code
 *
 * Return: positive, negative or 0 the value of n
 */
#include <stdio.h>

#include <stdlib.h>


/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);

}
