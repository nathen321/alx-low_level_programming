#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: ...
 *
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0, mul = 1;

	if (b != NULL)
	{
		while (b[i])
			i++;
		while (i--)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			if (b[i] == '1')
				sum += mul;
			mul = mul * 2;
		}
		return (sum);
	}
	else
		return (0);
}
