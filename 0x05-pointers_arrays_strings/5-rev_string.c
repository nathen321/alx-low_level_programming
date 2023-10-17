#include "main.h"
/**
 * rev_string - revers the string str
 * @s: the str to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int z, y = 0;
	char h = s[0];

	while (s[y] != '\0')
		y++;
	for (z = 0; z < y; z++)
	{
		y--;
		h = s[z];
		s[z] = s[y];
		s[y]  = h;
	}
}
