#include "main.h"
/**
 * *_strcpy -  copy str into another string
 * @src: the string to be copyd
 * @dest: were to copy it
 * Return: a char
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0, y;

	while (src[x] != '\0')
		x++;
	for (y = 0; y <= x; y++)
		dest[y] = src[y];
	dest[y++] = '\0';
	return (dest);
}
