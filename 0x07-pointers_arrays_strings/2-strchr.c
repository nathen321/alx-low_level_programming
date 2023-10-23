#include "main.h"
/**
 * *_strchr - file memory
 * @s: argument 1
 * @c: arg 2
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int y = 0, x;

	while (s[y])
	{
		y++;
	}

	for (x = 0; x <= y; x++)
	{
		if (c == s[x])
		{
			s += x;
			return (s);
		}
	}
	return ('\0');
}
