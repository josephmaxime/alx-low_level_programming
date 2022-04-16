/**
 * main - Entry code
 *
 * Return:  0 IN THE END
 */
#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	char letter;
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);

}
