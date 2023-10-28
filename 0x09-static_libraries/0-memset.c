#include "main.h"
/**
 * *_memset - file memory
 * @s: argument 1
 * @b: arg 2
 * @n: arg 3
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0, y = n;

	while (x < y)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
