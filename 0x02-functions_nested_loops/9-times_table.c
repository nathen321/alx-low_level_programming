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

	for (i = 0; i < 10 ; i++)
	{
		for (c = 0; c < 10; c++)
		{
			if ((i * c) > 9)
			{
				int u = (i * c) % 10;
				int d = (i * c) / 10;

				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				_putchar((i * c) + '0');
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
