#include "main.h"

/**
 * factorial - check the code
 * @n: what to print
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
