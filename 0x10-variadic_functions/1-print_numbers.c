#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print all the arguments
 *
 * @separator: separator of string
 * @n: number of argument
 * Return: 0 always for success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, number;

	if (n == 0 || separator == NULL)
		exit(0);
	va_start(ap, n); /* initialization */
	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, unsigned int); /* get the next argument val */
		printf("%d", number);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap); /* clean up */
	printf("\n");
}
