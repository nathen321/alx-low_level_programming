#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @src: the string to be added
 * @dest: were to add it
 * Return: a char
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
