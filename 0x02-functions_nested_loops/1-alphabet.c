#include "main.h"
/**
 * print_alphabet - print the alphabet
 *
 * Return: alway void (Success)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
