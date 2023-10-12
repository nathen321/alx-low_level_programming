#include "main.h"
/**
 * print_line - function that print '_' n time
 * @n: how many time
 * Return: returns nothing
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n')
}
