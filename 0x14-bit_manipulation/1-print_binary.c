#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: ...
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
		return;
}
