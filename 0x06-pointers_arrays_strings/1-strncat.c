#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @src: the string to be added
 * @dest: were to add it
 * @n: it will use at most n bytes from src
 * Return: a char
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y <= n && src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	return (dest);
}
