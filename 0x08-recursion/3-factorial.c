#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: what to print
 * Return: void.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
