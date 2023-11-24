#include <stdio.h>
#include "main.h"

/**
 * flip_bits - check the code
 * @n: ...
 * @m: ....
 *
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = 0, count = 0;

	temp = n ^ m;
	while (temp)
	{
		if (temp & 1)
			count++;
		temp >>= 1;
	}
	return (count);
}
