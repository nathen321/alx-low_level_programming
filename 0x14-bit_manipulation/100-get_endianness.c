#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check the code
 *
 * Return: Always 0.
 */
int get_endianness(void)
{
	int i = 1;

	char* c = ((char *)&i);

	if (c[1])
		return (1);
	else
		return (0);
}
