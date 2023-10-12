#include "main.h"
/**
 * print_square - function that print a square
 * @size: how many time
 * Return: returns nothing
*/
void print_square(int size)
{
	int i;
	int c;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
