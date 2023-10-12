#include "main.h"
/**
 * more_numbers - function that print all numbers from
 *0 to 9 ten time
 *Return: returns nothing
*/
void more_numbers(void)
{
	int num = 48;
	int i;

	for (i = 0; i <= 10; i++)
	{
		int i;

		for (num = 48; num < 58; num++)
		{
			_putchar(num);
		}
		for (i = 48; i < 53; i++)
		{
			_putchar(49);
			_putchar(i);
		}
		_putchar('\n');
	}
}
