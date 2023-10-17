#include "main.h"
/**
 * print_rev - print the string str in rverse
 * @s: the str to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
