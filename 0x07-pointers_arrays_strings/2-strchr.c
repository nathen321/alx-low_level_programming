#include "main.h"
/**
 * *_strchr - file memory
 * @s: argument 1
 * @c: arg 2
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if (c == s[x])
		{
			s += x;
			return (s);
		}
	}
	return ('\0');
}
