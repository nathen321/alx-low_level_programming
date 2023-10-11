#include "main.h"
/**
 * print_sign - check for char sign
 *
 * @n: is what wil be tested
 *
 * Return: 1 for positive -1 for negative value
 */
int print_sign(int n)
{
	if (n == 0)
		_putchar("0");
		return (0);
	else if (n < 0)
		_putchar("-");
		return (-1);
	else if (n > 0)
		_putchar("+");
		return (1);
}
