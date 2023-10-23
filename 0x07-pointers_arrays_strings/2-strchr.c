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

	while (s[x] != '\0')
	{
		if (s[x] == c)
			return (&s[x]);
		x++;
	}
	return (0);
}
