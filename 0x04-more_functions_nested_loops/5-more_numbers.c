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
	int a;

	for (i = 0; i <= 10; i++)
	{
		for (num = 48; num < 58; num++)
		{
			_putchar(num);
		}
		for (a = 48; a < 53; a++)
		{
			_putchar(49);
			_putchar(a);
		}
		_putchar('\n');
	}
}
