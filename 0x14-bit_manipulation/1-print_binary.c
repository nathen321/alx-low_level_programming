#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 * @n: ...
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		while (n)
		{
			if (n & 1)
				_putchar('1');
			else
				_putchar('0');
			n = n >> 1;
		}
	}
	else
		_putchar('0');
}
