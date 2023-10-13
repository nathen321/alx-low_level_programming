#include "main.h"
/**
 * print_triangle - function that print a triangle
 * @size: how big
 * Return: returns nothing
*/
void print_triangle(int size)
{
	int i;
	int c;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (c = 1; c <= size; c++)
			{
				if (c <= (size -i))
					_putchar(' ');
				else
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
