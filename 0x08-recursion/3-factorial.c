#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: what to print
 * Return: void.
 */
int factorial(int n)
{
	sum = 1;

	if (n == 1)
	{
		return (1);
	}
	sum = sum * n * factorial(n - 1);
	return (sum);
}
