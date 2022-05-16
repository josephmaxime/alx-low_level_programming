#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all the arguments
 *
 * @n: number of argument
 * Return: 0 always for success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(ap, n); /* initialization */
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int); /* get the next argument value */
	}
	va_end(ap); /* clean up */
	return (0);
}
