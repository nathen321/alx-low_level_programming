#include "main.h"
/**
 * _puts - print the string str
 * @str: the string to e printed
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
