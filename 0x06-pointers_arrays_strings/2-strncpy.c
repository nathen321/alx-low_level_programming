#include "main.h"
/**
 * *_strncpy - concatenates two strings.
 * @src: the string to be added
 * @dest: were to add it
 * @n: it will use at most n bytes from src
 * Return: a char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while ((x < n) && (src[x] != '\0'))
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
