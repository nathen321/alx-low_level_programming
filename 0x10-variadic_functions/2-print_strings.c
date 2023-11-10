#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - ....
 * @n: ....
 * @separator: ...
 *
 * Return: Always sum.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (x < n)
		{
			string = va_arg(args, char *);
			if (string != NULL)
			{
				printf("%d", va_arg(args, int));
			} else
			{
				printf("(nil)");
			}

			if (x != n - 1  && separator != NULL)
				printf("%s", separator);

			x++;
		}
		va_end(args);
	}
	printf("\n");
}
