#include "main.h"
/**
 * _strncmp - concatenates two strings.
 * @src: argument
 * @dest: argument 2
 * @n: it will use at most n bytes from src
 * Return: dest - src
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while ((s1[x] != '\0') && (s2[x] != '\0'))
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}
