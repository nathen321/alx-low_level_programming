#include "main.h"
/**
 * times_table - print times table
 *
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int c;

	for (i = 1; i < 10 ; i++)
	{
		_putchar('0');
		for (c = 1; c < 10; c++)
		{
			if ((i * c) > 9)
			{
				int u = (i * c) % 10;
				int d = (i * c) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((i * c) + '0');
			}
		}
		_putchar('\n');
	}
}
