#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print all the strings arguments
 *
 * @separator: separator of string
 * @n: number of argument
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n > 0)
	{
		va_start(ap, n); /* initialization */
		for (i = 0; i < n; i++)
		{
			if (va_arg(ap, unsigned int) != NULL) /* get the next argument val */
				printf("%s", var_arg(ap, unsigned int));
			else
				printf("(nil)");
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(ap); /* clean up */
	}
	printf("\n");
}
