#include "main.h"
/**
 * puts_half -  prints two half of the string
 * @str: the string to be halfed
 * Return: void
 */
void puts_half(char *str)
{
	int x, y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	if ((y % 2) == 1)
	{
		x = (y - 1) / 2;
		x++;
	}
	else
	{
		x = y / 2;
	}
	for (; x < y; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
