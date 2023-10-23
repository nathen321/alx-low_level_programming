#include "main.h"
/**
 * *_memcpy - file memory
 * @dest: argument 1
 * @src: arg 2
 * @n: arg 3
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0, y = n;

	while (x < y)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
