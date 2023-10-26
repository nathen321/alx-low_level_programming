#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: what to print
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
