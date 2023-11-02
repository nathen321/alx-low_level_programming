#include "main.h"
#include <string.h>

/**
 * string_nconcat - check the code
 * @s1: par
 * @s2: par
 * @n: par
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int v, x, y, z, s;
	char *t;

	v = strlen(s1);
	x = strlen(s2);

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	if (x <= n)
		s = x;
	else
		s = n;
	t = malloc(sizeof(char) * (v + s - 1));
	if (t == NULL)
		return (NULL);
	for (y = 0; y < v; y++)
	{
		t[y] = s1[y];
	}
	for (z = 0; z < s; y++)
	{
		t[y] = s2[z];
		z++;
	}
	return (t);
}
