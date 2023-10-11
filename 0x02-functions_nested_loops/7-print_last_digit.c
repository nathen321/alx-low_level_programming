#include "main.h"
/**
 * print_last_digit - calculate the absolute value of n
 *
 * @n: is what wil be tested
 *
 * Return: absolute vaue of n
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
