#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints two half of the string
 * @a: the area to print from
 * @n: how many to print from the start
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(" ,");
		}
	}
	printf("\n");
}
