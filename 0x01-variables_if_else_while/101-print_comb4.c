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
	int n, m, o;

	for (n = 0; n < 10; n++)
	{
		for (m = 1; m < 10; m++)
		{
			for (o = 1; o < 10; o++)
			{
				if (n < m && m < o)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(o + '0');
				}
				if (n < 7 && n < m && m < o)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
