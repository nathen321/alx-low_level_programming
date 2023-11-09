#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum;

	if (n == 0)
		return (0);

	va_start (ap, n);

	sum = 0;
	for (x = 0; x < n; x++)
	{
		sum += va_arg (ap, int);
	}
	va_end (ap);
	return (sum);
}
