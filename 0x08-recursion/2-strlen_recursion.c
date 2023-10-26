#include "main.h"

/**
 * _strlen_recursion - check the code
 * @s: what to print
 * Return: void.
 */
int _strlen_recursion(char *s)
{
	int sum = 1;

	if (s[0] == '\0')
	{
		return (sum - 1);
	}
	sum += _strlen_recursion(s + 1);
	return (sum);
}
