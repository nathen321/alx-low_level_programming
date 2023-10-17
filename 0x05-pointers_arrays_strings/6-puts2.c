#include "main.h"
/**
 * puts2 -  prints every other character
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int z, y = 0;

	while (str[y] != '\0')
		y++;
	for (z = 0; z < y; z += 2)
		_putchar(str[z]);
	_putchar('\n');
}
