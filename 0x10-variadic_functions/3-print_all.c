#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - ....
 * @format: ....
 *
 * Return: Always sum.
 */
void print_all(const char * const format, ...)
{
	fm_t forma_type[] = {
		{ "c", print_char },
		{ "i", print_integer },
		{ "f", print_float },
		{ "s", print_string }
	};
	va_list ap;
	unsigned int i = 0, j = 0;
	char *sep = "";

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *forma_type[j].id)
			{
				forma_type[j].f(ap, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_char - ....
 * @val: ....
 * @sep: ....
 *
 * Return: Always sum.
 */
void print_char(va_list val, char *sep)
{
	printf("%s%c", sep, va_arg(val, int));
}

/**
 * print_integer - ....
 * @val: ....
 * @sep: ....
 *
 * Return: Always sum.
 */
void print_integer(va_list val, char *sep)
{
	printf("%s%i", sep, va_arg(val, int));
}

/**
 * print_float - ....
 * @val: ....
 * @sep: ....
 *
 * Return: Always sum.
 */
void print_float(va_list val, char *sep)
{
	printf("%s%f", sep, va_arg(val, double));
}
/**
 * print_string - ....
 * @val: ....
 * @sep: ....
 *
 * Return: Always sum.
 */
void print_string(va_list val, char *sep)
{
	char *str = va_arg(val, char *);

	if (str == NULL)
	{
		printf("%s%s", sep, "(nil)");
		return;
	}
	printf("%s%s", sep, str);
}
