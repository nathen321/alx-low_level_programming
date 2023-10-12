#include "main.h"
/**
 * print_most_numbers - function that print all numbers from
 *0 to 9
 *Return: returns nothing
*/
void print_most_numbers(void)
{
	int num = 48;

	for (num = 48; num < 58; num++)
	{
		if ((num == 52) || (num == 50))
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n');
}
