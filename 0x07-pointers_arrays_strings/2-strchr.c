#include "main.h"
/**
 * *_strchr - file memory
 * @s: argument 1
 * @c: arg 2
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x])
	{
		if (c == s[x])
		{
			s += x - 1;
			return (s);
		}
		x++;
	}
	return ('\0');
}
