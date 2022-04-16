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
	int n;

	for (n  = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
