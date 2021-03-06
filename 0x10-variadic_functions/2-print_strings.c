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
	char *string;

	if (n > 0)
	{
		va_start(ap, n); /* initialization */
		for (i = 0; i < n; i++)
		{
			string = va_arg(ap, char *);
			if (string != NULL) /* get the next argument val */
				printf("%s", string);
			else
				printf("(nil)");
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(ap); /* clean up */
	}
	printf("\n");
}
