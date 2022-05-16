#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - print all the arguments
 *
 * @format: list of type
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, length;
	char *string;
	char *separator = ", ";

	va_start(ap, format); /* initialization */
	i = 0;
	length = 0;
	while (format[i])
		length++;
	while (format != NULL && *(format + i) != '\0')
	{
		if (i == length - 1)
			separator = "";
		switch (format[i])
		{
			case ('c'):
				printf("%c%s", va_arg(ap, int), separator);
				break;
			case ('i'):
				printf("%d%s", va_arg(ap, int), separator);
				break;
			case ('f'):
				printf("%f%s", va_arg(ap, double), separator);
				break;
			case ('s'):
				str = va_arg(ap, char *);
				if (!str)
				{
					printf("(nil)%s", separator);
					break;
				}
		}
		i++;
	}
	va_end(ap); /* clean up */
	printf("\n");
}
