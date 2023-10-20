#include "main.h"
/**
 * _strcmp - concatenates two strings.
 * @s1: argument 1
 * @s2: argument 2
 * Return: s1 - s2
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
