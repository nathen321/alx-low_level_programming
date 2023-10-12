#include "main.h"
/**
 * print_diagonal - function that print a diagonal
 * @n: how many time
 * Return: returns nothing
*/
void print_diagonal(int n)
{
	int i;
	int c = 0;
	int p = 0;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (p <= n)
			{
				for (c = 0; c < p; c++)
				{
					_putchar(' ');
				}
				p++;
			}
			_putchar('/');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
