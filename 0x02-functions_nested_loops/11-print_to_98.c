#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print times table
 * @q: par of the func
 * Return: void
 */
void print_to_98(int q)
{
	if (q <= 98)
	{
		for (; q <= 98; q++)
		{
			if (q == 98)
			{
				printf("%d", q);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", q);
			}
		}
	}
	else
	{
		for (; q >= 98; q--)
		{
			if (q == 98)
			{
				printf("%d", q);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", q);
			}
		}
	}
}
