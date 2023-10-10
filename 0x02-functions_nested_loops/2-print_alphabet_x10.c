#include "main.h"
/**
 * print_alphabet_x10 print the alphabet ten time
 *
 * Return: alway void (Success)
 */
void print_alphabet_x10(void)
{
	char a;

	int i = 1;

	while (i <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
